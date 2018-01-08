/********************************************************************************
** Form generated from reading UI file 'STContactAddNew.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCONTACTADDNEW_H
#define UI_STCONTACTADDNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_STContactAddNewClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widSearch;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLineEdit *leContactJid;
    QPushButton *pbSearch;
    QSpacerItem *horizontalSpacer_22;
    QWidget *widNotFound;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_2;
    QWidget *widAddNewDetail;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    MaskLabel *lblPic;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_22;
    QLabel *lblJid;
    QSpacerItem *horizontalSpacer_30;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_18;
    QLabel *lblName;
    QSpacerItem *horizontalSpacer_26;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_14;
    QLabel *lblSubscription;
    QSpacerItem *horizontalSpacer_20;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *pbAddNew;
    QLabel *lblHasSendRequest;
    QLabel *lblAlreadyFriend;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *STContactAddNewClass)
    {
        if (STContactAddNewClass->objectName().isEmpty())
            STContactAddNewClass->setObjectName(QStringLiteral("STContactAddNewClass"));
        STContactAddNewClass->resize(626, 454);
        STContactAddNewClass->setStyleSheet(QLatin1String("QWidget {background-color: #ffffff;}\n"
"\n"
"QWidget#STContactAddNewClass{border-right: 1px solid #e3e3e3;border-top: 1px solid #e3e3e3;border-bottom: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(STContactAddNewClass);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widSearch = new QWidget(STContactAddNewClass);
        widSearch->setObjectName(QStringLiteral("widSearch"));
        horizontalLayout_11 = new QHBoxLayout(widSearch);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 30, 0, 0);
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        leContactJid = new QLineEdit(widSearch);
        leContactJid->setObjectName(QStringLiteral("leContactJid"));
        leContactJid->setMinimumSize(QSize(180, 30));
        leContactJid->setMaximumSize(QSize(180, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        leContactJid->setFont(font);
        leContactJid->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_11->addWidget(leContactJid);

        pbSearch = new QPushButton(widSearch);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        pbSearch->setMinimumSize(QSize(80, 30));
        pbSearch->setMaximumSize(QSize(80, 30));
        pbSearch->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
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
        pbSearch->setFlat(true);

        horizontalLayout_11->addWidget(pbSearch);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_22);


        verticalLayout->addWidget(widSearch);

        widNotFound = new QWidget(STContactAddNewClass);
        widNotFound->setObjectName(QStringLiteral("widNotFound"));
        verticalLayout_5 = new QVBoxLayout(widNotFound);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widNotFound);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_14 = new QHBoxLayout(widget);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(200, 30));
        label_2->setMaximumSize(QSize(200, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_2);


        verticalLayout_5->addWidget(widget);


        verticalLayout->addWidget(widNotFound);

        widAddNewDetail = new QWidget(STContactAddNewClass);
        widAddNewDetail->setObjectName(QStringLiteral("widAddNewDetail"));
        verticalLayout_2 = new QVBoxLayout(widAddNewDetail);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 9, 0, 0);
        widget_2 = new QWidget(widAddNewDetail);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblPic = new MaskLabel(widget_2);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setMinimumSize(QSize(80, 80));
        lblPic->setMaximumSize(QSize(80, 80));

        horizontalLayout->addWidget(lblPic);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        widget_17 = new QWidget(widAddNewDetail);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_15 = new QHBoxLayout(widget_17);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_29);

        label_22 = new QLabel(widget_17);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(150, 30));
        label_22->setMaximumSize(QSize(150, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(11);
        label_22->setFont(font1);
        label_22->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_22);

        lblJid = new QLabel(widget_17);
        lblJid->setObjectName(QStringLiteral("lblJid"));
        lblJid->setMinimumSize(QSize(150, 30));
        lblJid->setMaximumSize(QSize(150, 30));
        lblJid->setFont(font1);
        lblJid->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblJid->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(lblJid);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_30);


        verticalLayout_2->addWidget(widget_17);

        widget_15 = new QWidget(widAddNewDetail);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_13 = new QHBoxLayout(widget_15);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_25);

        label_18 = new QLabel(widget_15);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(150, 30));
        label_18->setMaximumSize(QSize(150, 30));
        label_18->setFont(font1);
        label_18->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_18);

        lblName = new QLabel(widget_15);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setMinimumSize(QSize(150, 30));
        lblName->setMaximumSize(QSize(150, 30));
        lblName->setFont(font1);
        lblName->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblName->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblName);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_26);


        verticalLayout_2->addWidget(widget_15);

        widget_12 = new QWidget(widAddNewDetail);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        horizontalLayout_10 = new QHBoxLayout(widget_12);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);

        label_14 = new QLabel(widget_12);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(150, 30));
        label_14->setMaximumSize(QSize(150, 30));
        label_14->setFont(font1);
        label_14->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_14);

        lblSubscription = new QLabel(widget_12);
        lblSubscription->setObjectName(QStringLiteral("lblSubscription"));
        lblSubscription->setMinimumSize(QSize(150, 30));
        lblSubscription->setMaximumSize(QSize(150, 30));
        lblSubscription->setFont(font1);
        lblSubscription->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblSubscription->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(lblSubscription);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);


        verticalLayout_2->addWidget(widget_12);

        widget_14 = new QWidget(widAddNewDetail);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        horizontalLayout_12 = new QHBoxLayout(widget_14);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_23);

        pbAddNew = new QPushButton(widget_14);
        pbAddNew->setObjectName(QStringLiteral("pbAddNew"));
        pbAddNew->setMinimumSize(QSize(120, 30));
        pbAddNew->setMaximumSize(QSize(120, 30));
        pbAddNew->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
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
        pbAddNew->setFlat(true);

        horizontalLayout_12->addWidget(pbAddNew);

        lblHasSendRequest = new QLabel(widget_14);
        lblHasSendRequest->setObjectName(QStringLiteral("lblHasSendRequest"));
        lblHasSendRequest->setFont(font);
        lblHasSendRequest->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblHasSendRequest->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(lblHasSendRequest);

        lblAlreadyFriend = new QLabel(widget_14);
        lblAlreadyFriend->setObjectName(QStringLiteral("lblAlreadyFriend"));
        lblAlreadyFriend->setFont(font);
        lblAlreadyFriend->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblAlreadyFriend->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(lblAlreadyFriend);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_24);


        verticalLayout_2->addWidget(widget_14);


        verticalLayout->addWidget(widAddNewDetail);

        verticalSpacer_4 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(STContactAddNewClass);

        pbAddNew->setDefault(false);


        QMetaObject::connectSlotsByName(STContactAddNewClass);
    } // setupUi

    void retranslateUi(QWidget *STContactAddNewClass)
    {
        STContactAddNewClass->setWindowTitle(QApplication::translate("STContactAddNewClass", "STContactAddNew", 0));
        leContactJid->setPlaceholderText(QApplication::translate("STContactAddNewClass", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", 0));
        pbSearch->setText(QApplication::translate("STContactAddNewClass", "\346\220\234\347\264\242", 0));
        label_2->setText(QApplication::translate("STContactAddNewClass", "\346\262\241\346\234\211\346\211\276\345\210\260\347\254\246\345\220\210\346\220\234\347\264\242\346\235\241\344\273\266\347\232\204\347\224\250\346\210\267", 0));
        lblPic->setText(QString());
        label_22->setText(QApplication::translate("STContactAddNewClass", "\350\264\246\343\200\200\345\217\267\357\274\232", 0));
        lblJid->setText(QString());
        label_18->setText(QApplication::translate("STContactAddNewClass", "\345\247\223\343\200\200\345\220\215\357\274\232", 0));
        lblName->setText(QString());
        label_14->setText(QApplication::translate("STContactAddNewClass", "\347\255\276\343\200\200\345\220\215\357\274\232", 0));
        lblSubscription->setText(QString());
        pbAddNew->setText(QApplication::translate("STContactAddNewClass", "\346\267\273\345\212\240\345\245\275\345\217\213", 0));
        lblHasSendRequest->setText(QApplication::translate("STContactAddNewClass", "\345\267\262\345\217\221\351\200\201\346\267\273\345\212\240\345\245\275\345\217\213\350\257\267\346\261\202", 0));
        lblAlreadyFriend->setText(QApplication::translate("STContactAddNewClass", "\350\257\245\347\224\250\346\210\267\345\267\262\346\230\257\346\202\250\347\232\204\345\245\275\345\217\213", 0));
    } // retranslateUi

};

namespace Ui {
    class STContactAddNewClass: public Ui_STContactAddNewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCONTACTADDNEW_H
