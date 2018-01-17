/********************************************************************************
** Form generated from reading UI file 'STConfirm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCONFIRM_H
#define UI_STCONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STConfirmClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widTitle;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pbClose;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblText;
    QHBoxLayout *hblayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *STConfirmClass)
    {
        if (STConfirmClass->objectName().isEmpty())
            STConfirmClass->setObjectName(QStringLiteral("STConfirmClass"));
        STConfirmClass->resize(360, 150);
        STConfirmClass->setMinimumSize(QSize(360, 150));
        STConfirmClass->setMaximumSize(QSize(360, 150));
        STConfirmClass->setStyleSheet(QStringLiteral("QDialog {background-color: #ffffff;border: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(STConfirmClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(STConfirmClass);
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


        verticalLayout->addWidget(widTitle);

        widget = new QWidget(STConfirmClass);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 9, -1, 9);
        lblText = new QLabel(widget);
        lblText->setObjectName(QStringLiteral("lblText"));
        lblText->setMinimumSize(QSize(0, 50));
        lblText->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        lblText->setFont(font1);
        lblText->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));
        lblText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblText);


        verticalLayout->addWidget(widget);

        hblayout = new QHBoxLayout();
        hblayout->setSpacing(50);
        hblayout->setObjectName(QStringLiteral("hblayout"));
        hblayout->setContentsMargins(10, 0, 10, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_2);

        pbOK = new QPushButton(STConfirmClass);
        pbOK->setObjectName(QStringLiteral("pbOK"));
        pbOK->setMinimumSize(QSize(65, 25));
        pbOK->setMaximumSize(QSize(65, 25));
        pbOK->setFont(font);
        pbOK->setStyleSheet(QLatin1String("\n"
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

        hblayout->addWidget(pbOK);

        pbCancel = new QPushButton(STConfirmClass);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setMinimumSize(QSize(65, 25));
        pbCancel->setMaximumSize(QSize(65, 25));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 103, 65);\n"
"}\n"
"QPushButton:hover:pressed {\n"
"	background-color: rgb(255, 103, 65);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	background-color: rgb(255, 133, 103);\n"
"}"));

        hblayout->addWidget(pbCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(hblayout);


        retranslateUi(STConfirmClass);

        QMetaObject::connectSlotsByName(STConfirmClass);
    } // setupUi

    void retranslateUi(QDialog *STConfirmClass)
    {
        STConfirmClass->setWindowTitle(QApplication::translate("STConfirmClass", "STConfirm", 0));
        label_3->setText(QApplication::translate("STConfirmClass", "\346\217\220\347\244\272", 0));
        pbClose->setText(QString());
        lblText->setText(QApplication::translate("STConfirmClass", "\347\241\256\350\256\244\351\200\200\345\207\272\345\220\227\357\274\237", 0));
        pbOK->setText(QApplication::translate("STConfirmClass", "\346\230\257", 0));
        pbCancel->setText(QApplication::translate("STConfirmClass", "\345\220\246", 0));
    } // retranslateUi

};

namespace Ui {
    class STConfirmClass: public Ui_STConfirmClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCONFIRM_H
