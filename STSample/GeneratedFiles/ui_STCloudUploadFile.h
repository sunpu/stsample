/********************************************************************************
** Form generated from reading UI file 'STCloudUploadFile.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCLOUDUPLOADFILE_H
#define UI_STCLOUDUPLOADFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STCloudUploadFileClass
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
    QStackedWidget *swUpload;
    QWidget *pageInit;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widUpload;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbUpload;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageUpload;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QProgressBar *pbUploadStatus;
    QWidget *widButton;
    QHBoxLayout *hblayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pbGoon;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *STCloudUploadFileClass)
    {
        if (STCloudUploadFileClass->objectName().isEmpty())
            STCloudUploadFileClass->setObjectName(QStringLiteral("STCloudUploadFileClass"));
        STCloudUploadFileClass->resize(360, 160);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(STCloudUploadFileClass->sizePolicy().hasHeightForWidth());
        STCloudUploadFileClass->setSizePolicy(sizePolicy);
        STCloudUploadFileClass->setMinimumSize(QSize(360, 160));
        STCloudUploadFileClass->setMaximumSize(QSize(360, 160));
        STCloudUploadFileClass->setStyleSheet(QStringLiteral("QDialog {background-color: #ffffff;border: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(STCloudUploadFileClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(STCloudUploadFileClass);
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

        swUpload = new QStackedWidget(STCloudUploadFileClass);
        swUpload->setObjectName(QStringLiteral("swUpload"));
        pageInit = new QWidget();
        pageInit->setObjectName(QStringLiteral("pageInit"));
        pageInit->setStyleSheet(QLatin1String("QWidget#pageInit{border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;border-bottom: 1px solid #e3e3e3;}"));
        verticalLayout_3 = new QVBoxLayout(pageInit);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 0, 1, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widUpload = new QWidget(pageInit);
        widUpload->setObjectName(QStringLiteral("widUpload"));
        horizontalLayout = new QHBoxLayout(widUpload);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, -1, 9);
        horizontalSpacer = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbUpload = new QPushButton(widUpload);
        pbUpload->setObjectName(QStringLiteral("pbUpload"));
        pbUpload->setMinimumSize(QSize(120, 30));
        pbUpload->setMaximumSize(QSize(120, 30));
        pbUpload->setFont(font);
        pbUpload->setStyleSheet(QLatin1String("\n"
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
        pbUpload->setFlat(false);

        horizontalLayout->addWidget(pbUpload);

        horizontalSpacer_2 = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widUpload);

        label = new QLabel(pageInit);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(181, 181, 181);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        swUpload->addWidget(pageInit);
        pageUpload = new QWidget();
        pageUpload->setObjectName(QStringLiteral("pageUpload"));
        pageUpload->setStyleSheet(QLatin1String("QWidget#pageUpload{border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;border-bottom: 1px solid #e3e3e3;}"));
        verticalLayout_4 = new QVBoxLayout(pageUpload);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 0, 30, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        pbUploadStatus = new QProgressBar(pageUpload);
        pbUploadStatus->setObjectName(QStringLiteral("pbUploadStatus"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pbUploadStatus->setFont(font2);
        pbUploadStatus->setStyleSheet(QLatin1String("QProgressBar {   border: 0px solid  #e3e3e3;   border-radius: 5px;  \n"
"    background-color: rgb(216, 216, 216);color: #ffffff;}\n"
"\n"
"QProgressBar::chunk {   \n"
"	background-color: rgb(48, 186, 120); border-radius: 5px;   }"));
        pbUploadStatus->setValue(0);
        pbUploadStatus->setAlignment(Qt::AlignCenter);
        pbUploadStatus->setTextVisible(true);

        verticalLayout_4->addWidget(pbUploadStatus);

        widButton = new QWidget(pageUpload);
        widButton->setObjectName(QStringLiteral("widButton"));
        widButton->setStyleSheet(QStringLiteral(""));
        hblayout = new QHBoxLayout(widButton);
        hblayout->setSpacing(50);
        hblayout->setObjectName(QStringLiteral("hblayout"));
        hblayout->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_8);

        pbGoon = new QPushButton(widButton);
        pbGoon->setObjectName(QStringLiteral("pbGoon"));
        pbGoon->setMinimumSize(QSize(65, 25));
        pbGoon->setMaximumSize(QSize(65, 25));
        pbGoon->setFont(font);
        pbGoon->setStyleSheet(QLatin1String("\n"
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

        hblayout->addWidget(pbGoon);

        pbOK = new QPushButton(widButton);
        pbOK->setObjectName(QStringLiteral("pbOK"));
        pbOK->setMinimumSize(QSize(65, 25));
        pbOK->setMaximumSize(QSize(65, 25));
        pbOK->setFont(font);
        pbOK->setStyleSheet(QLatin1String("\n"
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

        hblayout->addWidget(pbOK);

        pbCancel = new QPushButton(widButton);
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

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_7);


        verticalLayout_4->addWidget(widButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        swUpload->addWidget(pageUpload);

        verticalLayout->addWidget(swUpload);

        widget = new QWidget(STCloudUploadFileClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QWidget#widget{border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);

        verticalLayout->addWidget(widget);

        widget->raise();
        widTitle->raise();
        pbCancel->raise();
        swUpload->raise();

        retranslateUi(STCloudUploadFileClass);

        swUpload->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(STCloudUploadFileClass);
    } // setupUi

    void retranslateUi(QDialog *STCloudUploadFileClass)
    {
        STCloudUploadFileClass->setWindowTitle(QApplication::translate("STCloudUploadFileClass", "STCloudUploadFile", 0));
        label_3->setText(QApplication::translate("STCloudUploadFileClass", "\346\226\207\344\273\266\344\270\212\344\274\240", 0));
        pbClose->setText(QString());
        pbUpload->setText(QApplication::translate("STCloudUploadFileClass", "\344\270\212\344\274\240\346\234\254\345\234\260\346\226\207\344\273\266", 0));
        label->setText(QApplication::translate("STCloudUploadFileClass", "\343\200\200\350\257\267\351\200\211\346\213\251\346\234\254\345\234\260\346\226\207\344\273\266\350\277\233\350\241\214\344\270\212\344\274\240\343\200\202", 0));
        pbGoon->setText(QApplication::translate("STCloudUploadFileClass", "\347\273\247\347\273\255\344\270\212\344\274\240", 0));
        pbOK->setText(QApplication::translate("STCloudUploadFileClass", "\347\273\223\346\235\237\344\270\212\344\274\240", 0));
        pbCancel->setText(QApplication::translate("STCloudUploadFileClass", "\345\217\226\343\200\200\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class STCloudUploadFileClass: public Ui_STCloudUploadFileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCLOUDUPLOADFILE_H
