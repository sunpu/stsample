#include "xmppclient.h"

using namespace std;
using namespace gloox;
using namespace tahiti;

CEventHandler::CEventHandler()
{
	m_count = 0;
}

CEventHandler::~CEventHandler()
{
}

void CEventHandler::resetHeartBeatCount()
{
	m_count = 0;
	return;
}

void CEventHandler::increaceHeartBeatCount()
{
	m_count++;
	return;
}

void CEventHandler::decreaceHeartBeatCount()
{
	if (m_count > 0)
	{
		m_count--;
	}
	return;
}

void CEventHandler::handleEvent(const Event& event)
{
	string sEvent;
	switch (event.eventType())
	{
	case Event::PingPing:
		sEvent = "PingPing";
		break;
	case Event::PingPong:
		sEvent = "PingPong";
		decreaceHeartBeatCount();
		break;
	case Event::PingError:
		sEvent = "PingError";
		break;
	default:
		break;
	}
	//printf("handleEvent:-------------%s\n", sEvent.c_str());
	return;
}

static string getIPAddress()
{
	QString localAddr = "";
	/*QList<QHostAddress> addrList = QNetworkInterface::allAddresses();
	for (int i = 0; i < addrList.count(); i++)
	{
		if (addrList[i].protocol() == QAbstractSocket::IPv4Protocol
			&& !(addrList[i].toString().contains("127.0.")))
		{
			localAddr = addrList[i].toString();
			break;
		}
	}*/

	return localAddr.toStdString();
}

static string getMacAddress()
{
	QString macAddr = "";
	/*QList<QNetworkInterface> macList = QNetworkInterface::allInterfaces();
	for (int i = 0; i < macList.count(); i++)
	{
		if (macList[i].flags().testFlag(QNetworkInterface::IsUp)
			&& macList[i].flags().testFlag(QNetworkInterface::IsRunning)
			&& !macList[i].flags().testFlag(QNetworkInterface::IsLoopBack))
		{
			macAddr = macList[i].hardwareAddress();
			break;
		}
	}
	macAddr = macAddr.replace(":", "");
	TAHITI_INFO("Mac address:[" << macAddr.toStdString().c_str() << "]");*/
	return macAddr.toStdString();
}

XmppClient::XmppClient()
{
	//m_ipAddress = getIPAddress();
	//m_macAddress = getMacAddress();
	m_ipAddress = "";
	m_macAddress = "";
	m_requestId = 0;
	m_xmppStatus = Presence::Unavailable;
	m_needLogin = true;
	m_client = NULL;

	qRegisterMetaType<QVariant>("QVariant");
}

XmppClient::~XmppClient()
{
	m_requestId = 0;
	m_xmppStatus = Presence::Unavailable;
	m_needLogin = true;
	if (m_client)
	{
		QMap<QString, MessageSession*>::Iterator it;
		for (it = m_sessionMap.begin(); it != m_sessionMap.end(); it++)
		{
			m_client->disposeMessageSession(it.value());
		}
		delete(m_client);
		m_client = NULL;
	}
}

void XmppClient::setXmppAccount(QString user, QString passwd, QString server)
{
	m_xmppUser = user;
	m_xmppServerIP = server;
	m_xmppPasswd = passwd;
}

void XmppClient::createNewClient()
{
	char jidTmp[JID_LEN];
	memset(jidTmp, 0, JID_LEN);
	sprintf(jidTmp, "%s@%s/%s", m_xmppUser.toUtf8().constData(), m_xmppServerIP.toUtf8().constData(), DEV_TYPE);
	TAHITI_INFO("jid:" << jidTmp);

	JID jid(jidTmp);
	if (m_client)
	{
		delete(m_client);
		m_client = NULL;
	}
	m_client = new Client(jid, m_xmppPasswd.toUtf8().constData());

	m_client->registerConnectionListener(this);
	m_client->registerMessageSessionHandler(this, 0);
	m_client->rosterManager()->registerRosterListener(this);
	m_vManager = new VCardManager(m_client);
}

Presence::PresenceType XmppClient::getXmppStatus()
{
	return m_xmppStatus;
}

void XmppClient::setXmppStatus(Presence::PresenceType status)
{
	m_xmppStatus = status;
}

void XmppClient::notifyMyInfo()
{
	m_client->setPresence(m_xmppStatus, 0, "");
}

int XmppClient::getKeepaliveInterval()
{
	return m_keepaliveInterval;
}

int XmppClient::getKeepaliveCount()
{
	return m_keepaliveCount;
}

void* XmppClient::keepaliveProc(void* args)
{
	return NULL;
	CEventHandler* pEventHandler = new CEventHandler();
	XmppClient* xmppClient = (XmppClient*)args;
	Client* client = (Client*)xmppClient->getClient();
	while (true)
	{
		if (xmppClient->getXmppStatus() == Presence::Unavailable)
		{
			QThread::usleep(500);
			if (xmppClient->isNeedLogin())
			{
				TAHITI_INFO("keepalive try to login xmpp server...");
				xmppClient->login();
				pEventHandler->resetHeartBeatCount();
			}
			continue;
		}

		int interval = xmppClient->getKeepaliveInterval();
		int count = xmppClient->getKeepaliveCount();
		//QThread::sleep(interval);
		QThread::sleep(3);

		if (pEventHandler->getHeartBeatCount() > count)
		{
			TAHITI_ERROR("keepalive timeout, times > " << count << "!!!");
			xmppClient->setXmppStatus(Presence::Unavailable);
			continue;
		}
		client->xmppPing(JID(STR_EMPTY), pEventHandler);
		pEventHandler->increaceHeartBeatCount();
	}
	delete pEventHandler;
}

void XmppClient::run()
{
	createNewClient();
	login();
	pthread_create(&m_tidKeepalive, NULL, keepaliveProc, this);
}

/* 登录 */
void XmppClient::login()
{
	m_needLogin = true;
	if (m_xmppStatus == Presence::Chat || m_xmppStatus == Presence::DND)
	{
		return;
	}

	notifyMyInfo();

	pthread_create(&m_tidConnect, NULL, longConnectProc, m_client);
}

void* XmppClient::longConnectProc(void* args)
{
	TAHITI_INFO("longConnectProc...");
	Client* client = (Client*)args;
	client->connect();
	return NULL;
}

/* 登出 */
void XmppClient::logout()
{
	m_needLogin = false;
	if (m_xmppStatus == Presence::Unavailable)
	{
		return;
	}
	if (m_client)
	{
		m_client->disconnect();
	}
	setXmppStatus(Presence::Unavailable);
}

/* 连接上 */
void XmppClient::onConnect()
{
	TAHITI_INFO("connect server success!");

	setXmppStatus(Presence::Chat);
	notifyMyInfo();
	//subscribeOther("aaa@localhost");
	m_selfInfo.jid = m_client->jid().bare().c_str();
	queryVCard(m_selfInfo.jid);

	Q_EMIT loginResult(true);
}

/* 连接丢失 */
void XmppClient::onDisconnect(ConnectionError e)
{
	TAHITI_INFO("disconnect server!");
	setXmppStatus(Presence::Unavailable);
	//delete(m_client);
	Q_EMIT loginResult(false);
}

bool XmppClient::onTLSConnect(const CertInfo& info)
{
	return true;
}

/* 获得花名册 */
void XmppClient::queryRoster()
{
	Roster* roster = m_client->rosterManager()->roster();
	Roster::const_iterator it;
	for (it = roster->begin(); it != roster->end(); it++)
	{
		UserInfo info;
		info.jid = (*it).second->jidJID().full().c_str();
		m_friendList.append(info);

		// 获取card信息
		queryVCard((*it).second->jidJID().full().c_str());
	}
}

QList<UserInfo> XmppClient::getRoster()
{
	return m_friendList;
}

UserInfo XmppClient::getSelfInfo()
{
	return m_selfInfo;
}

/* 修改密码 */
void XmppClient::modifyPasswd(QString password)
{
	Registration* m_reg = new Registration(m_client);
	m_reg->registerRegistrationHandler(this);
	m_reg->changePassword("st2", "admin");
}
void XmppClient::handleRegistrationFields(const JID& /*from*/, int fields, std::string instructions)
{
	printf("fields: %d\ninstructions: %s\n", fields, instructions.c_str());
}

void XmppClient::handleRegistrationResult(const JID& /*from*/, RegistrationResult result)
{
	printf("result: %d\n", result);
}

void XmppClient::handleAlreadyRegistered(const JID& /*from*/)
{
	printf("the account already exists.\n");
}

void XmppClient::handleDataForm(const JID& /*from*/, const DataForm& /*form*/)
{
	printf("datForm received\n");
}

void XmppClient::handleOOB(const JID& /*from*/, const OOB& oob)
{
	printf("OOB registration requested. %s: %s\n", oob.desc().c_str(), oob.url().c_str());
}

/* 查询个人资料 */
void XmppClient::queryVCard(QString id)
{
	JID jid(id.toUtf8().constData());
	m_vManager->fetchVCard(jid, this);
}

void XmppClient::handleVCard(const JID& jid, const VCard *v)
{
	if (!v)
	{
		printf("empty vcard!\n");
		return;
	}

	m_current_vcard = new VCard(*v);
	//printf("received vcard for %s: %s\n", jid.full().c_str(), m_current_vcard->tag()->xml().c_str());
	QString path = QStandardPaths::writableLocation(QStandardPaths::GenericConfigLocation)
		+ DATA_ROOT_PATH + AVATAR_PATH + QString(jid.full().c_str()) + QString(".jpg");
	string photoContent;
	photoContent = m_current_vcard->photo().binval;
	if (!QFile::exists(path))
	{
		if (photoContent.size() != 0)
		{
			QFile file(path);
			file.open(QIODevice::WriteOnly);
			file.write(photoContent.c_str(), photoContent.size());
			file.close();
		}
	}
	// 如果是自己，更新本人资料
	if (m_selfInfo.jid == jid.full().c_str())
	{
		if (photoContent.size() != 0)
		{
			m_selfInfo.photoPath = path;
		}
		if (m_current_vcard->nickname().size() == 0)
		{
			m_selfInfo.userName = m_selfInfo.jid;
		}
		else
		{
			m_selfInfo.userName = m_current_vcard->nickname().c_str();
		}
		return;
	}	

	// 如果已经是好友，将更新当前资料
	QList<UserInfo>::iterator it;
	for (it = m_friendList.begin(); it != m_friendList.end(); it++)
	{
		if (it->jid == jid.full().c_str())
		{
			if (photoContent.size() != 0)
			{
				it->photoPath = path;
			}
			if (m_current_vcard->nickname().size() == 0)
			{
				it->userName = it->jid;
			}
			else
			{
				it->userName = m_current_vcard->nickname().c_str();
			}
			return;
		}
	}

	// 如果不是好友，将返回用户资料
	UserInfo userInfo;
	userInfo.jid = jid.full().c_str();
	userInfo.userName = m_current_vcard->nickname().c_str();
	if (photoContent.size() != 0)
	{
		userInfo.photoPath = path;
	}
	QVariant userInfoVar;
	userInfoVar.setValue(userInfo);
	Q_EMIT contactFoundResult(1, userInfoVar);
}

/* 修改个人资料 */
void XmppClient::modifyVCard()
{
	VCard* vcard = new VCard(*m_current_vcard);
	vcard->setFormattedname("Hurk the Hurk");
	vcard->setNickname("hurkhurk");
	vcard->setName("Simpson", "Bart", "", "Mr.", "jr.");
	vcard->addAddress("pobox", "app. 2", "street", "Springfield", "region", "123", "USA", VCard::AddrTypeHome);
	printf("setting vcard: %s\n", m_current_vcard->tag()->xml().c_str());

	/* 图片 */
	QFile file("test.jpg");
	file.open(QIODevice::ReadOnly);
	QByteArray s = file.readAll();
	vcard->setPhoto("image/jpeg", s.toStdString());
	m_vManager->storeVCard(vcard, this);
}

void XmppClient::handleVCardResult(VCardContext context, const JID& jid,
	StanzaError se)
{
	printf("vcard result: context: %d, jid: %s, error: %d\n", context, jid.full().c_str(), se);
}

/* 消息发送 */
void XmppClient::sendMsg(QString dest, QString msg)
{
	/*JID jid(dest.toUtf8().constData());
	MessageSession* mess = new MessageSession(m_client, jid);
	mess->send(msg.toUtf8().constData());*/

	JID jid(dest.toUtf8().constData());
	if (!m_sessionMap.contains(dest))
	{
		MessageSession* mess = new MessageSession(m_client, jid);
		//m_client->disposeMessageSession(mess);
		mess->registerMessageHandler(this);
		m_msgEventFilter = new MessageEventFilter(mess);
		m_msgEventFilter->registerMessageEventHandler(this);
		m_sessionMap[dest] = mess;
	}
	m_sessionMap[dest]->send(msg.toUtf8().constData());
	//m_client->disposeMessageSession(mess);*/
}

/* 消息接收 */
void XmppClient::handleMessageEvent(const JID& from, MessageEventType event)
{
	printf("received event: %d from: %s\n", event, from.full().c_str());
}

void XmppClient::handleMessageSession(MessageSession* session)
{
	printf("got new session\n");
	// this example can handle only one session. so we get rid of the old session
	if (!m_sessionMap.contains(session->target().bare().c_str()))
	{
		MessageSession* mess = session;
		//m_client->disposeMessageSession(mess);
		mess->registerMessageHandler(this);
		m_msgEventFilter = new MessageEventFilter(mess);
		m_msgEventFilter->registerMessageEventHandler(this);
		m_sessionMap[session->target().bare().c_str()] = mess;
	}
}

void XmppClient::handleMessage(const Message& msg, MessageSession* session)
{
	TAHITI_INFO("type:" << msg.subtype());

	if (msg.subtype() == Message::Chat && msg.body().size() != 0)
	{
		TAHITI_INFO("type:" << msg.subtype() << ", message:" << msg.body().c_str());
		Q_EMIT showMessage(msg.from().username().c_str(), msg.body().c_str());
	}
}

void XmppClient::handleLog(gloox::LogLevel level, LogArea area, const string& message)
{
	char buff[MSG_LEN] = { '\0' };
	sprintf(buff, "log: level: %d, area: %d, %s\n", level, area, message.c_str());
	TAHITI_INFO(buff);
}

void XmppClient::handleItemSubscribed(const JID& jid)
{
	printf("subscribed %s\n", jid.bare().c_str());
}

void XmppClient::handleItemAdded(const JID& jid)
{
	printf("added %s\n", jid.bare().c_str());
}

void XmppClient::handleItemUnsubscribed(const JID& jid)
{
	printf("unsubscribed %s\n", jid.bare().c_str());
}

void XmppClient::handleItemRemoved(const JID& jid)
{
	printf("removed %s\n", jid.bare().c_str());
}

void XmppClient::handleItemUpdated(const JID& jid)
{
	printf("updated %s\n", jid.bare().c_str());
}

void XmppClient::handleRoster(const Roster& roster)
{
	printf("roster arriving\nitems:\n");
}

void XmppClient::handleRosterError(const IQ& /*iq*/)
{
	printf("a roster-related error occured\n");
}

/* 好友出席状态信息 */
void XmppClient::handleRosterPresence(const RosterItem& item, const string& resource,
	Presence::PresenceType presence, const string& /*msg*/)
{
	printf("presence received: %s/%s -- %d\n", item.jidJID().full().c_str(), resource.c_str(), presence);
}

void XmppClient::handleSelfPresence(const RosterItem& item, const string& resource,
	Presence::PresenceType presence, const string& /*msg*/)
{
	printf("self presence received: %s/%s -- %d\n", item.jidJID().full().c_str(), resource.c_str(), presence);
}

/* 订阅对方 */
bool XmppClient::subscribeOther(QString jid)
{
	StringList groups;
	JID id(jid.toUtf8().constData());
	m_client->rosterManager()->subscribe(id, STR_EMPTY, groups, STR_EMPTY);
	return true;
}

/* 取关对方 */
bool XmppClient::unsubscribeOther(QString jid)
{
	JID id(jid.toUtf8().constData());
	m_client->rosterManager()->unsubscribe(id, STR_EMPTY);
	return true;
}

/* 处理对方的订阅请求 */
bool XmppClient::handleSubscriptionRequest(const JID& jid, const string& /*msg*/)
{
	printf("subscription: %s\n", jid.bare().c_str());
	return true;
}

/* 处理对方的取关请求 */
bool XmppClient::handleUnsubscriptionRequest(const JID& jid, const string& /*msg*/)
{
	printf("unsubscription: %s\n", jid.bare().c_str());
	return true;
}

void XmppClient::handleNonrosterPresence(const Presence& presence)
{
	printf("received presence from entity not in the roster: %s\n", presence.from().full().c_str());
}

Client* XmppClient::getClient()
{
	return m_client;
}

















/*string XmppClient::deviceName(string deviceName)
{
	if (!deviceName.empty())
	{
		TAHITI_INFO("set deviceName:[" << deviceName.c_str() << "]");
		m_deviceName = deviceName;
	}
	TAHITI_INFO("get deviceName:[" << m_deviceName.c_str() << "]");
	return m_deviceName;
}

string XmppClient::xmppAccount(string xmppAccount)
{
	if (!xmppAccount.empty())
	{
		TAHITI_INFO("set xmppAccount:[" << xmppAccount.c_str() << "]");
		m_xmppAccount = xmppAccount;

		Json::Value xmppAccountJson;
		Json::Reader reader;
		if (reader.parse(xmppAccount, xmppAccountJson))
		{
			m_xmppUser = xmppAccountJson["user"].asCString();
			m_xmppPasswd = xmppAccountJson["passwd"].asCString();
			m_xmppServerIP = xmppAccountJson["server"].asCString();
			m_xmppID = xmppAccountJson["id"].asCString();
			TAHITI_INFO("user:[" << m_xmppUser.c_str() << "],passwd:[" << m_xmppPasswd.c_str()
				<< "],server:[" << m_xmppServerIP.c_str() << "],id:[" << m_xmppID.c_str()
				<< "]");
			createNewClient();
		}
	}
	TAHITI_INFO("get xmppAccount:[" << m_xmppAccount.c_str() << "]");
	return m_xmppAccount;
}

string XmppClient::xmppStatus()
{
	string status;
	switch (m_xmppStatus)
	{
	case Presence::Chat:
		status = "chat";
		break;
	case Presence::DND:
		status = "dnd";
		break;
	case Presence::Unavailable:
		status = "offline";
		break;
	default:
		status = "unknown";
		break;
	}
	TAHITI_INFO("get xmppStatus:[" << m_xmppStatus << "]");
	return status;
}

string XmppClient::xmppLogin()
{
	TAHITI_INFO("xmppLogin...");
	login();
	return xmppStatus();
}

string XmppClient::xmppLogout()
{
	TAHITI_INFO("xmppLogout...");
	logout();
	return xmppStatus();
}

string XmppClient::xmppKeepalive(string xmppKeepalive)
{
	if (!xmppKeepalive.empty())
	{
		TAHITI_INFO("set xmppKeepalive:[" << xmppKeepalive.c_str() << "]");
		m_xmppKeepalive = xmppKeepalive;

		Json::Value xmppKeepaliveJson;
		Json::Reader reader;
		if (reader.parse(xmppKeepalive, xmppKeepaliveJson))
		{
			m_keepaliveInterval = xmppKeepaliveJson["interval"].asInt();
			m_keepaliveCount = xmppKeepaliveJson["count"].asInt();
			TAHITI_INFO("interval:[" << m_keepaliveInterval << "],count:["
				<< m_keepaliveCount << "]");
		}
	}
	TAHITI_INFO("get xmppKeepalive:[" << m_xmppKeepalive.c_str() << "]");
	return m_xmppKeepalive;
}
*/
