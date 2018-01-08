/********************************************************************************
** Form generated from reading UI file 'STUploadPic.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUPLOADPIC_H
#define UI_STUPLOADPIC_H

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
#include <masklabel.h>

QT_BEGIN_NAMESPACE

class Ui_STUploadPicClass
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
    QSpacerItem *horizontalSpacer;
    QPushButton *pbUpload;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    MaskLabel *lblPic;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hblayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *STUploadPicClass)
    {
        if (STUploadPicClass->objectName().isEmpty())
            STUploadPicClass->setObjectName(QStringLiteral("STUploadPicClass"));
        STUploadPicClass->resize(320, 420);
        STUploadPicClass->setMinimumSize(QSize(320, 420));
        STUploadPicClass->setMaximumSize(QSize(320, 420));
        STUploadPicClass->setStyleSheet(QStringLiteral("QDialog {background-color: #ffffff;border: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(STUploadPicClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(STUploadPicClass);
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

        widget = new QWidget(STUploadPicClass);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 40, -1, 40);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbUpload = new QPushButton(widget_2);
        pbUpload->setObjectName(QStringLiteral("pbUpload"));
        pbUpload->setMinimumSize(QSize(120, 30));
        pbUpload->setMaximumSize(QSize(120, 30));
        QFont font1;
        font1.setPointSize(10);
        pbUpload->setFont(font1);
        pbUpload->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"}\n"
"QPushButton:hover {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));
        pbUpload->setFlat(false);

        horizontalLayout->addWidget(pbUpload);

        horizontalSpacer_2 = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(8);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(181, 181, 181);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("border: 0px;border-bottom: 1px solid #e3e3e3;"));

        verticalLayout_2->addWidget(label_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("border:1px"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        lblPic = new MaskLabel(widget_3);
        lblPic->setObjectName(QStringLiteral("lblPic"));
        lblPic->setMinimumSize(QSize(80, 80));
        lblPic->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(lblPic);

        horizontalSpacer_6 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(widget);

        hblayout = new QHBoxLayout();
        hblayout->setSpacing(50);
        hblayout->setObjectName(QStringLiteral("hblayout"));
        hblayout->setContentsMargins(10, 10, 10, 20);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_8);

        pbOK = new QPushButton(STUploadPicClass);
        pbOK->setObjectName(QStringLiteral("pbOK"));
        pbOK->setMinimumSize(QSize(65, 25));
        pbOK->setMaximumSize(QSize(65, 25));
        pbOK->setFont(font);
        pbOK->setStyleSheet(QLatin1String("\n"
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

        hblayout->addWidget(pbOK);

        pbCancel = new QPushButton(STUploadPicClass);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setMinimumSize(QSize(65, 25));
        pbCancel->setMaximumSize(QSize(65, 25));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/STSample/Resources/images/red.png);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/red_focus.png);\n"
"}"));

        hblayout->addWidget(pbCancel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(hblayout);


        retranslateUi(STUploadPicClass);
        QObject::connect(pbOK, SIGNAL(clicked()), STUploadPicClass, SLOT(accept()));
        QObject::connect(pbCancel, SIGNAL(clicked()), STUploadPicClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(STUploadPicClass);
    } // setupUi

    void retranslateUi(QDialog *STUploadPicClass)
    {
        STUploadPicClass->setWindowTitle(QApplication::translate("STUploadPicClass", "STUploadPic", 0));
        label_3->setText(QApplication::translate("STUploadPicClass", "\345\244\264\345\203\217\350\256\276\347\275\256", 0));
        pbClose->setText(QString());
        pbUpload->setText(QApplication::translate("STUploadPicClass", "\344\270\212\344\274\240\346\234\254\345\234\260\345\233\276\347\211\207", 0));
        label_4->setText(QApplication::translate("STUploadPicClass", "\350\257\267\344\270\212\344\274\240JPEG\343\200\201PNG\346\240\274\345\274\217\347\232\204\345\233\276\347\211\207\357\274\214\346\226\207\344\273\266\345\244\247\345\260\217\346\216\247\345\210\266\345\234\2502M\344\273\245\345\206\205\343\200\202", 0));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("STUploadPicClass", "\345\244\264\345\203\217\351\242\204\350\247\210", 0));
        lblPic->setText(QString());
        pbOK->setText(QApplication::translate("STUploadPicClass", "\347\241\256\343\200\200\345\256\232", 0));
        pbCancel->setText(QApplication::translate("STUploadPicClass", "\345\217\226\343\200\200\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class STUploadPicClass: public Ui_STUploadPicClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUPLOADPIC_H
