#include "stmain.h"

using namespace tahiti;

STMain::STMain(XmppClient* client) : m_xmppClient(client)
{

	ui.setupUi(this);

	// 状态初始化
	this->setWindowFlags(Qt::FramelessWindowHint); //去掉标题栏
	setAttribute(Qt::WA_TranslucentBackground);
	ui.pbNormal->setVisible(false);

	// 初始化搜索框
	QHBoxLayout* mainLayout = new QHBoxLayout;
	QPushButton* searchBtn = new QPushButton;
	searchBtn->setFixedSize(13, 13);
	searchBtn->setCursor(Qt::PointingHandCursor);
	searchBtn->setStyleSheet("QPushButton{border-image:url(:/STSample/Resources/images/search.png);"
		"background:transparent;cursor:pointer;}");
	mainLayout->addWidget(searchBtn);
	mainLayout->addStretch();
	mainLayout->setContentsMargins(8, 0, 0, 0);
	ui.leContactSearch->setTextMargins(13 + 8 + 2, 0, 0, 0);
	ui.leContactSearch->setContentsMargins(0, 0, 0, 0);
	ui.leContactSearch->setLayout(mainLayout);
	//ui.lineEdit->setStyleSheet("height:29px;border:1px solid #eaeaea;border-radius:14px;");
	ui.leContactSearch->setStyleSheet("border:1px solid gray;");

	// 初始化左侧工具栏
	ui.pbChat->setStyleSheet("QPushButton{border-image: url(:/STSample/Resources/images/chat_on.png);}");

	// 初始化右侧窗口
	initContactAddNew();

	m_contactDetail = new STContactDetail();
	ui.widContactDetail->layout()->addWidget(m_contactDetail);
	connect(m_contactDetail, SIGNAL(openChatDetail(QString)), this, SLOT(switchChatWindow(QString)));

	ui.lblDirect->installEventFilter(this);
	ui.lblFriend->installEventFilter(this);
	ui.widContactTitle->installEventFilter(this);
	ui.lblFriendNum->installEventFilter(this);
}

STMain::~STMain()
{
	delete m_contactDetail;
}

void STMain::initChatData()
{
	// 获得所有的聊天记录文件
	QString path = QStandardPaths::writableLocation(QStandardPaths::GenericConfigLocation)
		+ DATA_ROOT_PATH + RECORD_PATH;
	QDir dir(path);
	QStringList nameFilters;
	nameFilters << "*.dat";
	QStringList files = dir.entryList(nameFilters, QDir::Files | QDir::Readable, QDir::Time);

	// 获得好友列表
	QList<UserInfo> friendList = m_xmppClient->getRoster();
	QList<UserInfo>::const_iterator friendIt;

	STChatItem* chatItem;
	STChatDetail* chatDetail;
	QList<QString>::Iterator fileIt;
	// 过滤
	for (fileIt = files.begin(); fileIt != files.end(); fileIt++)
	{
		for (friendIt = friendList.constBegin(); friendIt != friendList.constEnd(); friendIt++)
		{
			if (fileIt->split(".")[0] == friendIt->jid)
			{
				chatItem = new STChatItem();
				chatItem->setUserInfo(*friendIt);
				m_chatItemList.push_back(chatItem);

				chatDetail = new STChatDetail(m_xmppClient);
				chatDetail->setChatDetail(*friendIt);
				connect(chatDetail, SIGNAL(changeChatListOrder(QString)), this, SLOT(reorderChatList(QString)));
				m_chatDetailList.push_back(chatDetail);

				ui.swChatDetail->addWidget(chatDetail);
			}
		}
	}
}

void STMain::initChatList()
{
	ui.lwChatList->clear();

	QListWidgetItem* item;
	QList<STChatItem*>::Iterator it;
	for (it = m_chatItemList.begin(); it != m_chatItemList.end(); it++)
	{
		item = new QListWidgetItem();
		ui.lwChatList->addItem(item);
		ui.lwChatList->setItemWidget(item, *it);
	}
}

void STMain::initChatMainWindow()
{
	ui.swChatDetail->setVisible(false);
	ui.widChatBlank->setVisible(true);
}

void STMain::initChatWindow()
{
	initChatData();
	initChatList();
	initChatMainWindow();
}

void STMain::reorderChatList(QString jid)
{
	int index = 0;
	STChatItem* chatItem;
	UserInfo userInfo;
	QList<STChatItem*>::Iterator it;
	for (it = m_chatItemList.begin(); it != m_chatItemList.end(); it++, index++)
	{
		if ((*it)->getUserInfo().jid == jid)
		{
			chatItem = *it;
			userInfo = (*it)->getUserInfo();
			break;
		}
	}

	STChatItem* chatItemNew = new STChatItem();
	chatItemNew->setUserInfo(userInfo);

	QListWidgetItem* item = ui.lwChatList->currentItem();
	ui.lwChatList->removeItemWidget(item);
	delete item;

	m_chatItemList.removeAt(index);
	m_chatItemList.push_front(chatItemNew);

	QListWidgetItem* itemNew = new QListWidgetItem();
	ui.lwChatList->insertItem(0, itemNew);
	ui.lwChatList->setItemWidget(itemNew, chatItemNew);

	ui.lwChatList->setCurrentRow(0);
}

void STMain::initContactAddNew()
{
	m_contactAddNew = new STContactAddNew(m_xmppClient);
	ui.widContactAddNew->layout()->addWidget(m_contactAddNew);
}

void STMain::initContactData()
{
	STContactItem* contactItem;

	QList<UserInfo> friendList = m_xmppClient->getRoster();
	QList<UserInfo>::const_iterator it;
	for (it = friendList.constBegin(); it != friendList.constEnd(); it++)
	{
		contactItem = new STContactItem();
		contactItem->setUserInfo(*it);
		m_contactItemList.push_back(contactItem);
	}
}

void STMain::initContactList()
{
	ui.lwContactList->clear();

	QListWidgetItem* item;
	QList<STContactItem*>::Iterator it;
	for (it = m_contactItemList.begin(); it != m_contactItemList.end(); it++)
	{
		item = new QListWidgetItem();
		ui.lwContactList->addItem(item);
		ui.lwContactList->setItemWidget(item, *it);
	}
	ui.lblFriendNum->setText(QString::number(m_contactItemList.size()));
}

void STMain::initContactMainWindow()
{
	ui.widContactDetail->setVisible(false);
	ui.widContactBlank->setVisible(true);
	ui.widContactAddNew->setVisible(false);
}

void STMain::initContactWindow()
{
	initContactData();
	initContactList();
	initContactMainWindow();
}

void STMain::init()
{
	// 初始化本人信息
	UserInfo selfInfo = m_xmppClient->getSelfInfo();
	QImage* image = new QImage(selfInfo.photoPath);
	ui.lblUserPic->setPixmap(QPixmap::fromImage(*image).scaled(45, 45));

	// 初始化聊天
	initChatWindow();

	// 初始化联系人
	initContactWindow();
}

void STMain::destroy()
{
	// 回收资源
	qDeleteAll(m_chatItemList);
	m_chatItemList.clear();

	qDeleteAll(m_chatDetailList);
	m_chatDetailList.clear();

	qDeleteAll(m_contactItemList);
	m_contactItemList.clear();
}

void STMain::on_lwChatList_itemClicked()
{
	QListWidgetItem* item;
	item = ui.lwChatList->currentItem();
	QWidget* widget = ui.lwChatList->itemWidget(item);
	STChatItem* chatItem = (STChatItem*)widget;

	UserInfo userInfo = chatItem->getUserInfo();
	switchChatDetail(userInfo.jid);

	ui.swChatDetail->setVisible(true);
	ui.widChatBlank->setVisible(false);
}

void STMain::on_lwContactList_itemClicked()
{
	if (ui.swMain->currentIndex() == 0)
	{
		return;
	}
	QListWidgetItem* item;
	item = ui.lwContactList->currentItem();
	QWidget* widget = ui.lwContactList->itemWidget(item);
	STContactItem* contactItem = (STContactItem*)widget;

	UserInfo userInfo = contactItem->getUserInfo();
	m_contactDetail->setContactDetail(userInfo);

	ui.widContactDetail->setVisible(true);
	ui.widContactBlank->setVisible(false);
	ui.widContactAddNew->setVisible(false);
	ui.widTitle->setStyleSheet("QWidget{border-bottom:0px;background-color:#434555;}");
}

void STMain::switchChatItem(QString jid)
{
	int selectIndex = 0;
	QList<STChatItem*>::Iterator it;
	for (it = m_chatItemList.begin(); it != m_chatItemList.end(); it++, selectIndex++)
	{
		if ((*it)->getUserInfo().jid == jid)
		{
			break;
		}
	}
	ui.lwChatList->setCurrentRow(selectIndex);
}

void STMain::switchChatDetail(QString jid)
{
	int index = 0;
	QList<STChatDetail*>::Iterator it;
	for (it = m_chatDetailList.begin(); it != m_chatDetailList.end(); it++, index++)
	{
		if ((*it)->getUserInfo().jid == jid)
		{
			ui.swChatDetail->setCurrentIndex(index);
			ui.lblChatTitle->setText((*it)->getUserInfo().userName);
		}
	}
}

void STMain::switchChatWindow(QString jid)
{
	// 文件不存在，创建新对话
	STRecordManager* recordManager = new STRecordManager(jid);
	if (!recordManager->isRecordExist())
	{
		newChat(jid);
	}

	switchChatItem(jid);
	switchChatDetail(jid);

	ui.swChatDetail->setVisible(true);
	ui.widChatBlank->setVisible(false);

	on_pbChat_clicked();
}

void STMain::newChat(QString jid)
{
	// 文件不存在，创建文件
	/*STRecordManager* recordManager = new STRecordManager(jid);
	RecordItem recordItem;
	recordManager->writeRecordItem(recordItem);*/

	QList<UserInfo> friendList = m_xmppClient->getRoster();
	QList<UserInfo>::const_iterator friendIt;

	STChatItem* chatItem;
	STChatDetail* chatDetail;
	QListWidgetItem* item;
	QList<STChatItem*>::Iterator it;

	for (friendIt = friendList.constBegin(); friendIt != friendList.constEnd(); friendIt++)
	{
		if (friendIt->jid == jid)
		{
			chatItem = new STChatItem();
			chatItem->setUserInfo(*friendIt);
			m_chatItemList.push_front(chatItem);

			chatDetail = new STChatDetail(m_xmppClient);
			chatDetail->setChatDetail(*friendIt);
			connect(chatDetail, SIGNAL(changeChatListOrder(QString)), this, SLOT(reorderChatList(QString)));
			m_chatDetailList.push_back(chatDetail);

			ui.swChatDetail->addWidget(chatDetail);

			item = new QListWidgetItem();
			ui.lwChatList->insertItem(0, item);
			ui.lwChatList->setItemWidget(item, chatItem);
			break;
		}
	}
}

void STMain::deleteChat(QString jid)
{
	ui.swChatDetail->setVisible(false);
	ui.widChatBlank->setVisible(true);
	ui.lblChatTitle->clear();

	QList<STChatItem*>::Iterator itemIt;
	int index = 0;
	for (itemIt = m_chatItemList.begin(); itemIt != m_chatItemList.end(); itemIt++, index++)
	{
		if ((*itemIt)->getUserInfo().jid == jid)
		{
			QListWidgetItem* item = ui.lwChatList->item(index);
			ui.lwChatList->removeItemWidget(item);
			m_chatItemList.removeOne(*itemIt);
			break;
		}
	}

	QList<STChatDetail*>::Iterator detailIt;
	for (detailIt = m_chatDetailList.begin(); detailIt != m_chatDetailList.end(); detailIt++)
	{
		if ((*detailIt)->getUserInfo().jid == jid)
		{
			ui.swChatDetail->removeWidget(*detailIt);
			m_chatDetailList.removeOne(*detailIt);
			break;
		}
	}

	STRecordManager* recordManager = new STRecordManager(jid);
	recordManager->removeRecord();
}

void STMain::on_lwContactList_itemDoubleClicked()
{
	QListWidgetItem* item;
	item = ui.lwContactList->currentItem();
	QWidget* widget = ui.lwContactList->itemWidget(item);
	STContactItem* contactItem = (STContactItem*)widget;

	UserInfo userInfo = contactItem->getUserInfo();

	switchChatWindow(userInfo.jid);
}

void STMain::on_pbChat_clicked()
{
	ui.swMain->setCurrentIndex(0);
	ui.pbChat->setStyleSheet("QPushButton{border-image: url(:/STSample/Resources/images/chat_on.png);}");
	ui.pbContact->setStyleSheet("QPushButton{border-image: url(:/STSample/Resources/images/contact.png);}"
		"QPushButton:hover:!pressed{border-image:url(:/STSample/Resources/images/contact_focus.png);}");
	ui.widTitle->setStyleSheet("QWidget{border-bottom:1px solid #e3e3e3;background-color:#ffffff;}");
	if (ui.lwChatList->selectedItems().size() > 0)
	{
		ui.lblChatTitle->setText(((STChatItem*)
			(ui.lwChatList->itemWidget(ui.lwChatList->currentItem())))->getUserInfo().userName);
	}
}

void STMain::on_pbContact_clicked()
{
	ui.swMain->setCurrentIndex(1);
	ui.pbContact->setStyleSheet("QPushButton{border-image: url(:/STSample/Resources/images/contact_on.png);}");
	ui.pbChat->setStyleSheet("QPushButton{border-image: url(:/STSample/Resources/images/chat.png);}"
		"QPushButton:hover:!pressed{border-image:url(:/STSample/Resources/images/chat_focus.png);}");
	if (ui.lwContactList->selectedItems().size() > 0)
	{
		ui.widTitle->setStyleSheet("QWidget{border-bottom:0px;background-color:#434555;}");
	}
	ui.lblChatTitle->clear();
}

void STMain::on_pbAddContact_clicked()
{
	ui.widContactBlank->setVisible(false);
	ui.widContactDetail->setVisible(false);
	ui.widContactAddNew->setVisible(true);

	m_contactAddNew->initAddNewWindow();

	on_pbContact_clicked();
}

void STMain::on_pbMessage_clicked()
{
}

void STMain::on_pbSetting_clicked()
{
}

void STMain::on_pbMinimum_clicked()
{
	this->window()->showMinimized();
}

void STMain::on_pbMaximum_clicked()
{
	ui.pbNormal->setVisible(true);
	ui.pbNormal->setAttribute(Qt::WA_UnderMouse, false);
	ui.pbMaximum->setVisible(false);
	this->window()->showMaximized();
}

void STMain::on_pbNormal_clicked()
{
	ui.pbNormal->setVisible(false);
	ui.pbMaximum->setVisible(true);
	ui.pbMaximum->setAttribute(Qt::WA_UnderMouse, false);
	this->window()->showNormal();
}

void STMain::on_pbClose_clicked()
{
	this->window()->close();
}

void STMain::on_pbRelogin_clicked()
{
	Q_EMIT changeLoginWindow();
}

void STMain::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_isPressed = true;
		m_startMovePos = event->globalPos();
	}
}

void STMain::mouseMoveEvent(QMouseEvent* event)
{
	if (m_isPressed)
	{
		QPoint movePoint = event->globalPos() - m_startMovePos;
		QPoint pos = this->pos() + movePoint;
		m_startMovePos = event->globalPos();
		this->move(pos.x(), pos.y());
	}
}
void STMain::mouseReleaseEvent(QMouseEvent *event)
{
	m_isPressed = false;
}

bool STMain::eventFilter(QObject *obj, QEvent *e)
{
	if (e->type() == QEvent::MouseButtonPress && (ui.lblDirect == obj
		|| ui.lblFriend == obj || ui.widContactTitle == obj || ui.lblFriendNum == obj))
	{
		bool visible = ui.lwContactList->isVisible();
		visible = !visible;
		ui.lwContactList->setVisible(visible);
		if (visible)
		{
			ui.lblDirect->setStyleSheet("border-image:url(:/STSample/Resources/images/down.png);");
		}
		else
		{
			ui.lblDirect->setStyleSheet("border-image:url(:/STSample/Resources/images/right.png);");
		}
		return true;
	}
	return false;
}

void STMain::paintEvent(QPaintEvent* event)
{
	/*QPainter painter(this);
	this->drawShadow(painter);
	painter.setPen(Qt::NoPen);
	painter.setBrush(Qt::white);
	painter.drawRect(QRect(SHADOW_WIDTH, SHADOW_WIDTH, this->width() - 2 * SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH));*/
}

void STMain::drawShadow(QPainter &painter)
{
	QList<QPixmap> pixmaps;
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_left.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_right.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_top.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_bottom.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_left_top.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_right_top.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_left_bottom.png"));
	pixmaps.append(QPixmap(":/STSample/Resources/images/shadow_right_bottom.png"));
	painter.drawPixmap(0, 0, SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[4]);
	painter.drawPixmap(this->width() - SHADOW_WIDTH, 0, SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[5]);
	painter.drawPixmap(0, this->height() - SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[6]);
	painter.drawPixmap(this->width() - SHADOW_WIDTH, this->height() - SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[7]);
	painter.drawPixmap(0, SHADOW_WIDTH, SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH, pixmaps[0].scaled(SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH));
	painter.drawPixmap(this->width() - SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH, pixmaps[1].scaled(SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH));
	painter.drawPixmap(SHADOW_WIDTH, 0, this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[2].scaled(this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH));
	painter.drawPixmap(SHADOW_WIDTH, this->height() - SHADOW_WIDTH, this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[3].scaled(this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH));

}
