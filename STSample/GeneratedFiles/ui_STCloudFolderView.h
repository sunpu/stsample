/********************************************************************************
** Form generated from reading UI file 'STCloudFolderView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCLOUDFOLDERVIEW_H
#define UI_STCLOUDFOLDERVIEW_H

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
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STCloudFolderViewClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widTitle;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblTitle;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pbClose;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTreeView *tvFolder;
    QHBoxLayout *hblayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbOK;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *STCloudFolderViewClass)
    {
        if (STCloudFolderViewClass->objectName().isEmpty())
            STCloudFolderViewClass->setObjectName(QStringLiteral("STCloudFolderViewClass"));
        STCloudFolderViewClass->resize(400, 386);
        STCloudFolderViewClass->setStyleSheet(QStringLiteral("QDialog {background-color: #ffffff;border: 1px solid #e3e3e3;}"));
        verticalLayout = new QVBoxLayout(STCloudFolderViewClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widTitle = new QWidget(STCloudFolderViewClass);
        widTitle->setObjectName(QStringLiteral("widTitle"));
        widTitle->setMinimumSize(QSize(0, 35));
        widTitle->setMaximumSize(QSize(16777215, 35));
        widTitle->setStyleSheet(QStringLiteral("background-color: #434555;"));
        horizontalLayout_10 = new QHBoxLayout(widTitle);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(15, 0, 0, 0);
        lblTitle = new QLabel(widTitle);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(lblTitle);

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

        widget = new QWidget(STCloudFolderViewClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QWidget#widget{border-left: 1px solid #e3e3e3;\n"
"border-right: 1px solid #e3e3e3;}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 9, -1, 9);
        tvFolder = new QTreeView(widget);
        tvFolder->setObjectName(QStringLiteral("tvFolder"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tvFolder->setFont(font1);
        tvFolder->setStyleSheet(QString::fromUtf8("QTreeView {\n"
"color: rgb(67, 69, 85);\n"
"border: 1px solid #e3e3e3;\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    show-decoration-selected:0;\n"
"outline: 0px;\n"
"}\n"
"\n"
"QTreeView::item{\n"
" height:30px;\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"	border-image: url(:/STSample/Resources/images/branch2.png);\n"
"}\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"	border-image: url(:/STSample/Resources/images/branch.png);\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"	border-image: url(:/STSample/Resources/images/branch3.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"        border-image: none;\n"
"        image:  url(:/STSample/Resources/images/open.png);\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  {\n"
"        border-image: none;\n"
"        image: "
                        " url(:/STSample/Resources/images/fold.png);\n"
"}\n"
"\n"
"QTreeView::item:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(241, 241, 241), stop: 1 rgb(241, 241, 241));\n"
"    border: 1px solid rgb(241, 241, 241);\n"
"}\n"
"\n"
"QTreeView::item:selected {\n"
"    border: 1px solid rgb(241, 241, 241);\n"
"color: rgb(67, 69, 85);\n"
"font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QTreeView::item:selected:active{\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(241, 241, 241), stop: 1 rgb(241, 241, 241));\n"
"}\n"
"\n"
"QTreeView::item:selected:!active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(241, 241, 241), stop: 1 rgb(241, 241, 241));\n"
"}\n"
"\n"
"\n"
"QScrollBar::vertical\n"
"{\n"
"    width:4px;\n"
"    background:rgb(0,0,0,0%);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px;   /*\344\270\212\351\242\204\347\225\231\344\275\215\347\275\256*/\n"
"    padding-bottom:0px"
                        ";    /*\344\270\213\351\242\204\347\225\231\344\275\215\347\275\256*/\n"
"}\n"
"\n"
"/*\346\273\232\345\212\250\346\235\241\344\270\255\346\273\221\345\235\227\347\232\204\346\240\267\345\274\217*/\n"
"QScrollBar::handle::vertical\n"
"{\n"
"    width:4px;\n"
"    background:rgb(0,0,0,25%);\n"
"    border-radius:2px;\n"
"    min-height:20px;\n"
"}\n"
"\n"
"/*\351\274\240\346\240\207\350\247\246\345\217\212\346\273\221\345\235\227\346\240\267\345\274\217*/\n"
"QScrollBar::handle::vertical::hover\n"
"{\n"
"    width:5px;\n"
"    background:rgb(0,0,0,50%);\n"
"    border-radius:2px;\n"
"    min-height:20;\n"
"}\n"
"\n"
"/*\350\256\276\347\275\256\344\270\213\347\256\255\345\244\264*/\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    height:0px;\n"
"    subcontrol-position:bottom;\n"
"}\n"
"\n"
"/*\350\256\276\347\275\256\344\270\212\347\256\255\345\244\264*/\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    height:0px;\n"
"    subcontrol-position:top;\n"
"}\n"
"  "));
        tvFolder->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_2->addWidget(tvFolder);


        verticalLayout->addWidget(widget);

        hblayout = new QHBoxLayout();
        hblayout->setSpacing(50);
        hblayout->setObjectName(QStringLiteral("hblayout"));
        hblayout->setContentsMargins(10, 0, 10, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hblayout->addItem(horizontalSpacer_2);

        pbOK = new QPushButton(STCloudFolderViewClass);
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

        pbCancel = new QPushButton(STCloudFolderViewClass);
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


        retranslateUi(STCloudFolderViewClass);

        QMetaObject::connectSlotsByName(STCloudFolderViewClass);
    } // setupUi

    void retranslateUi(QDialog *STCloudFolderViewClass)
    {
        STCloudFolderViewClass->setWindowTitle(QApplication::translate("STCloudFolderViewClass", "STCloudFolderView", 0));
        lblTitle->setText(QString());
        pbClose->setText(QString());
        pbOK->setText(QApplication::translate("STCloudFolderViewClass", "\346\230\257", 0));
        pbCancel->setText(QApplication::translate("STCloudFolderViewClass", "\345\220\246", 0));
    } // retranslateUi

};

namespace Ui {
    class STCloudFolderViewClass: public Ui_STCloudFolderViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCLOUDFOLDERVIEW_H
