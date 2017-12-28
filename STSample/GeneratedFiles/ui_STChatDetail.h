/********************************************************************************
** Form generated from reading UI file 'STChatDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCHATDETAIL_H
#define UI_STCHATDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STChatDetailClass
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *spChatDetail;
    QWidget *widTop;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *lwChatRecordList;
    QWidget *widBottom;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbEmotion;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pbScreenShot;
    QPushButton *pbScreenShotOption;
    QPushButton *pbLesson;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widChatWrite;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *teChatWrite;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbSendMessage;

    void setupUi(QWidget *STChatDetailClass)
    {
        if (STChatDetailClass->objectName().isEmpty())
            STChatDetailClass->setObjectName(QStringLiteral("STChatDetailClass"));
        STChatDetailClass->resize(730, 590);
        verticalLayout = new QVBoxLayout(STChatDetailClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        spChatDetail = new QSplitter(STChatDetailClass);
        spChatDetail->setObjectName(QStringLiteral("spChatDetail"));
        spChatDetail->setStyleSheet(QString::fromUtf8("QSplitter#spChatDetail::handle {width:1;background-color:#e3e3e3; }\n"
"\n"
"\n"
"\n"
"QScrollBar::vertical\n"
"{\n"
"    width:4px;\n"
"    background:rgb(0,0,0,0%);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:0px;   /*\344\270\212\351\242\204\347\225\231\344\275\215\347\275\256*/\n"
"    padding-bottom:0px;    /*\344\270\213\351\242\204\347\225\231\344\275\215\347\275\256*/\n"
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
"QScrollBar::add"
                        "-line:vertical\n"
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
"}"));
        spChatDetail->setLineWidth(1);
        spChatDetail->setOrientation(Qt::Vertical);
        spChatDetail->setChildrenCollapsible(false);
        widTop = new QWidget(spChatDetail);
        widTop->setObjectName(QStringLiteral("widTop"));
        widTop->setStyleSheet(QStringLiteral("QWidget#widTop{border-top: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);}"));
        horizontalLayout_6 = new QHBoxLayout(widTop);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lwChatRecordList = new QListWidget(widTop);
        lwChatRecordList->setObjectName(QStringLiteral("lwChatRecordList"));
        lwChatRecordList->setFocusPolicy(Qt::NoFocus);
        lwChatRecordList->setStyleSheet(QStringLiteral("QListWidget {border:0px;}"));
        lwChatRecordList->setProperty("showDropIndicator", QVariant(true));
        lwChatRecordList->setAlternatingRowColors(false);
        lwChatRecordList->setSelectionMode(QAbstractItemView::NoSelection);
        lwChatRecordList->setSelectionBehavior(QAbstractItemView::SelectItems);
        lwChatRecordList->setSelectionRectVisible(false);

        horizontalLayout_6->addWidget(lwChatRecordList);

        spChatDetail->addWidget(widTop);
        widBottom = new QWidget(spChatDetail);
        widBottom->setObjectName(QStringLiteral("widBottom"));
        widBottom->setMaximumSize(QSize(16777215, 280));
        widBottom->setStyleSheet(QStringLiteral("QWidget#widBottom{border-top: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);}"));
        verticalLayout_2 = new QVBoxLayout(widBottom);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widBottom);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 40));
        widget_3->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pbEmotion = new QPushButton(widget_6);
        pbEmotion->setObjectName(QStringLiteral("pbEmotion"));
        pbEmotion->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/emotion.png);\n"
"	width: 20;\n"
"	height: 20;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/emotion_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/emotion_focus.png);\n"
"}"));

        horizontalLayout_2->addWidget(pbEmotion);


        horizontalLayout->addWidget(widget_6);

        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pbScreenShot = new QPushButton(widget);
        pbScreenShot->setObjectName(QStringLiteral("pbScreenShot"));
        pbScreenShot->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/screenshot.png);\n"
"	width: 20;\n"
"	height: 20;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/screenshot_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/screenshot_focus.png);\n"
"}"));

        horizontalLayout_7->addWidget(pbScreenShot);

        pbScreenShotOption = new QPushButton(widget);
        pbScreenShotOption->setObjectName(QStringLiteral("pbScreenShotOption"));
        pbScreenShotOption->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/triangle.png);\n"
"	width: 10;\n"
"	height: 10;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/triangle_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/triangle_focus.png);\n"
"}"));

        horizontalLayout_7->addWidget(pbScreenShotOption);


        horizontalLayout->addWidget(widget);

        pbLesson = new QPushButton(widget_3);
        pbLesson->setObjectName(QStringLiteral("pbLesson"));
        pbLesson->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-image: url(:/STSample/Resources/images/lesson.png);\n"
"	width: 20;\n"
"	height: 20;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/lesson_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/lesson_focus.png);\n"
"}"));

        horizontalLayout->addWidget(pbLesson);

        horizontalSpacer = new QSpacerItem(557, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

        horizontalLayout->addWidget(widget_7);


        verticalLayout_2->addWidget(widget_3);

        widChatWrite = new QWidget(widBottom);
        widChatWrite->setObjectName(QStringLiteral("widChatWrite"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widChatWrite->sizePolicy().hasHeightForWidth());
        widChatWrite->setSizePolicy(sizePolicy);
        widChatWrite->setMinimumSize(QSize(0, 80));
        widChatWrite->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_5 = new QHBoxLayout(widChatWrite);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        teChatWrite = new QTextEdit(widChatWrite);
        teChatWrite->setObjectName(QStringLiteral("teChatWrite"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(11);
        teChatWrite->setFont(font);
        teChatWrite->setFocusPolicy(Qt::StrongFocus);
        teChatWrite->setAutoFillBackground(false);
        teChatWrite->setStyleSheet(QStringLiteral(""));
        teChatWrite->setFrameShape(QFrame::NoFrame);
        teChatWrite->setFrameShadow(QFrame::Plain);
        teChatWrite->setLineWidth(1);
        teChatWrite->setAcceptRichText(true);

        horizontalLayout_5->addWidget(teChatWrite);


        verticalLayout_2->addWidget(widChatWrite);

        widget_5 = new QWidget(widBottom);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(0, 40));
        widget_5->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 10, 0);
        horizontalSpacer_2 = new QSpacerItem(585, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pbSendMessage = new QPushButton(widget_5);
        pbSendMessage->setObjectName(QStringLiteral("pbSendMessage"));
        pbSendMessage->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-image: url(:/STSample/Resources/images/green.png);\n"
"	width: 60;\n"
"	height: 20;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}\n"
"QPushButton:hover:pressed{\n"
"	border-image: url(:/STSample/Resources/images/green_focus.png);\n"
"}"));

        horizontalLayout_4->addWidget(pbSendMessage);


        verticalLayout_2->addWidget(widget_5);

        spChatDetail->addWidget(widBottom);

        verticalLayout->addWidget(spChatDetail);

        QWidget::setTabOrder(teChatWrite, pbSendMessage);
        QWidget::setTabOrder(pbSendMessage, pbEmotion);
        QWidget::setTabOrder(pbEmotion, pbScreenShot);
        QWidget::setTabOrder(pbScreenShot, pbScreenShotOption);
        QWidget::setTabOrder(pbScreenShotOption, pbLesson);

        retranslateUi(STChatDetailClass);

        QMetaObject::connectSlotsByName(STChatDetailClass);
    } // setupUi

    void retranslateUi(QWidget *STChatDetailClass)
    {
        STChatDetailClass->setWindowTitle(QApplication::translate("STChatDetailClass", "STChatDetail", 0));
        pbEmotion->setText(QString());
        pbScreenShot->setText(QString());
        pbScreenShotOption->setText(QString());
        pbLesson->setText(QString());
        teChatWrite->setHtml(QApplication::translate("STChatDetailClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221 Light'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3</p></body></html>", 0));
        pbSendMessage->setText(QApplication::translate("STChatDetailClass", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class STChatDetailClass: public Ui_STChatDetailClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCHATDETAIL_H
