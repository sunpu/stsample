/********************************************************************************
** Form generated from reading UI file 'STRegist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREGIST_H
#define UI_STREGIST_H

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

class Ui_STRegistClass
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
    QLineEdit *leUserName;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QWidget *widget_11;
    QLineEdit *lePasswd;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QWidget *widget_13;
    QLineEdit *lePasswdVerify;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbRegist;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *STRegistClass)
    {
        if (STRegistClass->objectName().isEmpty())
            STRegistClass->setObjectName(QStringLiteral("STRegistClass"));
        STRegistClass->resize(350, 480);
        STRegistClass->setMinimumSize(QSize(350, 480));
        STRegistClass->setMaximumSize(QSize(350, 480));
        verticalLayout = new QVBoxLayout(STRegistClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTop = new QWidget(STRegistClass);
        widTop->setObjectName(QStringLiteral("widTop"));
        widTop->setMinimumSize(QSize(0, 45));
        widTop->setMaximumSize(QSize(16777215, 45));
        widTop->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
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

        widBottom = new QWidget(STRegistClass);
        widBottom->setObjectName(QStringLiteral("widBottom"));
        widBottom->setStyleSheet(QStringLiteral("QWidget#widBottom {background-color: #ffffff;}"));
        verticalLayout_2 = new QVBoxLayout(widBottom);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
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
        label->setStyleSheet(QStringLiteral(""));

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

        leUserName = new QLineEdit(widget);
        leUserName->setObjectName(QStringLiteral("leUserName"));
        leUserName->setMinimumSize(QSize(0, 30));
        leUserName->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        leUserName->setFont(font3);
        leUserName->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        leUserName->setMaxLength(20);

        horizontalLayout->addWidget(leUserName);


        verticalLayout_2->addWidget(widget);

        widget_3 = new QWidget(widBottom);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 5, 20, 5);
        widget_10 = new QWidget(widget_3);
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

        horizontalLayout_8->addWidget(label_2);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(10, 0));
        widget_11->setMaximumSize(QSize(10, 16777215));
        widget_11->setStyleSheet(QLatin1String("border: 0px;border-left: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_8->addWidget(widget_11);


        horizontalLayout_2->addWidget(widget_10);

        lePasswd = new QLineEdit(widget_3);
        lePasswd->setObjectName(QStringLiteral("lePasswd"));
        lePasswd->setMinimumSize(QSize(0, 30));
        lePasswd->setMaximumSize(QSize(16777215, 30));
        lePasswd->setFont(font3);
        lePasswd->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        lePasswd->setMaxLength(20);
        lePasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lePasswd);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widBottom);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 5, 20, 5);
        widget_12 = new QWidget(widget_4);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setMinimumSize(QSize(0, 30));
        widget_12->setMaximumSize(QSize(16777215, 30));
        widget_12->setStyleSheet(QLatin1String("QWidget#widget_12{border: 0px;border-bottom: 1px solid #e3e3e3;}\n"
""));
        horizontalLayout_11 = new QHBoxLayout(widget_12);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(widget_12);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_11->addWidget(label_4);

        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setMinimumSize(QSize(10, 0));
        widget_13->setMaximumSize(QSize(10, 16777215));
        widget_13->setStyleSheet(QLatin1String("border: 0px;border-left: 1px solid #e3e3e3;\n"
""));

        horizontalLayout_11->addWidget(widget_13);


        horizontalLayout_3->addWidget(widget_12);

        lePasswdVerify = new QLineEdit(widget_4);
        lePasswdVerify->setObjectName(QStringLiteral("lePasswdVerify"));
        lePasswdVerify->setMinimumSize(QSize(0, 30));
        lePasswdVerify->setMaximumSize(QSize(16777215, 30));
        lePasswdVerify->setFont(font3);
        lePasswdVerify->setStyleSheet(QLatin1String("border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));
        lePasswdVerify->setMaxLength(20);
        lePasswdVerify->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lePasswdVerify);


        verticalLayout_2->addWidget(widget_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_5 = new QWidget(widBottom);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 0, 20, 0);
        pbRegist = new QPushButton(widget_5);
        pbRegist->setObjectName(QStringLiteral("pbRegist"));
        pbRegist->setMinimumSize(QSize(0, 35));
        pbRegist->setMaximumSize(QSize(16777215, 35));
        pbRegist->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	font:11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));

        horizontalLayout_4->addWidget(pbRegist);


        verticalLayout_2->addWidget(widget_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout->addWidget(widBottom);

        QWidget::setTabOrder(leUserName, lePasswd);
        QWidget::setTabOrder(lePasswd, lePasswdVerify);
        QWidget::setTabOrder(lePasswdVerify, pbRegist);
        QWidget::setTabOrder(pbRegist, pb2Login);
        QWidget::setTabOrder(pb2Login, pbMinimum);
        QWidget::setTabOrder(pbMinimum, pbClose);

        retranslateUi(STRegistClass);

        QMetaObject::connectSlotsByName(STRegistClass);
    } // setupUi

    void retranslateUi(QWidget *STRegistClass)
    {
        STRegistClass->setWindowTitle(QApplication::translate("STRegistClass", "STRegist", 0));
        pb2Login->setText(QApplication::translate("STRegistClass", "\357\271\244 \350\277\224 \345\233\236", 0));
        pbMinimum->setText(QString());
        pbClose->setText(QString());
        label->setText(QApplication::translate("STRegistClass", "\343\200\200\350\264\246\343\200\200\343\200\200\345\217\267\343\200\200", 0));
        label_2->setText(QApplication::translate("STRegistClass", "\343\200\200\345\257\206\343\200\200\343\200\200\347\240\201\343\200\200", 0));
        label_4->setText(QApplication::translate("STRegistClass", "\343\200\200\345\257\206\347\240\201\347\241\256\350\256\244\343\200\200", 0));
        pbRegist->setText(QApplication::translate("STRegistClass", "\346\263\250\343\200\200\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class STRegistClass: public Ui_STRegistClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREGIST_H
