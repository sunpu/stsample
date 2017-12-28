#include "stcommon.h"
#include "stsample.h"
#include "stconfig.h"
#include "stloginrotate.h"
#include <QtWidgets/QApplication>

using namespace tahiti;

int main(int argc, char *argv[])
{
	// 初始化数据存储位置
	QString rootPath = QStandardPaths::writableLocation(QStandardPaths::GenericConfigLocation)
		+ DATA_ROOT_PATH;
	QDir* dir = new QDir;
	if (!dir->exists(rootPath + CONFIG_PATH))
	{
		dir->mkpath(rootPath + CONFIG_PATH);
	}
	if (!dir->exists(rootPath + RECORD_PATH))
	{
		dir->mkpath(rootPath + RECORD_PATH);
	}
	if (!dir->exists(rootPath + AVATAR_PATH))
	{
		dir->mkpath(rootPath + AVATAR_PATH);
	}

	// 暂时没地方配置服务器地址 TODO
	QString server = STConfig::getConfig("/xmpp/server");
	if (server.size() == 0)
	{
		STConfig::setConfig("/xmpp/server", "221.226.156.109");
	}

	XmppClient* xmpp_client = new XmppClient();

	if (!STLogger::instance().open_log())
	{
		std::cout << "Log::open_log() failed" << std::endl;
		return false;
	}
	QApplication a(argc, argv);
	//STSample w;
	//STMain w;
	STLoginRotate loginRotateWindow(xmpp_client);
	loginRotateWindow.show();
	return a.exec();
}
