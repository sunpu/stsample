#include "STNetworkClient.h"

using namespace tahiti;

STNetworkClient::STNetworkClient(QObject * parent) : QObject(parent)
{
	m_tcpSocket = NULL;
}

STNetworkClient::~STNetworkClient()
{

}
void STNetworkClient::connectServer(QString ip, QString port)
{
	m_tcpSocket = new QTcpSocket(this); // ����ѿռ���TCP���ͺͽ��ܲ���
	m_tcpIp = ip;
	m_tcpPort = port;
	m_tcpSocket->connectToHost(m_tcpIp, m_tcpPort.toInt()); // ��������
	connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this,
		SLOT(displayError(QAbstractSocket::SocketError))); // ��������
	connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(connectUpdate())); // ��������֮��ť��ʹ��
	connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage())); // ��ȡ��Ϣ������
}

void STNetworkClient::disconnectServer()
{
	m_tcpSocket->disconnect();
	delete(m_tcpSocket);
	m_tcpSocket = NULL;
}

void STNetworkClient::sendMessage(QString msg)
{
	m_tcpSocket->write("#*#");
	m_tcpSocket->write(msg.toUtf8());
	m_tcpSocket->write("@%@");
}

void STNetworkClient::readMessage()
{
	QString data = m_tcpSocket->readAll();

	if (data.endsWith("@%@"))
	{
		if (m_bigData.size() > 0)
		{
			data = m_bigData + data;
			m_bigData.clear();
		}
		data.replace("@%@", "");
		QStringList datas = data.split("#*#");
		for (int i = 0; i < datas.size(); i++)
		{
			if (datas[i].size() == 0)
			{
				continue;
			}
			Q_EMIT processMessage(datas[i]);
		}
	}
	else
	{
		m_bigData = m_bigData + data;
	}
}

void STNetworkClient::displayError(QAbstractSocket::SocketError e)
{
	printf("error:%d", e);
}

void STNetworkClient::connectUpdate()
{
	printf("connected");
	Q_EMIT onConnect();
}

void STNetworkClient::disconnectUpdate()
{
	printf("disconnected");
}
