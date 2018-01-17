/********************************************************************************
** Form generated from reading UI file 'STSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STSETTING_H
#define UI_STSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STSettingClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widTitle;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pbClose;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *twServer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QWidget *widget_9;
    QLineEdit *leServerIP;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbConfirm;
    QSpacerItem *verticalSpacer_3;
    QWidget *twOther;
    QVBoxLayout *verticalLayout_4;

    void setupUi(QDialog *STSettingClass)
    {
        if (STSettingClass->objectName().isEmpty())
            STSettingClass->setObjectName(QStringLiteral("STSettingClass"));
        STSettingClass->resize(350, 480);
        STSettingClass->setMinimumSize(QSize(350, 480));
        STSettingClass->setMaximumSize(QSize(350, 480));
        STSettingClass->setStyleSheet(QLatin1String("QDialog{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(STSettingClass);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(STSettingClass);
        widTitle->setObjectName(QStringLiteral("widTitle"));
        widTitle->setMinimumSize(QSize(0, 35));
        widTitle->setMaximumSize(QSize(16777215, 35));
        widTitle->setStyleSheet(QStringLiteral("background-color: #434555;"));
        horizontalLayout_10 = new QHBoxLayout(widTitle);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(15, 0, 0, 0);
        label_3 = new QLabel(widTitle);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        widget_17 = new QWidget(widTitle);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_9 = new QHBoxLayout(widget_17);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, 0);
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


        verticalLayout_3->addWidget(widTitle);

        widget_2 = new QWidget(STSettingClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("QWidget#widget_2{border-bottom: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 1, 1);
        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        tabWidget->setFont(font1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{background-color: #ffffff;}\n"
"QTabWidget::pane{border:0px;}\n"
"\n"
"/*QTabWidget::tab-bar{alignment:center;}*/\n"
"\n"
"#tabWidget QTabBar::tab\n"
"{\n"
"    min-width: 75px;\n"
"    min-height: 28px;\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
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
        twServer = new QWidget();
        twServer->setObjectName(QStringLiteral("twServer"));
        verticalLayout_2 = new QVBoxLayout(twServer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(twServer);
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
        label->setFont(font);
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
        leServerIP->setFont(font1);
        leServerIP->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leServerIP->setMaxLength(20);

        horizontalLayout->addWidget(leServerIP);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_5 = new QWidget(twServer);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 0, 20, 0);
        pbConfirm = new QPushButton(widget_5);
        pbConfirm->setObjectName(QStringLiteral("pbConfirm"));
        pbConfirm->setMinimumSize(QSize(0, 35));
        pbConfirm->setMaximumSize(QSize(16777215, 35));
        pbConfirm->setFont(font1);
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

        verticalSpacer_3 = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        tabWidget->addTab(twServer, QString());
        twOther = new QWidget();
        twOther->setObjectName(QStringLiteral("twOther"));
        verticalLayout_4 = new QVBoxLayout(twOther);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 30, -1, -1);
        tabWidget->addTab(twOther, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_3->addWidget(widget_2);


        retranslateUi(STSettingClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(STSettingClass);
    } // setupUi

    void retranslateUi(QDialog *STSettingClass)
    {
        STSettingClass->setWindowTitle(QApplication::translate("STSettingClass", "STSetting", 0));
        label_3->setText(QApplication::translate("STSettingClass", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        pbClose->setText(QString());
        label->setText(QApplication::translate("STSettingClass", "\343\200\200\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\343\200\200", 0));
        pbConfirm->setText(QApplication::translate("STSettingClass", "\347\241\256\343\200\200\345\256\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(twServer), QApplication::translate("STSettingClass", "\346\234\215\345\212\241\345\231\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(twOther), QApplication::translate("STSettingClass", "\345\205\266\344\273\226", 0));
    } // retranslateUi

};

namespace Ui {
    class STSettingClass: public Ui_STSettingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STSETTING_H
