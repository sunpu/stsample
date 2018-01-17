#ifndef _XMPPREGISTER_H_
#define _XMPPREGISTER_H_

#include <QString>
#include <QObject>
#include "gloox/registration.h"
#include "gloox/client.h"
#include "gloox/connectionlistener.h"
#include "gloox/gloox.h"
#include "logger.h"

using namespace std;
using namespace gloox;

#define MSG_LEN 2048

namespace tahiti
{
	class XmppRegister : public QObject, RegistrationHandler, ConnectionListener, LogHandler
	{
		Q_OBJECT
	public:
		XmppRegister();
		virtual ~XmppRegister();
		void registAccount(QString user, QString passwd, QString server, QString port);
	Q_SIGNALS:
		void registResult(bool result);
	private:
		virtual void onConnect();
		virtual void onDisconnect(ConnectionError e);
		virtual bool onTLSConnect(const CertInfo& info);
		virtual void handleRegistrationFields(const JID& /*from*/, int fields, std::string instructions);
		virtual void handleRegistrationResult(const JID& /*from*/, RegistrationResult result);
		virtual void handleAlreadyRegistered(const JID& /*from*/);
		virtual void handleDataForm(const JID& /*from*/, const DataForm& /*form*/);
		virtual void handleOOB(const JID& /*from*/, const OOB& oob);
		virtual void handleLog(gloox::LogLevel level, LogArea area, const string& message);
	private:
		Client* m_registClient;
		Registration* m_reg;
		QString m_xmppUser;
		QString m_xmppPasswd;
		QString m_xmppServerIP;
		int m_xmppServerPort;
	};
}
#endif
