/********************************************************************************
** Form generated from reading UI file 'STMain.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STMAIN_H
#define UI_STMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STMainClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblUserPic;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QPushButton *pbChat;
    QPushButton *pbContact;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QPushButton *pbMessage;
    QPushButton *pbSetting;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *leContactSearch;
    QPushButton *pbAddContact;
    QWidget *widTitle;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblChatTitle;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pbMinimum;
    QPushButton *pbMaximum;
    QPushButton *pbNormal;
    QPushButton *pbClose;
    QStackedWidget *swMain;
    QWidget *pgChatWindow;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_6;
    QListWidget *lwChatList;
    QWidget *widChatMainWindow;
    QHBoxLayout *horizontalLayout_15;
    QWidget *widChatBlank;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QStackedWidget *swChatDetail;
    QWidget *pgContactWindow;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widContactTitle;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lblDirect;
    QLabel *lblFriend;
    QSpacerItem *hsFriend;
    QLabel *lblFriendNum;
    QListWidget *lwContactList;
    QSpacerItem *verticalSpacer_7;
    QWidget *widContactMainWindow;
    QHBoxLayout *horizontalLayout_12;
    QWidget *widContactBlank;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widContactAddNew;
    QHBoxLayout *horizontalLayout_16;
    QWidget *widContactDetail;
    QHBoxLayout *horizontalLayout_14;

    void setupUi(QWidget *STMainClass)
    {
        if (STMainClass->objectName().isEmpty())
            STMainClass->setObjectName(QStringLiteral("STMainClass"));
        STMainClass->resize(980, 623);
        STMainClass->setMinimumSize(QSize(980, 620));
        STMainClass->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(STMainClass);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(STMainClass);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(65, 0));
        widget_3->setMaximumSize(QSize(65, 16777215));
        widget_3->setStyleSheet(QStringLiteral("background-color: #434555;"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(50);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 0);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblUserPic = new QLabel(widget_4);
        lblUserPic->setObjectName(QStringLiteral("lblUserPic"));
        lblUserPic->setMinimumSize(QSize(45, 45));
        lblUserPic->setMaximumSize(QSize(45, 45));
        lblUserPic->setStyleSheet(QLatin1String("\n"
"QLabel{\n"
"border-image: url(:/STSample/Resources/images/account.png);\n"
"}"));

        verticalLayout_2->addWidget(lblUserPic);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setLayoutDirection(Qt::LeftToRight);
        widget_5->setAutoFillBackground(false);
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(30);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pbChat = new QPushButton(widget_5);
        pbChat->setObjectName(QStringLiteral("pbChat"));
        pbChat->setMinimumSize(QSize(30, 30));
        pbChat->setMaximumSize(QSize(30, 30));
        pbChat->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/chat.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/chat_focus.png);\n"
"}"));

        gridLayout->addWidget(pbChat, 0, 0, 1, 1);

        pbContact = new QPushButton(widget_5);
        pbContact->setObjectName(QStringLiteral("pbContact"));
        pbContact->setMinimumSize(QSize(30, 30));
        pbContact->setMaximumSize(QSize(30, 30));
        pbContact->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/contact.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/contact_focus.png);\n"
"}"));

        gridLayout->addWidget(pbContact, 1, 0, 1, 1);


        verticalLayout->addWidget(widget_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(0, 0, 0, 20);
        pbMessage = new QPushButton(widget_6);
        pbMessage->setObjectName(QStringLiteral("pbMessage"));
        pbMessage->setMinimumSize(QSize(18, 18));
        pbMessage->setMaximumSize(QSize(18, 18));
        pbMessage->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/message.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/message_focus.png);\n"
"}"));

        gridLayout_2->addWidget(pbMessage, 1, 0, 1, 1);

        pbSetting = new QPushButton(widget_6);
        pbSetting->setObjectName(QStringLiteral("pbSetting"));
        pbSetting->setMinimumSize(QSize(18, 18));
        pbSetting->setMaximumSize(QSize(18, 18));
        pbSetting->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/setting.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/setting_focus.png);\n"
"}"));

        gridLayout_2->addWidget(pbSetting, 2, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_6);

        verticalLayout->setStretch(3, 1);

        horizontalLayout_2->addWidget(widget_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        widget_10 = new QWidget(STMainClass);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout = new QHBoxLayout(widget_10);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(widget_10);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(290, 0));
        widget_7->setMaximumSize(QSize(290, 45));
        widget_7->setStyleSheet(QLatin1String("QWidget{border-bottom: 1px solid #e3e3e3;border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);}\n"
""));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(9, 9, -1, 9);
        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMaximumSize(QSize(16777215, 24));
        horizontalLayout_4 = new QHBoxLayout(widget_9);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        leContactSearch = new QLineEdit(widget_9);
        leContactSearch->setObjectName(QStringLiteral("leContactSearch"));
        leContactSearch->setMinimumSize(QSize(0, 24));
        leContactSearch->setMaximumSize(QSize(16777215, 24));
        QFont font;
        font.setPointSize(11);
        leContactSearch->setFont(font);
        leContactSearch->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(leContactSearch);


        horizontalLayout_5->addWidget(widget_9);

        pbAddContact = new QPushButton(widget_7);
        pbAddContact->setObjectName(QStringLiteral("pbAddContact"));
        pbAddContact->setMinimumSize(QSize(24, 24));
        pbAddContact->setMaximumSize(QSize(24, 24));
        pbAddContact->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/add.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/add_focus.png);\n"
"}"));

        horizontalLayout_5->addWidget(pbAddContact);


        horizontalLayout->addWidget(widget_7);

        widTitle = new QWidget(widget_10);
        widTitle->setObjectName(QStringLiteral("widTitle"));
        widTitle->setStyleSheet(QStringLiteral("QWidget{border-bottom: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);}"));
        horizontalLayout_10 = new QHBoxLayout(widTitle);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(15, 0, 0, 0);
        lblChatTitle = new QLabel(widTitle);
        lblChatTitle->setObjectName(QStringLiteral("lblChatTitle"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        lblChatTitle->setFont(font1);
        lblChatTitle->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_10->addWidget(lblChatTitle);

        horizontalSpacer_5 = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        widget_17 = new QWidget(widTitle);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_9 = new QHBoxLayout(widget_17);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, 0);
        pbMinimum = new QPushButton(widget_17);
        pbMinimum->setObjectName(QStringLiteral("pbMinimum"));
        pbMinimum->setMinimumSize(QSize(20, 20));
        pbMinimum->setMaximumSize(QSize(20, 20));
        pbMinimum->setStyleSheet(QLatin1String("QPushButton{\n"
"	background: transparent;\n"
"	border-image: url(:/STSample/Resources/images/minimum.png);}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: rgb(218, 218, 218);\n"
"}"));

        horizontalLayout_9->addWidget(pbMinimum);

        pbMaximum = new QPushButton(widget_17);
        pbMaximum->setObjectName(QStringLiteral("pbMaximum"));
        pbMaximum->setMinimumSize(QSize(20, 20));
        pbMaximum->setMaximumSize(QSize(20, 20));
        pbMaximum->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"	background: transparent;\n"
"	border-image: url(:/STSample/Resources/images/maximum.png);\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: rgb(218, 218, 218);\n"
"}"));

        horizontalLayout_9->addWidget(pbMaximum);

        pbNormal = new QPushButton(widget_17);
        pbNormal->setObjectName(QStringLiteral("pbNormal"));
        pbNormal->setMinimumSize(QSize(20, 20));
        pbNormal->setMaximumSize(QSize(20, 20));
        pbNormal->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"	background: transparent;\n"
"	border-image: url(:/STSample/Resources/images/normal.png);\n"
"    background-repeat:no-repeat;\n"
"    border:none;}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: rgb(218, 218, 218);\n"
"}"));

        horizontalLayout_9->addWidget(pbNormal);

        pbClose = new QPushButton(widget_17);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setMinimumSize(QSize(20, 20));
        pbClose->setMaximumSize(QSize(20, 20));
        pbClose->setStyleSheet(QLatin1String("\n"
"QPushButton{border-image: url(:/STSample/Resources/images/close.png);}\n"
"\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: #ff6741;\n"
"}"));

        horizontalLayout_9->addWidget(pbClose);


        horizontalLayout_10->addWidget(widget_17);


        horizontalLayout->addWidget(widTitle);


        verticalLayout_4->addWidget(widget_10);

        swMain = new QStackedWidget(STMainClass);
        swMain->setObjectName(QStringLiteral("swMain"));
        pgChatWindow = new QWidget();
        pgChatWindow->setObjectName(QStringLiteral("pgChatWindow"));
        horizontalLayout_8 = new QHBoxLayout(pgChatWindow);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_13 = new QWidget(pgChatWindow);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setMinimumSize(QSize(290, 0));
        widget_13->setMaximumSize(QSize(290, 16777215));
        widget_13->setStyleSheet(QLatin1String("QWidget#widget_13{border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;}\n"
""));
        verticalLayout_6 = new QVBoxLayout(widget_13);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lwChatList = new QListWidget(widget_13);
        lwChatList->setObjectName(QStringLiteral("lwChatList"));
        lwChatList->setFocusPolicy(Qt::NoFocus);
        lwChatList->setStyleSheet(QLatin1String("QListWidget{border:0px;border-right:1px solid #e3e3e3;}\n"
"QListWidget::Item{height:60px;padding-top:0px; padding-bottom:0px;}\n"
"QListWidget::Item:hover{background:#ececec; }\n"
"QListWidget::item:selected{background:#ececec; }"));

        verticalLayout_6->addWidget(lwChatList);


        horizontalLayout_8->addWidget(widget_13);

        widChatMainWindow = new QWidget(pgChatWindow);
        widChatMainWindow->setObjectName(QStringLiteral("widChatMainWindow"));
        widChatMainWindow->setStyleSheet(QStringLiteral(""));
        horizontalLayout_15 = new QHBoxLayout(widChatMainWindow);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        widChatBlank = new QWidget(widChatMainWindow);
        widChatBlank->setObjectName(QStringLiteral("widChatBlank"));
        widChatBlank->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_7 = new QHBoxLayout(widChatBlank);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        widget_16 = new QWidget(widChatBlank);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        verticalLayout_7 = new QVBoxLayout(widget_16);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_3 = new QSpacerItem(20, 213, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        label_2 = new QLabel(widget_16);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(250, 40));
        label_2->setMaximumSize(QSize(250, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Hebrew"));
        font2.setPointSize(40);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/vmediax.png);"));

        verticalLayout_7->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 212, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);


        horizontalLayout_7->addWidget(widget_16);

        horizontalSpacer_4 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        horizontalLayout_15->addWidget(widChatBlank);

        swChatDetail = new QStackedWidget(widChatMainWindow);
        swChatDetail->setObjectName(QStringLiteral("swChatDetail"));

        horizontalLayout_15->addWidget(swChatDetail);


        horizontalLayout_8->addWidget(widChatMainWindow);

        swMain->addWidget(pgChatWindow);
        pgContactWindow = new QWidget();
        pgContactWindow->setObjectName(QStringLiteral("pgContactWindow"));
        horizontalLayout_3 = new QHBoxLayout(pgContactWindow);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(pgContactWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(290, 0));
        widget->setMaximumSize(QSize(290, 16777215));
        widget->setStyleSheet(QStringLiteral("QWidget#widget{border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);}"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widContactTitle = new QWidget(widget);
        widContactTitle->setObjectName(QStringLiteral("widContactTitle"));
        widContactTitle->setStyleSheet(QLatin1String("QWidget#widContactTitle{border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);}\n"
""));
        horizontalLayout_13 = new QHBoxLayout(widContactTitle);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(15, -1, 15, -1);
        lblDirect = new QLabel(widContactTitle);
        lblDirect->setObjectName(QStringLiteral("lblDirect"));
        lblDirect->setMinimumSize(QSize(10, 10));
        lblDirect->setMaximumSize(QSize(10, 10));
        lblDirect->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/down.png);"));

        horizontalLayout_13->addWidget(lblDirect);

        lblFriend = new QLabel(widContactTitle);
        lblFriend->setObjectName(QStringLiteral("lblFriend"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        lblFriend->setFont(font3);
        lblFriend->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_13->addWidget(lblFriend);

        hsFriend = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(hsFriend);

        lblFriendNum = new QLabel(widContactTitle);
        lblFriendNum->setObjectName(QStringLiteral("lblFriendNum"));
        lblFriendNum->setFont(font3);
        lblFriendNum->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_13->addWidget(lblFriendNum);


        verticalLayout_3->addWidget(widContactTitle);

        lwContactList = new QListWidget(widget);
        lwContactList->setObjectName(QStringLiteral("lwContactList"));
        lwContactList->setFocusPolicy(Qt::NoFocus);
        lwContactList->setStyleSheet(QLatin1String("QListWidget{border:0px;border-right:1px solid #e3e3e3;}\n"
"QListWidget::Item{height:45px;padding-top:0px; padding-bottom:0px;}\n"
"QListWidget::Item:hover{background:#ececec; }\n"
"QListWidget::item:selected{background:#ececec; }"));

        verticalLayout_3->addWidget(lwContactList);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);


        horizontalLayout_3->addWidget(widget);

        widContactMainWindow = new QWidget(pgContactWindow);
        widContactMainWindow->setObjectName(QStringLiteral("widContactMainWindow"));
        widContactMainWindow->setStyleSheet(QStringLiteral(""));
        horizontalLayout_12 = new QHBoxLayout(widContactMainWindow);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        widContactBlank = new QWidget(widContactMainWindow);
        widContactBlank->setObjectName(QStringLiteral("widContactBlank"));
        widContactBlank->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_6 = new QHBoxLayout(widContactBlank);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        widget_12 = new QWidget(widContactBlank);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        verticalLayout_5 = new QVBoxLayout(widget_12);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 252, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        label = new QLabel(widget_12);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(250, 40));
        label->setMaximumSize(QSize(250, 40));
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/vmediax.png);"));

        verticalLayout_5->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 251, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_6->addWidget(widget_12);

        horizontalSpacer_2 = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_12->addWidget(widContactBlank);

        widContactAddNew = new QWidget(widContactMainWindow);
        widContactAddNew->setObjectName(QStringLiteral("widContactAddNew"));
        widContactAddNew->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_16 = new QHBoxLayout(widContactAddNew);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_12->addWidget(widContactAddNew);

        widContactDetail = new QWidget(widContactMainWindow);
        widContactDetail->setObjectName(QStringLiteral("widContactDetail"));
        widContactDetail->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_14 = new QHBoxLayout(widContactDetail);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_12->addWidget(widContactDetail);


        horizontalLayout_3->addWidget(widContactMainWindow);

        swMain->addWidget(pgContactWindow);

        verticalLayout_4->addWidget(swMain);


        horizontalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(STMainClass);

        swMain->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(STMainClass);
    } // setupUi

    void retranslateUi(QWidget *STMainClass)
    {
        STMainClass->setWindowTitle(QApplication::translate("STMainClass", "STMain", 0));
        lblUserPic->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbChat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbChat->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbContact->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbContact->setText(QString());
        pbMessage->setText(QString());
        pbSetting->setText(QString());
        leContactSearch->setText(QString());
        leContactSearch->setPlaceholderText(QApplication::translate("STMainClass", "\346\220\234\347\264\242", 0));
        pbAddContact->setText(QString());
        lblChatTitle->setText(QString());
        pbMinimum->setText(QString());
        pbMaximum->setText(QString());
        pbNormal->setText(QString());
        pbClose->setText(QString());
        label_2->setText(QString());
        lblDirect->setText(QString());
        lblFriend->setText(QApplication::translate("STMainClass", "\345\245\275\345\217\213", 0));
        lblFriendNum->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STMainClass: public Ui_STMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STMAIN_H
