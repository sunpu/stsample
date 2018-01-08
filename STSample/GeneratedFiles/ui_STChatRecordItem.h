/********************************************************************************
** Form generated from reading UI file 'STChatRecordItem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCHATRECORDITEM_H
#define UI_STCHATRECORDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <masklabel.h>

QT_BEGIN_NAMESPACE

class Ui_STChatRecordItemClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTime;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    MaskLabel *lblChatRecordPicOther;
    QSpacerItem *verticalSpacer;
    QTextEdit *teMessageOther;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *teMessageSelf;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    MaskLabel *lblChatRecordPicSelf;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *STChatRecordItemClass)
    {
        if (STChatRecordItemClass->objectName().isEmpty())
            STChatRecordItemClass->setObjectName(QStringLiteral("STChatRecordItemClass"));
        STChatRecordItemClass->resize(653, 123);
        verticalLayout = new QVBoxLayout(STChatRecordItemClass);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblTime = new QLabel(STChatRecordItemClass);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setMinimumSize(QSize(0, 20));
        lblTime->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lblTime->setFont(font);
        lblTime->setStyleSheet(QStringLiteral("color: gray;"));
        lblTime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblTime);

        widget = new QWidget(STChatRecordItemClass);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblChatRecordPicOther = new MaskLabel(widget_2);
        lblChatRecordPicOther->setObjectName(QStringLiteral("lblChatRecordPicOther"));
        lblChatRecordPicOther->setMinimumSize(QSize(30, 30));
        lblChatRecordPicOther->setMaximumSize(QSize(30, 30));
        lblChatRecordPicOther->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(lblChatRecordPicOther);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_2);

        teMessageOther = new QTextEdit(widget_3);
        teMessageOther->setObjectName(QStringLiteral("teMessageOther"));
        teMessageOther->setMaximumSize(QSize(207, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        teMessageOther->setFont(font1);
        teMessageOther->setStyleSheet(QLatin1String("QTextEdit {\n"
"	border-radius: 3px;\n"
"    border-image: url(:/STSample/Resources/images/bubble_left.png);  /* The border image                    */\n"
"    border-top-width: 2px;\n"
"    border-right-width: 5px;\n"
"    border-bottom-width:2px;\n"
"    border-left-width: 5px;\n"
"	color: rgb(67, 69, 85);\n"
"}"));
        teMessageOther->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teMessageOther->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teMessageOther->setReadOnly(true);
        teMessageOther->setAcceptRichText(false);

        horizontalLayout_2->addWidget(teMessageOther);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        horizontalLayout->addWidget(widget_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        teMessageSelf = new QTextEdit(widget_4);
        teMessageSelf->setObjectName(QStringLiteral("teMessageSelf"));
        teMessageSelf->setMaximumSize(QSize(207, 16777215));
        teMessageSelf->setFont(font1);
        teMessageSelf->setStyleSheet(QLatin1String("QTextEdit {\n"
"	border-radius: 3px;\n"
"    border-image: url(:/STSample/Resources/images/bubble_right.png);  /* The border image                    */\n"
"    border-top-width: 2px;\n"
"    border-right-width: 2px;\n"
"    border-bottom-width:2px;\n"
"    border-left-width: 2px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        teMessageSelf->setLineWidth(1);
        teMessageSelf->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teMessageSelf->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teMessageSelf->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        teMessageSelf->setReadOnly(true);
        teMessageSelf->setAcceptRichText(false);

        horizontalLayout_3->addWidget(teMessageSelf);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblChatRecordPicSelf = new MaskLabel(widget_5);
        lblChatRecordPicSelf->setObjectName(QStringLiteral("lblChatRecordPicSelf"));
        lblChatRecordPicSelf->setMinimumSize(QSize(30, 30));
        lblChatRecordPicSelf->setMaximumSize(QSize(30, 30));
        lblChatRecordPicSelf->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(lblChatRecordPicSelf);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(widget_5);


        horizontalLayout->addWidget(widget_4);


        verticalLayout->addWidget(widget);


        retranslateUi(STChatRecordItemClass);

        QMetaObject::connectSlotsByName(STChatRecordItemClass);
    } // setupUi

    void retranslateUi(QWidget *STChatRecordItemClass)
    {
        STChatRecordItemClass->setWindowTitle(QApplication::translate("STChatRecordItemClass", "STChatRecordItem", 0));
        lblTime->setText(QApplication::translate("STChatRecordItemClass", "11-23 15:20", 0));
        lblChatRecordPicOther->setText(QString());
        teMessageOther->setHtml(QApplication::translate("STChatRecordItemClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        teMessageSelf->setHtml(QApplication::translate("STChatRecordItemClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        lblChatRecordPicSelf->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STChatRecordItemClass: public Ui_STChatRecordItemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCHATRECORDITEM_H
