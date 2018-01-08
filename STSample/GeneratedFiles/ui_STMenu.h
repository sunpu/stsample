/********************************************************************************
** Form generated from reading UI file 'STMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STMENU_H
#define UI_STMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STMenuClass
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widMain;
    QVBoxLayout *verticalLayout;
    QWidget *widParam;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblParamPic;
    QLabel *lblParamText;
    QSpacerItem *horizontalSpacer;
    QWidget *widRelogin;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblReloginPic;
    QLabel *lblReloginText;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widExit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblExitPic;
    QLabel *lblExitText;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *STMenuClass)
    {
        if (STMenuClass->objectName().isEmpty())
            STMenuClass->setObjectName(QStringLiteral("STMenuClass"));
        STMenuClass->resize(98, 110);
        STMenuClass->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(STMenuClass);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widMain = new QWidget(STMenuClass);
        widMain->setObjectName(QStringLiteral("widMain"));
        widMain->setStyleSheet(QStringLiteral("QWidget#widMain{border-image: url(:/STSample/Resources/images/menu.png);}"));
        verticalLayout = new QVBoxLayout(widMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, 0, 15);
        widParam = new QWidget(widMain);
        widParam->setObjectName(QStringLiteral("widParam"));
        horizontalLayout = new QHBoxLayout(widParam);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(3, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lblParamPic = new QLabel(widParam);
        lblParamPic->setObjectName(QStringLiteral("lblParamPic"));
        lblParamPic->setMinimumSize(QSize(16, 16));
        lblParamPic->setMaximumSize(QSize(16, 16));
        lblParamPic->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/param.png);"));

        horizontalLayout->addWidget(lblParamPic);

        lblParamText = new QLabel(widParam);
        lblParamText->setObjectName(QStringLiteral("lblParamText"));
        lblParamText->setMinimumSize(QSize(0, 30));
        lblParamText->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lblParamText->setFont(font);
        lblParamText->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout->addWidget(lblParamText);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widParam);

        widRelogin = new QWidget(widMain);
        widRelogin->setObjectName(QStringLiteral("widRelogin"));
        horizontalLayout_2 = new QHBoxLayout(widRelogin);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lblReloginPic = new QLabel(widRelogin);
        lblReloginPic->setObjectName(QStringLiteral("lblReloginPic"));
        lblReloginPic->setMinimumSize(QSize(16, 16));
        lblReloginPic->setMaximumSize(QSize(16, 16));
        lblReloginPic->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/relogin.png);"));

        horizontalLayout_2->addWidget(lblReloginPic);

        lblReloginText = new QLabel(widRelogin);
        lblReloginText->setObjectName(QStringLiteral("lblReloginText"));
        lblReloginText->setMinimumSize(QSize(0, 30));
        lblReloginText->setMaximumSize(QSize(16777215, 30));
        lblReloginText->setFont(font);
        lblReloginText->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_2->addWidget(lblReloginText);

        horizontalSpacer_4 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widRelogin);

        widExit = new QWidget(widMain);
        widExit->setObjectName(QStringLiteral("widExit"));
        horizontalLayout_3 = new QHBoxLayout(widExit);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        lblExitPic = new QLabel(widExit);
        lblExitPic->setObjectName(QStringLiteral("lblExitPic"));
        lblExitPic->setMinimumSize(QSize(16, 16));
        lblExitPic->setMaximumSize(QSize(16, 16));
        lblExitPic->setStyleSheet(QStringLiteral("border-image: url(:/STSample/Resources/images/exit.png);"));

        horizontalLayout_3->addWidget(lblExitPic);

        lblExitText = new QLabel(widExit);
        lblExitText->setObjectName(QStringLiteral("lblExitText"));
        lblExitText->setMinimumSize(QSize(0, 30));
        lblExitText->setMaximumSize(QSize(16777215, 30));
        lblExitText->setFont(font);
        lblExitText->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_3->addWidget(lblExitText);

        horizontalSpacer_6 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widExit);


        horizontalLayout_4->addWidget(widMain);


        retranslateUi(STMenuClass);

        QMetaObject::connectSlotsByName(STMenuClass);
    } // setupUi

    void retranslateUi(QWidget *STMenuClass)
    {
        STMenuClass->setWindowTitle(QApplication::translate("STMenuClass", "Form", 0));
        lblParamPic->setText(QString());
        lblParamText->setText(QApplication::translate("STMenuClass", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        lblReloginPic->setText(QString());
        lblReloginText->setText(QApplication::translate("STMenuClass", "\345\210\207\346\215\242\350\264\246\345\217\267", 0));
        lblExitPic->setText(QString());
        lblExitText->setText(QApplication::translate("STMenuClass", "\350\275\257\344\273\266\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class STMenuClass: public Ui_STMenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STMENU_H
