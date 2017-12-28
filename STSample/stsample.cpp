#include "stsample.h"
#include "token.h"
#include <iostream>

using namespace tahiti;

STSample::STSample(QWidget *parent)
	: QMainWindow(parent)
{
	TAHITI_INFO("STSample start...");
	ui.setupUi(this);
	initClient();

	QObject::connect(this, SIGNAL(newStreamSignal(QString, int, int)), SLOT(newStreamSlot(QString, int, int)));

	qRegisterMetaType<std::shared_ptr<RemoteStream>>("std::shared_ptr<RemoteStream>");
	QObject::connect(this, SIGNAL(updateRenderSignal(QString, std::shared_ptr<RemoteStream>)), SLOT(updateRenderSlot(QString, std::shared_ptr<RemoteStream>)));

	QHBoxLayout* hboxLayout = (QHBoxLayout*)ui.widRender->layout();
	m_renders.resize(MAX_STREAM_NUM);
	for (size_t i = 0; i < MAX_STREAM_NUM; i++)
	{
		m_renders[i] = new Render(ui.widRender);
		m_renders[i]->setObjectName(QString::number(i));
		//render->setStyleSheet("background-color: rgb(255, 170, 0);");
		m_renders[i]->setVisible(false);
		hboxLayout->addWidget(m_renders[i]);
		//renders.append(render);
	}

	m_xmpp_client = new XmppClient();
	m_xmpp_client->run();
}

STSample::~STSample()
{

}

void STSample::initClient()
{
	this->showMaximized();

	m_hardware_accelerated = false;

	// get resolution
	QRect rec = QApplication::desktop()->screenGeometry();
	m_screen_height = rec.height();
	m_screen_width = rec.width();

	// ice server
	woogeen::conference::IceServer ice;
	ice.urls.push_back("stun:61.152.239.56");
	ice.username = ice.password = "";
	vector<woogeen::conference::IceServer> ice_servers;
	ice_servers.push_back(ice);

	GlobalConfiguration::SetVideoHardwareAccelerationEnabled(false);
	GlobalConfiguration::SetEncodedVideoFrameEnabled(false);

	// Global configuration for raw audio frames
	/*
	const std::string path = "audio_long16.pcm";
	std::unique_ptr<woogeen::base::AudioFrameGeneratorInterface> audio_generator(FileAudioFrameGenerator::Create(path));
	if (audio_generator == nullptr){
	return;
	}
	woogeen::base::GlobalConfiguration::SetCustomizedAudioInputEnabled(true, std::move(audio_generator));*/
	// configuration
	ConferenceClientConfiguration config = ConferenceClientConfiguration();
	config.ice_servers = ice_servers;
	MediaCodec mc;
	//mc.video_codec = MediaCodec::VP8;
	mc.video_codec = MediaCodec::H264;
	config.media_codec = mc;
	//config.max_video_bandwidth = 1000;

	m_client = std::make_shared<ConferenceClient>(config);
	m_client->AddObserver(*this);
}

void STSample::newStreamSlot(QString id, int width, int height)
{
	QVBoxLayout* vboxLayout = (QVBoxLayout*)ui.widOption->layout();
	QString resolution = QString::number(width) + "*" + QString::number(height);
	QCheckBox* cbx = new QCheckBox(id + "@" + resolution);
	vboxLayout->addWidget(cbx, 0, Qt::AlignTop);
	m_cbx_list.append(cbx);
	QObject::connect(cbx, SIGNAL(clicked()), this, SLOT(checkChange()));
}

void STSample::updateRenderSlot(QString id, std::shared_ptr<RemoteStream> stream)
{
	if (stream)
	{
		int renderID = -1;
		for (size_t i = 0; i < MAX_STREAM_NUM; i++)
		{
			if (!m_renders[i]->isusing())
			{
				renderID = i;
				m_renders[i]->use();
				m_renders[i]->setVisible(true);
				break;
			}
		}
		stream->AttachVideoRenderer(m_renders[renderID]->getRenderWindow());

		m_all_stream_map[id].isShowing = true;
		m_all_stream_map[id].renderID = renderID;
	}
	else
	{
		string ss = id.toStdString();
		m_all_stream_map[id].stream->DetachVideoRenderer();
		m_all_stream_map[id].isShowing = false;
		m_renders[m_all_stream_map[id].renderID]->unuse();
		m_renders[m_all_stream_map[id].renderID]->setVisible(false);
		m_all_stream_map[id].renderID = -1;
	}
	ui.widRender->update();
}

void STSample::checkChange()
{
	QCheckBox* cbx = (QCheckBox*)sender();
	QString txt = cbx->text();
	bool checked = cbx->isChecked();
	QStringList splitList = txt.split("@");
	QString id = splitList[0];

	if (checked)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("check...") + id);
		subscribeStream(id);
	}
	else
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("uncheck...") + id);
		unsubscribeStream(id);
	}
}

void STSample::subscribeStream(QString id)
{
	string a = id.toStdString();
	ui.lblStatus->setText(QString::fromLocal8Bit("���ĳɹ�...") + id);
	if (!m_all_stream_map.contains(id))
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("�޷�����..."));
		return;
	}

	shared_ptr<RemoteStream> mainStream = m_all_stream_map[id].stream;

	/*SubscribeOptions options;
	options.resolution.width = m_all_stream_map[id].width;
	options.resolution.height = m_all_stream_map[id].height;
	//options.video_quality_level = woogeen::conference::SubscribeOptions::VideoQualityLevel::kBestSpeed;*/
	m_client->Subscribe(mainStream,
		//options,
		[&](std::shared_ptr<RemoteStream> stream)
	{
		string streamID = stream->Id();
		Q_EMIT updateRenderSignal(QString::fromStdString(streamID), stream);
		ui.lblStatus->setText(QString::fromLocal8Bit("���ĳɹ�..."));
	},
		[=](std::unique_ptr<ConferenceException>)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("����ʧ��..."));
	});
}

void STSample::unsubscribeStream(QString id)
{
	string a = id.toStdString();
	ui.lblStatus->setText(QString::fromLocal8Bit("ȡ�����ĳɹ�...") + id);
	if (!m_all_stream_map.contains(id))
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("�޷�ȡ������..."));
		return;
	}
	curentID = id; // TODO:logoutʱ������ɾ�������׳�ͻ,��ʱsleep
	m_client->Unsubscribe(m_all_stream_map[curentID].stream,
		[&]()
	{
		Q_EMIT updateRenderSignal(curentID, NULL);
		ui.lblStatus->setText(QString::fromLocal8Bit("ȡ�����ĳɹ�..."));
	},
		[=](std::unique_ptr<ConferenceException>)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("ȡ������ʧ��..."));
	});
	QThread::msleep(500);
}

void STSample::OnStreamAdded(shared_ptr<RemoteCameraStream> stream)
{
	addStream(stream);
}

void STSample::OnStreamAdded(shared_ptr<RemoteMixedStream> stream)
{
	std::vector<VideoFormat> formats = stream->SupportedVideoFormats();
	int width = formats[0].resolution.width;
	int height = formats[0].resolution.height;
	addStream(stream, width, height);
	m_mixed_stream_list.push_back(stream);
}

void STSample::OnStreamAdded(shared_ptr<RemoteScreenStream> stream)
{
	addStream(stream);
}

void STSample::addStream(shared_ptr<RemoteStream> stream, int width, int height)
{
	string id = stream->Id();
	StreamInfo info;
	info.stream = stream;
	info.width = width;
	info.height = height;
	m_all_stream_map.insert(QString::fromStdString(id), info);

	Q_EMIT newStreamSignal(QString::fromStdString(id), width, height);
}

void STSample::OnStreamRemoved(std::shared_ptr<RemoteCameraStream> stream)
{
	removeStream(stream);
}

void STSample::OnStreamRemoved(std::shared_ptr<RemoteMixedStream> stream)
{
	removeStream(stream);
}

void STSample::OnStreamRemoved(std::shared_ptr<RemoteScreenStream> stream)
{
	removeStream(stream);
}

void STSample::removeStream(std::shared_ptr<RemoteStream> stream)
{
	string id = stream->Id();
	QVBoxLayout* vboxLayout = (QVBoxLayout*)ui.widOption->layout();
	QList<QCheckBox*>::const_iterator ci;
	for (ci = m_cbx_list.constBegin(); ci != m_cbx_list.constEnd(); ++ci)
	{
		if ((*ci)->text().contains(id.c_str()))
		{
			vboxLayout->removeWidget(*ci);
			(*ci)->deleteLater();
			m_cbx_list.removeOne(*ci);
			break;
		}
	}
	unsubscribeStream(QString::fromStdString(id));
}

void STSample::OnUserJoined(std::shared_ptr<const User> user)
{

}

void STSample::OnUserLeft(std::shared_ptr<const User> user)
{

}

void STSample::OnServerDisconnected()
{
	//ui.lblStatus->setText(QString::fromLocal8Bit("�������Ͽ�..."));
}

void STSample::on_pbLogin_clicked()
{
	bool isTeacher = ui.rbTeacher->isChecked() ? true : false;
	QString uri = QString("http://") + ui.leServerIP->text() + QString(":3001/createToken");

	string token = getToken(string((const char *)uri.toLocal8Bit()), isTeacher);
	if (token != "")
	{
		m_client->Join(token,
			[=](std::shared_ptr<User> user)
		{
			ui.lblStatus->setText(QString::fromLocal8Bit("����ɹ�..."));
		},
			[=](std::unique_ptr<ConferenceException> err)
		{
			ui.lblStatus->setText(QString::fromLocal8Bit("����ʧ��..."));
		});
	}
	else
	{  // error occurs
	}
}

void STSample::on_pbLogout_clicked()
{
	QVBoxLayout* vboxLayout = (QVBoxLayout*)ui.widOption->layout();
	QList<QCheckBox*>::const_iterator ci;
	for (ci = m_cbx_list.constBegin(); ci != m_cbx_list.constEnd(); ++ci)
	{
		QString txt = (*ci)->text();
		bool checked = (*ci)->isChecked();
		if (checked)
		{
			QStringList splitList = txt.split("@");
			QString id = splitList[0];
			unsubscribeStream(id);
		}
		vboxLayout->removeWidget(*ci);
		(*ci)->deleteLater();
	}
	m_cbx_list.clear();

	on_pbStopLocalCamera_clicked();
	on_pbStopLocalDesktop_clicked();
	on_pbStopLocalWindow_clicked();

	m_client->Leave(
		[=]
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("�ǳ��ɹ�..."));
	},
		[=](std::unique_ptr<woogeen::conference::ConferenceException> err)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("�ǳ�ʧ��..."));
	});
}

void STSample::on_pbSendLocalCamera_clicked()
{
	int err_code;
	if (!m_local_camera_stream.get())
	{
		m_local_camera_stream_param.reset(new LocalCameraStreamParameters(true, true));
		m_local_camera_stream_param->Resolution(1280, 720);
		m_local_camera_stream_param->CameraId(DeviceUtils::VideoCapturerIds()[0]);
		m_local_camera_stream = LocalCameraStream::Create(*m_local_camera_stream_param, err_code);
	}
	m_client->Publish(m_local_camera_stream,
		[=]
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("���ͱ�����Ƶ�ɹ�..."));
		//local_stream_->Attach(*ui.localFrame);

		m_client->Mix(m_local_camera_stream, m_mixed_stream_list,
			[=]
		{
			ui.lblStatus->setText(QString::fromLocal8Bit("����������Ƶ�ɹ�..."));
		},
			[=](std::unique_ptr<ConferenceException> err)
		{
			ui.lblStatus->setText(QString::fromLocal8Bit("����������Ƶʧ��..."));
		});
	},
		[=](std::unique_ptr<ConferenceException> err)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("���ͱ�����Ƶʧ��..."));
	});
}

void STSample::on_pbStopLocalCamera_clicked()
{
	m_client->Unpublish(m_local_camera_stream,
		[=]
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("ֹͣ���ͱ�����Ƶ�ɹ�..."));
		m_local_camera_stream_param = nullptr;
		m_local_camera_stream = nullptr;
	},
		[=](std::unique_ptr<ConferenceException> err)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("ֹͣ���ͱ�����Ƶʧ��..."));
	});
}

void STSample::on_pbSendLocalDesktop_clicked()
{
	if (!m_local_desktop_stream.get())
	{
		m_local_desktop_stream_param.reset(new LocalDesktopStreamParameters(true,
			true, LocalDesktopStreamParameters::DesktopSourceType::kFullScreen));
		m_local_desktop_stream.reset(new LocalScreenStream(m_local_desktop_stream_param));
		m_client->Publish(m_local_desktop_stream,
			[=]
		{
			ui.lblStatus->setText(QString::fromLocal8Bit("���ͱ�������ɹ�..."));
			//local_stream_->Attach(*ui.localFrame);
		},
			[=](std::unique_ptr<ConferenceException> err)
		{
			ui.lblStatus->setText(QString::fromLocal8Bit("���ͱ�������ʧ��..."));
		});
	}
}

void STSample::on_pbStopLocalDesktop_clicked()
{
	m_client->Unpublish(m_local_desktop_stream,
		[=]
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("ֹͣ���ͱ�������ɹ�..."));
		m_local_desktop_stream_param = nullptr;
		m_local_desktop_stream = nullptr;
	},
		[=](std::unique_ptr<ConferenceException> err)
	{
		ui.lblStatus->setText(QString::fromLocal8Bit("ֹͣ���ͱ�������ʧ��..."));
	});
}

void STSample::on_pbSendLocalWindow_clicked()
{

}

void STSample::on_pbStopLocalWindow_clicked()
{

}
