#ifndef STCHATDETAIL_H
#define STCHATDETAIL_H

#include <QWidget>
#include <QTime>
#include <QKeyEvent>
#include <QToolTip>
#include "ui_STChatDetail.h"
#include "stchatrecorditem.h"
#include "stcommon.h"
#include "strecordmanager.h"
#include "xmppclient.h"

using namespace tahiti;

namespace tahiti
{
	class STChatDetail : public QWidget
	{
		Q_OBJECT

	public:
		STChatDetail(XmppClient* client);
		~STChatDetail();
		void clearChatDetail();
		void setChatDetail(UserInfo userInfo);
		UserInfo getUserInfo();
		void updateSelfPic(QString picPath);
		public Q_SLOTS:
		void on_pbSendMessage_clicked();
		void updateOthersMessage(QString jid, QString msg);
	Q_SIGNALS:
		void changeChatListOrder(QString jid);
	protected:
		bool eventFilter(QObject *obj, QEvent *e);

	private:
		Ui::STChatDetailClass ui;
		UserInfo m_userInfo;
		XmppClient* m_xmppClient;
		UserInfo m_selfInfo;
		QList<STChatRecordItem*> m_recordItemList;
		QString m_selfPicPath;
		QString m_otherPicPath;
	};
}
#endif
