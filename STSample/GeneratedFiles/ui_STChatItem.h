/********************************************************************************
** Form generated from reading UI file 'STChatItem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCHATITEM_H
#define UI_STCHATITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <masklabel.h>

QT_BEGIN_NAMESPACE

class Ui_STChatItemClass
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    MaskLabel *lblChatPic;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblChatName;
    QSpacerItem *horizontalSpacer;
    QLabel *lblTime;
    QLabel *lblChatPreview;

    void setupUi(QWidget *STChatItemClass)
    {
        if (STChatItemClass->objectName().isEmpty())
            STChatItemClass->setObjectName(QStringLiteral("STChatItemClass"));
        STChatItemClass->resize(359, 60);
        STChatItemClass->setMinimumSize(QSize(0, 60));
        STChatItemClass->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(STChatItemClass);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        widget_2 = new QWidget(STChatItemClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(40, 40));
        widget_2->setMaximumSize(QSize(40, 40));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        lblChatPic = new MaskLabel(widget_2);
        lblChatPic->setObjectName(QStringLiteral("lblChatPic"));
        lblChatPic->setMinimumSize(QSize(36, 36));
        lblChatPic->setMaximumSize(QSize(36, 36));
        lblChatPic->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(lblChatPic, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(STChatItemClass);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, 0, 5);
        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("border:0px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblChatName = new QLabel(widget);
        lblChatName->setObjectName(QStringLiteral("lblChatName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        lblChatName->setFont(font);
        lblChatName->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_2->addWidget(lblChatName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lblTime = new QLabel(widget);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(10);
        lblTime->setFont(font1);
        lblTime->setStyleSheet(QStringLiteral("color:rgb(147, 147, 147);"));

        horizontalLayout_2->addWidget(lblTime);


        verticalLayout->addWidget(widget);

        lblChatPreview = new QLabel(widget_3);
        lblChatPreview->setObjectName(QStringLiteral("lblChatPreview"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lblChatPreview->setFont(font2);
        lblChatPreview->setStyleSheet(QStringLiteral("color:rgb(147, 147, 147);"));

        verticalLayout->addWidget(lblChatPreview);


        horizontalLayout->addWidget(widget_3);


        retranslateUi(STChatItemClass);

        QMetaObject::connectSlotsByName(STChatItemClass);
    } // setupUi

    void retranslateUi(QWidget *STChatItemClass)
    {
        STChatItemClass->setWindowTitle(QApplication::translate("STChatItemClass", "STChatItem", 0));
        lblChatPic->setText(QString());
        lblChatName->setText(QString());
        lblTime->setText(QString());
        lblChatPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STChatItemClass: public Ui_STChatItemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCHATITEM_H
