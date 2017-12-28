#include "stloginrotate.h"

using namespace tahiti;

/* 登录窗口 */
STLogin::STLogin(XmppClient* client) : m_xmppClient(client)
{
	ui.setupUi(this);
	initLoginData();

	connect(m_xmppClient, SIGNAL(loginResult(bool)), this, SLOT(handleLoginResult(bool)));

	ui.leUserName->installEventFilter(this);
	ui.lePasswd->installEventFilter(this);
}

STLogin::~STLogin()
{

}

void STLogin::initLoginData()
{
	// 读取数据
	bool rememberPasswd = (STConfig::getConfig("/config/rememberPasswd") == "true") ? true : false;
	ui.cbRemeberPasswd->setChecked(rememberPasswd);
	bool autoLogin = (STConfig::getConfig("/config/autoLogin") == "true") ? true : false;
	ui.cbAutoLogin->setChecked(autoLogin);

	ui.leUserName->setText(STConfig::getConfig("/xmpp/user"));
	if (rememberPasswd)
	{
		ui.lePasswd->setText(STConfig::getConfig("/xmpp/passwd"));
	}
	else
	{
		ui.lePasswd->setText("");
	}

	QString jid = STConfig::getConfig("/xmpp/user") + QString("@localhost");
	QString path = QStandardPaths::writableLocation(QStandardPaths::GenericConfigLocation)
		+ DATA_ROOT_PATH + AVATAR_PATH + jid + QString(".jpg");
	if (QFile::exists(path))
	{
		QImage* image = new QImage(path);
		ui.lblUserPic->setPixmap(QPixmap::fromImage(*image).scaled(100, 100));
	}
}

void STLogin::on_pbLogin_clicked()
{
	QString server = STConfig::getConfig("/xmpp/server");
	if (server.size() == 0)
	{
		// TODO:消息提示 没有配置server
		return;
	}

	QString user = ui.leUserName->text();
	QString passwd = ui.lePasswd->text();

	m_xmppClient->setXmppAccount(user, passwd, server);
	m_xmppClient->run();
}

void STLogin::handleLoginResult(bool result)
{
	if (result)
	{
		// 保存数据
		bool rememberPasswd = ui.cbRemeberPasswd->isChecked();
		STConfig::setConfig("/config/rememberPasswd", rememberPasswd ? "true" : "false");
		bool autoLogin = ui.cbAutoLogin->isChecked();
		STConfig::setConfig("/config/autoLogin", autoLogin ? "true" : "false");

		STConfig::setConfig("/xmpp/user", ui.leUserName->text());
		if (rememberPasswd)
		{
			STConfig::setConfig("/xmpp/passwd", ui.lePasswd->text());
		}
		else
		{
			STConfig::setConfig("/xmpp/passwd", "");
		}

		// 查询用户花名册
		m_xmppClient->queryRoster();

		QThread::sleep(3);

		// 窗口切换
		Q_EMIT changeMainWindow();
	}
	else
	{
		// TODO:登录失败，报错
	}
}

void STLogin::on_pb2Regist_clicked()
{
	Q_EMIT rotateWindow();
}

void STLogin::on_pbMinimum_clicked()
{
	this->parentWidget()->showMinimized();
}

void STLogin::on_pbClose_clicked()
{
	this->parentWidget()->close();
}

void STLogin::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_isPressed = true;
		m_startMovePos = event->globalPos();
	}

	return QWidget::mousePressEvent(event);
}

void STLogin::mouseMoveEvent(QMouseEvent *event)
{
	if (m_isPressed)
	{
		QPoint movePoint = event->globalPos() - m_startMovePos;
		QPoint widgetPos = this->parentWidget()->pos() + movePoint;
		m_startMovePos = event->globalPos();
		this->parentWidget()->move(widgetPos.x(), widgetPos.y());
	}
	return QWidget::mouseMoveEvent(event);
}

void STLogin::mouseReleaseEvent(QMouseEvent *event)
{
	m_isPressed = false;
	return QWidget::mouseReleaseEvent(event);
}

bool STLogin::eventFilter(QObject *obj, QEvent *e)
{
	if (e->type() == QEvent::KeyPress
		&& (ui.leUserName == obj || ui.lePasswd == obj))
	{
		QKeyEvent *event = static_cast<QKeyEvent*>(e);
		if (event->key() == Qt::Key_Return)
		{
			on_pbLogin_clicked();
			return true;
		}
	}
	return false;
}

/* 注册窗口 */
STRegist::STRegist(QWidget* parent) : QWidget(parent)
{
	ui.setupUi(this);
	m_xmppRegister = new XmppRegister();
	connect((const QObject *)m_xmppRegister, SIGNAL(registResult(bool)), this, SLOT(handleRegistResult(bool)));
	ui.leUserName->installEventFilter(this);
	ui.lePasswd->installEventFilter(this);
	ui.lePasswdVerify->installEventFilter(this);
}

STRegist::~STRegist()
{

}

void STRegist::initRegistData()
{
	ui.leUserName->setText("");
	ui.lePasswd->setText("");
	ui.lePasswdVerify->setText("");
}

void STRegist::handleRegistResult(bool result)
{
	if (result)
	{
		// 保存数据
		STConfig::setConfig("/config/rememberPasswd", "false");
		STConfig::setConfig("/config/autoLogin", "false");

		STConfig::setConfig("/xmpp/user", ui.leUserName->text());
		STConfig::setConfig("/xmpp/passwd", ui.lePasswd->text());

		// 切换到登录窗口
		Q_EMIT rotateWindow();
	}
	else
	{
		// TODO:注册失败，报错
	}
}

void STRegist::on_pb2Login_clicked()
{
	Q_EMIT rotateWindow();
}

void STRegist::on_pbRegist_clicked()
{
	QString server = STConfig::getConfig("/xmpp/server");
	if (server.size() == 0)
	{
		// TODO:消息提示 没有配置server
		return;
	}

	QString user = ui.leUserName->text();
	QString passwd = ui.lePasswd->text();
	m_xmppRegister->registAccount(user, passwd, server);
}

void STRegist::on_pbMinimum_clicked()
{
	this->parentWidget()->showMinimized();
}

void STRegist::on_pbClose_clicked()
{
	this->parentWidget()->close();
}

void STRegist::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_isPressed = true;
		m_startMovePos = event->globalPos();
	}

	return QWidget::mousePressEvent(event);
}

void STRegist::mouseMoveEvent(QMouseEvent *event)
{
	if (m_isPressed)
	{
		QPoint movePoint = event->globalPos() - m_startMovePos;
		QPoint widgetPos = this->parentWidget()->pos() + movePoint;
		m_startMovePos = event->globalPos();
		this->parentWidget()->move(widgetPos.x(), widgetPos.y());
	}
	return QWidget::mouseMoveEvent(event);
}

void STRegist::mouseReleaseEvent(QMouseEvent *event)
{
	m_isPressed = false;
	return QWidget::mouseReleaseEvent(event);
}

bool STRegist::eventFilter(QObject *obj, QEvent *e)
{
	if (e->type() == QEvent::KeyPress
		&& (ui.leUserName == obj || ui.lePasswd == obj || ui.lePasswdVerify == obj))
	{
		QKeyEvent *event = static_cast<QKeyEvent*>(e);
		if (event->key() == Qt::Key_Return)
		{
			on_pbRegist_clicked();
			return true;
		}
	}
	return false;
}

/* 旋转窗口 */
STLoginRotate::STLoginRotate(XmppClient* client)
	: m_isRoratingWindow(false)
	, m_nextPageIndex(0)
	, m_xmppClient(client)
{
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::WindowMinimizeButtonHint);
	this->setAttribute(Qt::WA_TranslucentBackground);
	// 给窗口设置rotateValue属性;
	this->setProperty("rotateValue", 0);

	initRotateWindow();

	m_mainWindow = new STMain(m_xmppClient);
	connect(m_mainWindow, SIGNAL(changeLoginWindow()), this, SLOT(onChangeLoginWindow()));
}

STLoginRotate::~STLoginRotate()
{

}

// 初始化旋转的窗口;
void STLoginRotate::initRotateWindow()
{
	// 这里定义了两个信号，需要自己去发送信号;
	m_loginWindow = new STLogin(m_xmppClient);
	connect(m_loginWindow, SIGNAL(rotateWindow()), this, SLOT(onRotateWindow()));
	connect(m_loginWindow, SIGNAL(changeMainWindow()), this, SLOT(onChangeMainWindow()));
	m_registWindow = new STRegist();
	connect(m_registWindow, SIGNAL(rotateWindow()), this, SLOT(onRotateWindow()));

	this->addWidget(m_loginWindow);
	this->addWidget(m_registWindow);

	// 这里宽和高都增加，是因为在旋转过程中窗口宽和高都会变化;
	this->setFixedSize(QSize(m_loginWindow->width() + 20, m_loginWindow->height() + 100));
}

// 开始旋转窗口;
void STLoginRotate::onRotateWindow()
{
	// 如果窗口正在旋转，直接返回;
	if (m_isRoratingWindow)
	{
		return;
	}
	m_isRoratingWindow = true;
	m_nextPageIndex = (currentIndex() + 1) >= count() ? 0 : (currentIndex() + 1);
	QPropertyAnimation *rotateAnimation = new QPropertyAnimation(this, "rotateValue");
	// 设置旋转持续时间;
	rotateAnimation->setDuration(600);
	// 设置旋转角度变化趋势;
	rotateAnimation->setEasingCurve(QEasingCurve::InCubic);
	// 设置旋转角度范围;
	rotateAnimation->setStartValue(0);
	rotateAnimation->setEndValue(180);
	connect(rotateAnimation, SIGNAL(valueChanged(QVariant)), this, SLOT(repaint()));
	connect(rotateAnimation, SIGNAL(finished()), this, SLOT(onRotateFinished()));
	// 隐藏当前窗口，通过不同角度的绘制来达到旋转的效果;
	currentWidget()->hide();
	rotateAnimation->start();
}

// 旋转结束;
void STLoginRotate::onRotateFinished()
{
	m_isRoratingWindow = false;
	setCurrentWidget(widget(m_nextPageIndex));
	repaint();
	m_loginWindow->initLoginData();
	m_registWindow->initRegistData();
}

// 绘制旋转效果;
void STLoginRotate::paintEvent(QPaintEvent* event)
{
	if (m_isRoratingWindow)
	{
		// 小于90度时;
		int rotateValue = this->property("rotateValue").toInt();
		if (rotateValue <= 90)
		{
			QPixmap rotatePixmap(currentWidget()->size());
			currentWidget()->render(&rotatePixmap);
			QPainter painter(this);
			painter.setRenderHint(QPainter::Antialiasing);
			QTransform transform;
			transform.translate(width() / 2, 0);
			transform.rotate(rotateValue, Qt::YAxis);
			painter.setTransform(transform);
			painter.drawPixmap(-1 * width() / 2, 0, rotatePixmap);
		}
		// 大于90度时
		else
		{
			QPixmap rotatePixmap(widget(m_nextPageIndex)->size());
			widget(m_nextPageIndex)->render(&rotatePixmap);
			QPainter painter(this);
			painter.setRenderHint(QPainter::Antialiasing);
			QTransform transform;
			transform.translate(width() / 2, 0);
			transform.rotate(rotateValue + 180, Qt::YAxis);
			painter.setTransform(transform);
			painter.drawPixmap(-1 * width() / 2, 0, rotatePixmap);
		}
	}
	else
	{
		/*QPainter painter(this);
		this->drawShadow(painter);
		painter.setPen(Qt::NoPen);
		painter.setBrush(Qt::white);
		painter.drawRect(QRect(SHADOW_WIDTH, SHADOW_WIDTH, this->width() - 2 * SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH));*/
		return __super::paintEvent(event);
	}
}

void STLoginRotate::drawShadow(QPainter &painter)
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
	painter.drawPixmap(this->width(), 0, SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[5]);
	painter.drawPixmap(0, this->height(), SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[6]);
	painter.drawPixmap(this->width(), this->height(), SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[7]);
	painter.drawPixmap(0, 0, SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH, pixmaps[0].scaled(SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH));
	painter.drawPixmap(this->width(), 0, SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH, pixmaps[1].scaled(SHADOW_WIDTH, this->height() - 2 * SHADOW_WIDTH));
	painter.drawPixmap(0, 0, this->width(), SHADOW_WIDTH, pixmaps[2].scaled(this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH));
	painter.drawPixmap(0, this->height(), this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH, pixmaps[3].scaled(this->width() - 2 * SHADOW_WIDTH, SHADOW_WIDTH));

}

void STLoginRotate::onChangeMainWindow()
{
	m_mainWindow->init();
	this->hide();
	m_mainWindow->show();
}

void STLoginRotate::onChangeLoginWindow()
{
	m_mainWindow->destroy();
	m_mainWindow->hide();
	this->show();
}
