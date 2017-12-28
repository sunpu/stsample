/********************************************************************************
** Form generated from reading UI file 'STContactItem.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCONTACTITEM_H
#define UI_STCONTACTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STContactItemClass
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *lblContactPic;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblContactName;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *STContactItemClass)
    {
        if (STContactItemClass->objectName().isEmpty())
            STContactItemClass->setObjectName(QStringLiteral("STContactItemClass"));
        STContactItemClass->resize(370, 45);
        STContactItemClass->setMinimumSize(QSize(0, 45));
        STContactItemClass->setMaximumSize(QSize(16777215, 45));
        horizontalLayout = new QHBoxLayout(STContactItemClass);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        widget_2 = new QWidget(STContactItemClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(40, 40));
        widget_2->setMaximumSize(QSize(40, 40));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        lblContactPic = new QLabel(widget_2);
        lblContactPic->setObjectName(QStringLiteral("lblContactPic"));
        lblContactPic->setMinimumSize(QSize(36, 36));
        lblContactPic->setMaximumSize(QSize(36, 36));
        lblContactPic->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/account.png);"));

        gridLayout->addWidget(lblContactPic, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(STContactItemClass);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblContactName = new QLabel(widget_3);
        lblContactName->setObjectName(QStringLiteral("lblContactName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        lblContactName->setFont(font);
        lblContactName->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_2->addWidget(lblContactName);

        horizontalSpacer = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addWidget(widget_3);


        retranslateUi(STContactItemClass);

        QMetaObject::connectSlotsByName(STContactItemClass);
    } // setupUi

    void retranslateUi(QWidget *STContactItemClass)
    {
        STContactItemClass->setWindowTitle(QApplication::translate("STContactItemClass", "STContactItem", 0));
        lblContactPic->setText(QString());
        lblContactName->setText(QApplication::translate("STContactItemClass", "Sunix", 0));
    } // retranslateUi

};

namespace Ui {
    class STContactItemClass: public Ui_STContactItemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCONTACTITEM_H
