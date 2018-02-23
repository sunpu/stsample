/********************************************************************************
** Form generated from reading UI file 'STCloudNewFolder.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCLOUDNEWFOLDER_H
#define UI_STCLOUDNEWFOLDER_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STCloudNewFolderClass
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
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *leFolderName;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *hblayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *STCloudNewFolderClass)
    {
        if (STCloudNewFolderClass->objectName().isEmpty())
            STCloudNewFolderClass->setObjectName(QStringLiteral("STCloudNewFolderClass"));
        STCloudNewFolderClass->resize(350, 150);
        STCloudNewFolderClass->setMinimumSize(QSize(350, 150));
        STCloudNewFolderClass->setMaximumSize(QSize(350, 150));
        STCloudNewFolderClass->setStyleSheet(QStringLiteral("QDialog {background-color: #ffffff;border: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(STCloudNewFolderClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(STCloudNewFolderClass);
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

        widget = new QWidget(STCloudNewFolderClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QWidget#widget{border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 9, -1, 9);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        leFolderName = new QLineEdit(widget_2);
        leFolderName->setObjectName(QStringLiteral("leFolderName"));
        leFolderName->setMinimumSize(QSize(200, 30));
        leFolderName->setMaximumSize(QSize(200, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        leFolderName->setFont(font1);
        leFolderName->setStyleSheet(QLatin1String("color: rgb(67, 69, 85);border: 0px;border-bottom: 1px solid #e3e3e3;\n"
""));

        horizontalLayout->addWidget(leFolderName);

        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        hblayout = new QHBoxLayout();
        hblayout->setSpacing(50);
        hblayout->setObjectName(QStringLiteral("hblayout"));
        hblayout->setContentsMargins(10, 0, 10, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_2);

        pbOK = new QPushButton(STCloudNewFolderClass);
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

        pbCancel = new QPushButton(STCloudNewFolderClass);
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


        retranslateUi(STCloudNewFolderClass);

        QMetaObject::connectSlotsByName(STCloudNewFolderClass);
    } // setupUi

    void retranslateUi(QDialog *STCloudNewFolderClass)
    {
        STCloudNewFolderClass->setWindowTitle(QApplication::translate("STCloudNewFolderClass", "STCloudNewFolder", 0));
        label_3->setText(QApplication::translate("STCloudNewFolderClass", "\350\276\223\345\205\245\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271\345\220\215", 0));
        pbClose->setText(QString());
        leFolderName->setText(QString());
        pbOK->setText(QApplication::translate("STCloudNewFolderClass", "\346\230\257", 0));
        pbCancel->setText(QApplication::translate("STCloudNewFolderClass", "\345\220\246", 0));
    } // retranslateUi

};

namespace Ui {
    class STCloudNewFolderClass: public Ui_STCloudNewFolderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCLOUDNEWFOLDER_H
