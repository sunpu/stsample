/********************************************************************************
** Form generated from reading UI file 'STPersonalInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STPERSONALINFO_H
#define UI_STPERSONALINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <masklabel.h>

QT_BEGIN_NAMESPACE

class Ui_STPersonalInfoClass
{
public:
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_23;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_27;
    MaskLabel *lblPic;
    QSpacerItem *horizontalSpacer_28;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lblName;
    QLineEdit *leName;
    QSpacerItem *horizontalSpacer_2;
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
    QLabel *lblTelephone;
    QLineEdit *leTelephone;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_9;
    QLabel *lblEmail;
    QLineEdit *leEmail;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_11;
    QLabel *lblDescription;
    QLineEdit *leDescription;
    QSpacerItem *horizontalSpacer_12;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pbEdit;
    QPushButton *pbSave;
    QSpacerItem *horizontalSpacer_22;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_26;
    QFrame *line;
    QSpacerItem *horizontalSpacer_25;
    QWidget *widModifyAccess;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pbModifyPasswd;
    QSpacerItem *horizontalSpacer_14;
    QWidget *widModifyPasswd;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QLineEdit *leOldPasswd;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_15;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *lePasswd;
    QSpacerItem *horizontalSpacer_16;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *lePasswdVerify;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pbModify;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_24;

    void setupUi(QWidget *STPersonalInfoClass)
    {
        if (STPersonalInfoClass->objectName().isEmpty())
            STPersonalInfoClass->setObjectName(QStringLiteral("STPersonalInfoClass"));
        STPersonalInfoClass->resize(956, 690);
        STPersonalInfoClass->setStyleSheet(QLatin1String("QWidget#STPersonalInfoClass{border-bottom: 1px solid #e3e3e3;border-top: 1px solid #e3e3e3;border-right: 1px solid #e3e3e3;}\n"
""));
        horizontalLayout_16 = new QHBoxLayout(STPersonalInfoClass);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_23 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_23);

        widget_6 = new QWidget(STPersonalInfoClass);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_6);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral(""));
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
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_18 = new QHBoxLayout(widget_11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_27 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_27);

        lblPic = new MaskLabel(widget_11);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPic->sizePolicy().hasHeightForWidth());
        lblPic->setSizePolicy(sizePolicy);
        lblPic->setMinimumSize(QSize(80, 80));
        lblPic->setMaximumSize(QSize(80, 80));
        lblPic->setStyleSheet(QStringLiteral(""));

        horizontalLayout_18->addWidget(lblPic);

        horizontalSpacer_28 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_28);


        verticalLayout_2->addWidget(widget_11);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_15 = new QHBoxLayout(widget_2);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        lblName = new QLabel(widget_2);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setMinimumSize(QSize(200, 30));
        lblName->setMaximumSize(QSize(200, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        lblName->setFont(font);
        lblName->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblName->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(lblName);

        leName = new QLineEdit(widget_2);
        leName->setObjectName(QStringLiteral("leName"));
        leName->setMinimumSize(QSize(200, 30));
        leName->setMaximumSize(QSize(200, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        leName->setFont(font1);
        leName->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leName->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(leName);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout->addWidget(widget_3);

        horizontalSpacer_2 = new QSpacerItem(290, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(widget_6);
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
        lblJid->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lblJid);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
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

        lblTelephone = new QLabel(widget_5);
        lblTelephone->setObjectName(QStringLiteral("lblTelephone"));
        lblTelephone->setMinimumSize(QSize(200, 30));
        lblTelephone->setMaximumSize(QSize(200, 30));
        lblTelephone->setFont(font2);
        lblTelephone->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblTelephone->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblTelephone);

        leTelephone = new QLineEdit(widget_5);
        leTelephone->setObjectName(QStringLiteral("leTelephone"));
        leTelephone->setMinimumSize(QSize(200, 30));
        leTelephone->setMaximumSize(QSize(200, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        leTelephone->setFont(font3);
        leTelephone->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leTelephone->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(leTelephone);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget_5);

        widget_8 = new QWidget(widget_6);
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

        lblEmail = new QLabel(widget_8);
        lblEmail->setObjectName(QStringLiteral("lblEmail"));
        lblEmail->setMinimumSize(QSize(200, 30));
        lblEmail->setMaximumSize(QSize(200, 30));
        lblEmail->setFont(font2);
        lblEmail->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblEmail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(lblEmail);

        leEmail = new QLineEdit(widget_8);
        leEmail->setObjectName(QStringLiteral("leEmail"));
        leEmail->setMinimumSize(QSize(200, 30));
        leEmail->setMaximumSize(QSize(200, 30));
        leEmail->setFont(font3);
        leEmail->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leEmail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(leEmail);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout->addWidget(widget_8);

        widget_9 = new QWidget(widget_6);
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

        lblDescription = new QLabel(widget_9);
        lblDescription->setObjectName(QStringLiteral("lblDescription"));
        lblDescription->setMinimumSize(QSize(200, 30));
        lblDescription->setMaximumSize(QSize(200, 30));
        lblDescription->setFont(font2);
        lblDescription->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lblDescription);

        leDescription = new QLineEdit(widget_9);
        leDescription->setObjectName(QStringLiteral("leDescription"));
        leDescription->setMinimumSize(QSize(200, 30));
        leDescription->setMaximumSize(QSize(200, 30));
        leDescription->setFont(font3);
        leDescription->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(leDescription);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout->addWidget(widget_9);

        widget_19 = new QWidget(widget_6);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        horizontalLayout_14 = new QHBoxLayout(widget_19);
        horizontalLayout_14->setSpacing(50);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 9, -1, -1);
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_21);

        pbEdit = new QPushButton(widget_19);
        pbEdit->setObjectName(QStringLiteral("pbEdit"));
        pbEdit->setMinimumSize(QSize(100, 30));
        pbEdit->setMaximumSize(QSize(100, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(10);
        pbEdit->setFont(font4);
        pbEdit->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));
        pbEdit->setFlat(true);

        horizontalLayout_14->addWidget(pbEdit);

        pbSave = new QPushButton(widget_19);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        pbSave->setMinimumSize(QSize(100, 30));
        pbSave->setMaximumSize(QSize(100, 30));
        pbSave->setFont(font4);
        pbSave->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));

        horizontalLayout_14->addWidget(pbSave);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_22);


        verticalLayout->addWidget(widget_19);

        widget_20 = new QWidget(widget_6);
        widget_20->setObjectName(QStringLiteral("widget_20"));
        horizontalLayout_17 = new QHBoxLayout(widget_20);
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_26 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_26);

        line = new QFrame(widget_20);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(550, 0));
        line->setMaximumSize(QSize(16777215, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_17->addWidget(line);

        horizontalSpacer_25 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_25);


        verticalLayout->addWidget(widget_20);

        widModifyAccess = new QWidget(widget_6);
        widModifyAccess->setObjectName(QStringLiteral("widModifyAccess"));
        horizontalLayout_2 = new QHBoxLayout(widModifyAccess);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 50, -1, 20);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        pbModifyPasswd = new QPushButton(widModifyAccess);
        pbModifyPasswd->setObjectName(QStringLiteral("pbModifyPasswd"));
        pbModifyPasswd->setMinimumSize(QSize(120, 30));
        pbModifyPasswd->setMaximumSize(QSize(120, 30));
        pbModifyPasswd->setFont(font4);
        pbModifyPasswd->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));
        pbModifyPasswd->setFlat(true);

        horizontalLayout_2->addWidget(pbModifyPasswd);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);


        verticalLayout->addWidget(widModifyAccess);

        widModifyPasswd = new QWidget(widget_6);
        widModifyPasswd->setObjectName(QStringLiteral("widModifyPasswd"));
        verticalLayout_3 = new QVBoxLayout(widModifyPasswd);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        widget_15 = new QWidget(widModifyPasswd);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_10 = new QHBoxLayout(widget_15);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(20, 5, 20, 5);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        widget_16 = new QWidget(widget_15);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        widget_16->setMinimumSize(QSize(0, 30));
        widget_16->setMaximumSize(QSize(16777215, 30));
        widget_16->setStyleSheet(QStringLiteral(""));
        horizontalLayout_12 = new QHBoxLayout(widget_16);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(5, 5, 5, 5);
        label_6 = new QLabel(widget_16);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_12->addWidget(label_6);


        horizontalLayout_10->addWidget(widget_16);

        leOldPasswd = new QLineEdit(widget_15);
        leOldPasswd->setObjectName(QStringLiteral("leOldPasswd"));
        leOldPasswd->setMinimumSize(QSize(180, 30));
        leOldPasswd->setMaximumSize(QSize(180, 30));
        leOldPasswd->setFont(font3);
        leOldPasswd->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leOldPasswd->setMaxLength(20);
        leOldPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_10->addWidget(leOldPasswd);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_3->addWidget(widget_15);

        widget_7 = new QWidget(widModifyPasswd);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, 5, 20, 5);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_15);

        widget_10 = new QWidget(widget_7);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 30));
        widget_10->setMaximumSize(QSize(16777215, 30));
        widget_10->setStyleSheet(QStringLiteral(""));
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(widget_10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_8->addWidget(label_2);


        horizontalLayout_5->addWidget(widget_10);

        lePasswd = new QLineEdit(widget_7);
        lePasswd->setObjectName(QStringLiteral("lePasswd"));
        lePasswd->setMinimumSize(QSize(180, 30));
        lePasswd->setMaximumSize(QSize(180, 30));
        lePasswd->setFont(font3);
        lePasswd->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        lePasswd->setMaxLength(20);
        lePasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lePasswd);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_16);


        verticalLayout_3->addWidget(widget_7);

        widget_12 = new QWidget(widModifyPasswd);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        horizontalLayout_9 = new QHBoxLayout(widget_12);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(20, 5, 20, 5);
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setMinimumSize(QSize(0, 30));
        widget_13->setMaximumSize(QSize(16777215, 30));
        widget_13->setStyleSheet(QStringLiteral(""));
        horizontalLayout_11 = new QHBoxLayout(widget_13);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(widget_13);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_11->addWidget(label_4);


        horizontalLayout_9->addWidget(widget_13);

        lePasswdVerify = new QLineEdit(widget_12);
        lePasswdVerify->setObjectName(QStringLiteral("lePasswdVerify"));
        lePasswdVerify->setMinimumSize(QSize(0, 30));
        lePasswdVerify->setMaximumSize(QSize(180, 30));
        lePasswdVerify->setFont(font3);
        lePasswdVerify->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        lePasswdVerify->setMaxLength(20);
        lePasswdVerify->setEchoMode(QLineEdit::Password);

        horizontalLayout_9->addWidget(lePasswdVerify);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_3->addWidget(widget_12);

        widget_18 = new QWidget(widModifyPasswd);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        horizontalLayout_13 = new QHBoxLayout(widget_18);
        horizontalLayout_13->setSpacing(50);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(20, 9, 20, 9);
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);

        pbModify = new QPushButton(widget_18);
        pbModify->setObjectName(QStringLiteral("pbModify"));
        pbModify->setMinimumSize(QSize(100, 30));
        pbModify->setMaximumSize(QSize(100, 30));
        pbModify->setFont(font4);
        pbModify->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));
        pbModify->setFlat(true);

        horizontalLayout_13->addWidget(pbModify);

        pbCancel = new QPushButton(widget_18);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setMinimumSize(QSize(100, 30));
        pbCancel->setMaximumSize(QSize(100, 30));
        pbCancel->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-image: url(:/STSample/Resources/images/red.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}"));
        pbCancel->setFlat(true);

        horizontalLayout_13->addWidget(pbCancel);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_20);


        verticalLayout_3->addWidget(widget_18);


        verticalLayout->addWidget(widModifyPasswd);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_16->addWidget(widget_6);

        horizontalSpacer_24 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_24);


        retranslateUi(STPersonalInfoClass);

        pbEdit->setDefault(false);
        pbModifyPasswd->setDefault(false);
        pbModify->setDefault(false);


        QMetaObject::connectSlotsByName(STPersonalInfoClass);
    } // setupUi

    void retranslateUi(QWidget *STPersonalInfoClass)
    {
        STPersonalInfoClass->setWindowTitle(QApplication::translate("STPersonalInfoClass", "STPersonalInfo", 0));
        lblPic->setText(QString());
        lblName->setText(QString());
        label_3->setText(QApplication::translate("STPersonalInfoClass", "\350\264\246\343\200\200\345\217\267\357\274\232", 0));
        lblJid->setText(QString());
        label_5->setText(QApplication::translate("STPersonalInfoClass", "\346\211\213\346\234\272\345\217\267\357\274\232", 0));
        lblTelephone->setText(QString());
        label_9->setText(QApplication::translate("STPersonalInfoClass", "\351\202\256\343\200\200\347\256\261\357\274\232", 0));
        lblEmail->setText(QString());
        label_11->setText(QApplication::translate("STPersonalInfoClass", "\347\255\276\343\200\200\345\220\215\357\274\232", 0));
        lblDescription->setText(QString());
        pbEdit->setText(QApplication::translate("STPersonalInfoClass", "\347\274\226\343\200\200\343\200\200\350\276\221", 0));
        pbSave->setText(QApplication::translate("STPersonalInfoClass", "\344\277\235\343\200\200\343\200\200\345\255\230", 0));
        pbModifyPasswd->setText(QApplication::translate("STPersonalInfoClass", "\346\233\264\346\224\271\345\257\206\347\240\201", 0));
        label_6->setText(QApplication::translate("STPersonalInfoClass", "\345\216\237\345\257\206\347\240\201\357\274\232\343\200\200", 0));
        label_2->setText(QApplication::translate("STPersonalInfoClass", "\346\226\260\345\257\206\347\240\201\357\274\232\343\200\200", 0));
        label_4->setText(QApplication::translate("STPersonalInfoClass", "\345\257\206\347\240\201\347\241\256\350\256\244\357\274\232", 0));
        pbModify->setText(QApplication::translate("STPersonalInfoClass", "\344\277\256\343\200\200\343\200\200\346\224\271", 0));
        pbCancel->setText(QApplication::translate("STPersonalInfoClass", "\345\217\226\343\200\200\343\200\200\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class STPersonalInfoClass: public Ui_STPersonalInfoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STPERSONALINFO_H
