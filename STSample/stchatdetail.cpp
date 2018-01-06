#include "stchatdetail.h"

using namespace tahiti;

STChatDetail::STChatDetail(XmppClient* client) : m_xmppClient(client)
{

	ui.setupUi(this);

	ui.spChatDetail->setStretchFactor(0, 10);
	ui.spChatDetail->setStretchFactor(1, 1);

	connect(m_xmppClient, SIGNAL(showMessage(QString, QString)), this, SLOT(updateOthersMessage(QString, QString)));

	ui.teChatWrite->installEventFilter(this);
}

STChatDetail::~STChatDetail()
{

}

UserInfo STChatDetail::getUserInfo()
{
	return m_userInfo;
}

void STChatDetail::clearChatDetail()
{
	ui.lwChatRecordList->clear();
	ui.teChatWrite->clear();
	m_recordItemList.clear();
}

void STChatDetail::setChatDetail(UserInfo userInfo)
{
	m_userInfo = userInfo;
	m_selfInfo = m_xmppClient->getSelfInfo();

	QString desPath = QStandardPaths::writableLocation(QStandardPaths::GenericConfigLocation)
		+ DATA_ROOT_PATH + AVATAR_PATH;
	QDir dir;
	dir.setPath(desPath);
	QDirIterator iter(dir, QDirIterator::Subdirectories);
	while (iter.hasNext())
	{
		iter.next();
		QFileInfo info = iter.fileInfo();
		if (info.isFile() && info.fileName().startsWith(m_selfInfo.jid))
		{
			m_selfPicPath = QString(desPath) + info.fileName();
		}
		if (info.isFile() && info.fileName().startsWith(userInfo.jid))
		{
			m_otherPicPath = QString(desPath) + info.fileName();
		}
	}

	clearChatDetail();

	STRecordManager* recordManager = new STRecordManager(userInfo.jid);
	QList<RecordItem> list = recordManager->getRecordItemList();

	QSize itemSize;
	QList<RecordItem>::Iterator it;
	for (it = list.begin(); it != list.end(); it++)
	{
		if (it->from == MessageFrom::Self)
		{
			it->pic = m_selfPicPath;
		}
		else if (it->from == MessageFrom::Other)
		{
			it->pic = m_otherPicPath;
		}
		STChatRecordItem* chatDetailItem = new STChatRecordItem(*it);
		m_recordItemList.append(chatDetailItem);
		itemSize = chatDetailItem->getItemSize();
		QListWidgetItem* pItem = new QListWidgetItem();
		//pItem->setSizeHint(itemSize);
		pItem->setSizeHint(QSize(ui.lwChatRecordList->width(), itemSize.height() + 56));
		ui.lwChatRecordList->addItem(pItem);
		ui.lwChatRecordList->setItemWidget(pItem, chatDetailItem);
	}
	ui.lwChatRecordList->scrollToBottom();

	m_selfInfo = m_xmppClient->getSelfInfo();
}

void STChatDetail::updateSelfPic(QString picPath)
{
	m_userInfo.photoPath = picPath;
	QList<STChatRecordItem*>::Iterator it;
	for (it = m_recordItemList.begin(); it != m_recordItemList.end(); it++)
	{
		(*it)->updateSelfPic(picPath);
	}
}

void STChatDetail::on_pbSendMessage_clicked()
{
	QString myMessage = ui.teChatWrite->toPlainText();
	if (myMessage.size() == 0)
	{
		QToolTip::showText(ui.pbSendMessage->geometry().topLeft(), "aaa", ui.pbSendMessage);
		return;
	}

	RecordItem item;
	item.time = QTime::currentTime().toString();
	item.from = MessageFrom::Self;
	item.type = MessageType::Text;
	item.content = myMessage;
	if (item.from == MessageFrom::Self)
	{
		item.pic = m_selfPicPath;
	}
	else if (item.from == MessageFrom::Other)
	{
		item.pic = m_otherPicPath;
	}

	// 写文件
	STRecordManager* recordManager = new STRecordManager(m_userInfo.jid);
	recordManager->writeRecordItem(item);

	// 更新聊天记录界面
	STChatRecordItem* chatDetailItem = new STChatRecordItem(item);
	m_recordItemList.append(chatDetailItem);
	QSize itemSize = chatDetailItem->getItemSize();
	QListWidgetItem* pItem = new QListWidgetItem();
	pItem->setSizeHint(QSize(ui.lwChatRecordList->width() - 5, itemSize.height() + 56));
	ui.lwChatRecordList->addItem(pItem);

	ui.lwChatRecordList->setItemWidget(pItem, chatDetailItem);
	ui.lwChatRecordList->scrollToBottom();

	// 清空输入框
	ui.teChatWrite->clear();
	Q_EMIT changeChatListOrder(m_userInfo.jid);

	// 发送消息给远端
	m_xmppClient->sendMsg(m_userInfo.jid, myMessage);
}

void STChatDetail::updateOthersMessage(QString jid, QString msg)
{
	if (!m_userInfo.jid.contains(jid))
	{
		return;
	}

	RecordItem item;
	item.time = QTime::currentTime().toString();
	item.from = MessageFrom::Other;
	item.type = MessageType::Text;
	item.content = msg;
	if (item.from == MessageFrom::Self)
	{
		item.pic = m_selfPicPath;
	}
	else if (item.from == MessageFrom::Other)
	{
		item.pic = m_otherPicPath;
	}

	// 写文件
	STRecordManager* recordManager = new STRecordManager(m_userInfo.jid);
	recordManager->writeRecordItem(item);

	// 更新聊天记录界面
	STChatRecordItem* chatDetailItem = new STChatRecordItem(item);
	m_recordItemList.append(chatDetailItem);
	QSize itemSize = chatDetailItem->getItemSize();
	QListWidgetItem* pItem = new QListWidgetItem();
	pItem->setSizeHint(QSize(ui.lwChatRecordList->width() - 5, itemSize.height() + 56));
	ui.lwChatRecordList->addItem(pItem);
	ui.lwChatRecordList->setItemWidget(pItem, chatDetailItem);
	ui.lwChatRecordList->scrollToBottom();
}

bool STChatDetail::eventFilter(QObject *obj, QEvent *e)
{
	if (e->type() == QEvent::KeyPress && ui.teChatWrite == obj)
	{
		QKeyEvent *event = static_cast<QKeyEvent*>(e);
		if ((event->key() == Qt::Key_Return
			|| event->key() == Qt::Key_Enter) && (event->modifiers() & Qt::ControlModifier))
		{
			ui.teChatWrite->insertPlainText("\n");
			return true;
		}
		else if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
		{
			on_pbSendMessage_clicked();
			return true;
		}
	}
	return false;
}
