/********************************************************************************
** Form generated from reading UI file 'STContactDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCONTACTDETAIL_H
#define UI_STCONTACTDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STContactDetailClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblPic;
    QLabel *lblName;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *twDetail;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *lblJid;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_11;
    QLabel *lblSubscription;
    QSpacerItem *horizontalSpacer_12;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pbSendMessage;
    QPushButton *pbOpenClass;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_2;
    QWidget *twSetting;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_13;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *STContactDetailClass)
    {
        if (STContactDetailClass->objectName().isEmpty())
            STContactDetailClass->setObjectName(QStringLiteral("STContactDetailClass"));
        STContactDetailClass->resize(685, 581);
        STContactDetailClass->setStyleSheet(QStringLiteral("border:0px;"));
        verticalLayout = new QVBoxLayout(STContactDetailClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(STContactDetailClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: #434555;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 10, 0, 10);
        horizontalSpacer = new QSpacerItem(291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblPic = new QLabel(widget_3);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(80);
        sizePolicy.setHeightForWidth(lblPic->sizePolicy().hasHeightForWidth());
        lblPic->setSizePolicy(sizePolicy);
        lblPic->setMinimumSize(QSize(80, 80));
        lblPic->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/logo.jpg);"));

        verticalLayout_2->addWidget(lblPic);

        lblName = new QLabel(widget_3);
        lblName->setObjectName(QStringLiteral("lblName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        lblName->setFont(font);
        lblName->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblName);


        horizontalLayout->addWidget(widget_3);

        horizontalSpacer_2 = new QSpacerItem(290, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(STContactDetailClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        tabWidget->setFont(font1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane{border-width:0px;}\n"
"\n"
"QTabWidget::tab-bar{alignment:center;}\n"
"\n"
"#tabWidget QTabBar::tab\n"
"{\n"
"    min-width: 75px;\n"
"    min-height: 28px;\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"\n"
"\n"
"#tabWidget QTabBar::tab:selected\n"
"{\n"
"    border-top: 3px solid #00c36e;\n"
"	color:#00c36e;\n"
"}\n"
"\n"
"#tabWidget QTabBar::tab:!selected\n"
"{\n"
"    border-top: 0px;\n"
"	color: rgb(67, 69, 85);\n"
"}\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        twDetail = new QWidget();
        twDetail->setObjectName(QStringLiteral("twDetail"));
        verticalLayout_3 = new QVBoxLayout(twDetail);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 30, -1, -1);
        widget_4 = new QWidget(twDetail);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(11);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        lblJid = new QLabel(widget_4);
        lblJid->setObjectName(QStringLiteral("lblJid"));
        lblJid->setMinimumSize(QSize(200, 30));
        lblJid->setMaximumSize(QSize(200, 30));
        lblJid->setFont(font2);
        lblJid->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblJid->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblJid);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(twDetail);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 30));
        label_5->setMaximumSize(QSize(100, 30));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(200, 30));
        label_6->setMaximumSize(QSize(200, 30));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_3->addWidget(widget_5);

        widget_8 = new QWidget(twDetail);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_9 = new QLabel(widget_8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(100, 30));
        label_9->setMaximumSize(QSize(100, 30));
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_9);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(200, 30));
        label_10->setMaximumSize(QSize(200, 30));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_3->addWidget(widget_8);

        widget_7 = new QWidget(twDetail);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(100, 30));
        label_7->setMaximumSize(QSize(100, 30));
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        label_8 = new QLabel(widget_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(200, 30));
        label_8->setMaximumSize(QSize(200, 30));
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_3->addWidget(widget_7);

        widget_9 = new QWidget(twDetail);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_7 = new QHBoxLayout(widget_9);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_11 = new QLabel(widget_9);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 30));
        label_11->setMaximumSize(QSize(100, 30));
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_11);

        lblSubscription = new QLabel(widget_9);
        lblSubscription->setObjectName(QStringLiteral("lblSubscription"));
        lblSubscription->setMinimumSize(QSize(200, 30));
        lblSubscription->setMaximumSize(QSize(200, 30));
        lblSubscription->setFont(font2);
        lblSubscription->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblSubscription->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lblSubscription);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_3->addWidget(widget_9);

        widget_6 = new QWidget(twDetail);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        pbSendMessage = new QPushButton(widget_6);
        pbSendMessage->setObjectName(QStringLiteral("pbSendMessage"));
        pbSendMessage->setMinimumSize(QSize(120, 30));
        pbSendMessage->setMaximumSize(QSize(120, 30));
        pbSendMessage->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"	width: 90;\n"
"	height: 25;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));
        pbSendMessage->setFlat(true);

        horizontalLayout_2->addWidget(pbSendMessage);

        pbOpenClass = new QPushButton(widget_6);
        pbOpenClass->setObjectName(QStringLiteral("pbOpenClass"));
        pbOpenClass->setMinimumSize(QSize(120, 30));
        pbOpenClass->setMaximumSize(QSize(120, 30));
        pbOpenClass->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-image: url(:/STSample/Resources/images/red.png);\n"
"	width: 90;\n"
"	height: 25;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}"));
        pbOpenClass->setFlat(true);

        horizontalLayout_2->addWidget(pbOpenClass);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);


        verticalLayout_3->addWidget(widget_6);

        verticalSpacer_2 = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(twDetail, QString());
        twSetting = new QWidget();
        twSetting->setObjectName(QStringLiteral("twSetting"));
        verticalLayout_4 = new QVBoxLayout(twSetting);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 30, -1, -1);
        widget_10 = new QWidget(twSetting);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        label_13 = new QLabel(widget_10);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(100, 30));
        label_13->setMaximumSize(QSize(100, 30));
        label_13->setFont(font2);
        label_13->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_13);

        checkBox = new QCheckBox(widget_10);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        checkBox->setMinimumSize(QSize(100, 30));
        checkBox->setMaximumSize(QSize(100, 30));
        checkBox->setLayoutDirection(Qt::RightToLeft);
        checkBox->setStyleSheet(QLatin1String("QCheckBox {\n"
"    spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"	image: url(:/STSample/Resources/images/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/STSample/Resources/images/checkbox_checked.png);\n"
"}\n"
""));

        horizontalLayout_8->addWidget(checkBox);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);


        verticalLayout_4->addWidget(widget_10);

        widget_11 = new QWidget(twSetting);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_9 = new QHBoxLayout(widget_11);
        horizontalLayout_9->setSpacing(50);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 160, -1, -1);
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        pushButton_4 = new QPushButton(widget_11);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(200, 30));
        pushButton_4->setMaximumSize(QSize(200, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-image: url(:/STSample/Resources/images/red.png);\n"
"	width: 90;\n"
"	height: 25;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}"));
        pushButton_4->setFlat(true);

        horizontalLayout_9->addWidget(pushButton_4);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_4->addWidget(widget_11);

        verticalSpacer_3 = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(twSetting, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(1, 1);

        retranslateUi(STContactDetailClass);

        tabWidget->setCurrentIndex(0);
        pbSendMessage->setDefault(false);


        QMetaObject::connectSlotsByName(STContactDetailClass);
    } // setupUi

    void retranslateUi(QWidget *STContactDetailClass)
    {
        STContactDetailClass->setWindowTitle(QApplication::translate("STContactDetailClass", "STContactDetail", 0));
        lblPic->setText(QString());
        lblName->setText(QApplication::translate("STContactDetailClass", "Sunix", 0));
        label_3->setText(QApplication::translate("STContactDetailClass", "\350\264\246\343\200\200\345\217\267\357\274\232", 0));
        lblJid->setText(QApplication::translate("STContactDetailClass", "13951651032", 0));
        label_5->setText(QApplication::translate("STContactDetailClass", "\346\200\247\343\200\200\345\210\253\357\274\232", 0));
        label_6->setText(QApplication::translate("STContactDetailClass", "\347\224\267", 0));
        label_9->setText(QApplication::translate("STContactDetailClass", "\345\271\264\343\200\200\351\276\204\357\274\232", 0));
        label_10->setText(QApplication::translate("STContactDetailClass", "18", 0));
        label_7->setText(QApplication::translate("STContactDetailClass", "\345\234\260\343\200\200\345\214\272\357\274\232", 0));
        label_8->setText(QApplication::translate("STContactDetailClass", "\344\270\255\345\233\275\343\200\200\346\261\237\350\213\217\343\200\200\345\215\227\344\272\254", 0));
        label_11->setText(QApplication::translate("STContactDetailClass", "\347\255\276\343\200\200\345\220\215\357\274\232", 0));
        lblSubscription->setText(QApplication::translate("STContactDetailClass", "I'll be there", 0));
        pbSendMessage->setText(QApplication::translate("STContactDetailClass", "\345\217\221\351\200\201\346\266\210\346\201\257", 0));
        pbOpenClass->setText(QApplication::translate("STContactDetailClass", "\344\270\264\346\227\266\346\225\231\345\256\244", 0));
        tabWidget->setTabText(tabWidget->indexOf(twDetail), QApplication::translate("STContactDetailClass", "\344\277\241\346\201\257", 0));
        label_13->setText(QApplication::translate("STContactDetailClass", "\346\266\210\346\201\257\345\205\215\346\211\223\346\211\260\357\274\232", 0));
        checkBox->setText(QString());
        pushButton_4->setText(QApplication::translate("STContactDetailClass", "\345\210\240\351\231\244\345\245\275\345\217\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(twSetting), QApplication::translate("STContactDetailClass", "\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class STContactDetailClass: public Ui_STContactDetailClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCONTACTDETAIL_H