/********************************************************************************
** Form generated from reading UI file 'STServerConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STSERVERCONFIG_H
#define UI_STSERVERCONFIG_H

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

QT_BEGIN_NAMESPACE

class Ui_STServerConfigClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widTop;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pb2Login;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pbMinimum;
    QPushButton *pbClose;
    QWidget *widBottom;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QWidget *widget_9;
    QLineEdit *leServerIP;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QWidget *widget_11;
    QLineEdit *leServerPort;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbConfirm;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *STServerConfigClass)
    {
        if (STServerConfigClass->objectName().isEmpty())
            STServerConfigClass->setObjectName(QStringLiteral("STServerConfigClass"));
        STServerConfigClass->resize(350, 480);
        STServerConfigClass->setMinimumSize(QSize(350, 480));
        STServerConfigClass->setMaximumSize(QSize(350, 480));
        verticalLayout = new QVBoxLayout(STServerConfigClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTop = new QWidget(STServerConfigClass);
        widTop->setObjectName(QStringLiteral("widTop"));
        widTop->setMinimumSize(QSize(0, 45));
        widTop->setMaximumSize(QSize(16777215, 45));
        widTop->setStyleSheet(QLatin1String("\n"
"QWidget#widTop {background-color: #ffffff;border-top: 1px solid #e3e3e3;\n"
"border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;}"));
        horizontalLayout_10 = new QHBoxLayout(widTop);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(9, 0, 0, 0);
        pb2Login = new QPushButton(widTop);
        pb2Login->setObjectName(QStringLiteral("pb2Login"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pb2Login->setFont(font);
        pb2Login->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: #30ba78;\n"
"	font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	color: #6dcea0;\n"
"}"));
        pb2Login->setFlat(true);

        horizontalLayout_10->addWidget(pb2Login);

        horizontalSpacer_5 = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        widget_17 = new QWidget(widTop);
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
"	background-color: rgb(218, 218, 218);\n"
"}"));

        horizontalLayout_9->addWidget(pbMinimum);

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


        verticalLayout->addWidget(widTop);

        widBottom = new QWidget(STServerConfigClass);
        widBottom->setObjectName(QStringLiteral("widBottom"));
        widBottom->setStyleSheet(QLatin1String("QWidget#widBottom {background-color: #ffffff;border-bottom: 1px solid #e3e3e3;\n"
"border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;}"));
        verticalLayout_2 = new QVBoxLayout(widBottom);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(widBottom);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 10, 20, 5);
        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(0, 30));
        widget_8->setMaximumSize(QSize(16777215, 30));
        widget_8->setStyleSheet(QLatin1String("QWidget#widget_8{border: 0px;border-bottom: 1px solid #e3e3e3;}\n"
""));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget_8);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_7->addWidget(label);

        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setMinimumSize(QSize(10, 0));
        widget_9->setMaximumSize(QSize(10, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Arabic"));
        widget_9->setFont(font2);
        widget_9->setStyleSheet(QLatin1String("border: 0px;border-left: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_7->addWidget(widget_9);


        horizontalLayout->addWidget(widget_8);

        leServerIP = new QLineEdit(widget);
        leServerIP->setObjectName(QStringLiteral("leServerIP"));
        leServerIP->setMinimumSize(QSize(0, 30));
        leServerIP->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        leServerIP->setFont(font3);
        leServerIP->setStyleSheet(QLatin1String("color: rgb(67, 69, 85);border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leServerIP->setMaxLength(20);

        horizontalLayout->addWidget(leServerIP);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widBottom);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 10, 20, 5);
        widget_10 = new QWidget(widget_2);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMinimumSize(QSize(0, 30));
        widget_10->setMaximumSize(QSize(16777215, 30));
        widget_10->setStyleSheet(QLatin1String("QWidget#widget_10{border: 0px;border-bottom: 1px solid #e3e3e3;}\n"
""));
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(widget_10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_8->addWidget(label_2);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(10, 0));
        widget_11->setMaximumSize(QSize(10, 16777215));
        widget_11->setFont(font2);
        widget_11->setStyleSheet(QLatin1String("border: 0px;border-left: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_8->addWidget(widget_11);


        horizontalLayout_2->addWidget(widget_10);

        leServerPort = new QLineEdit(widget_2);
        leServerPort->setObjectName(QStringLiteral("leServerPort"));
        leServerPort->setMinimumSize(QSize(0, 30));
        leServerPort->setMaximumSize(QSize(16777215, 30));
        leServerPort->setFont(font3);
        leServerPort->setStyleSheet(QLatin1String("color: rgb(67, 69, 85);border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leServerPort->setMaxLength(20);

        horizontalLayout_2->addWidget(leServerPort);


        verticalLayout_2->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_5 = new QWidget(widBottom);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 0, 20, 0);
        pbConfirm = new QPushButton(widget_5);
        pbConfirm->setObjectName(QStringLiteral("pbConfirm"));
        pbConfirm->setMinimumSize(QSize(0, 35));
        pbConfirm->setMaximumSize(QSize(16777215, 35));
        pbConfirm->setFont(font3);
        pbConfirm->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(48, 186, 120);\n"
"}\n"
"QPushButton:hover:pressed {\n"
"	background-color: rgb(48, 186, 120);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	\n"
"	background-color: rgb(109, 206, 160);\n"
"}"));

        horizontalLayout_4->addWidget(pbConfirm);


        verticalLayout_2->addWidget(widget_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout->addWidget(widBottom);


        retranslateUi(STServerConfigClass);

        QMetaObject::connectSlotsByName(STServerConfigClass);
    } // setupUi

    void retranslateUi(QWidget *STServerConfigClass)
    {
        STServerConfigClass->setWindowTitle(QApplication::translate("STServerConfigClass", "STServerConfig", 0));
        pb2Login->setText(QApplication::translate("STServerConfigClass", "\357\271\244 \350\277\224 \345\233\236", 0));
        pbMinimum->setText(QString());
        pbClose->setText(QString());
        label->setText(QApplication::translate("STServerConfigClass", "\343\200\200\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\343\200\200", 0));
        label_2->setText(QApplication::translate("STServerConfigClass", "\343\200\200\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\343\200\200", 0));
        leServerPort->setText(QApplication::translate("STServerConfigClass", "5222", 0));
        pbConfirm->setText(QApplication::translate("STServerConfigClass", "\347\241\256\343\200\200\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class STServerConfigClass: public Ui_STServerConfigClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STSERVERCONFIG_H
