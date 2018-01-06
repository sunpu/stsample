/********************************************************************************
** Form generated from reading UI file 'STLoad.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STLOAD_H
#define UI_STLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STLoadClass
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *lblLoad;

    void setupUi(QWidget *STLoadClass)
    {
        if (STLoadClass->objectName().isEmpty())
            STLoadClass->setObjectName(QStringLiteral("STLoadClass"));
        STLoadClass->resize(120, 120);
        STLoadClass->setMinimumSize(QSize(120, 120));
        STLoadClass->setMaximumSize(QSize(120, 120));
        horizontalLayout = new QHBoxLayout(STLoadClass);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblLoad = new QLabel(STLoadClass);
        lblLoad->setObjectName(QStringLiteral("lblLoad"));
        lblLoad->setMinimumSize(QSize(35, 35));
        lblLoad->setMaximumSize(QSize(35, 35));
        lblLoad->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lblLoad);


        retranslateUi(STLoadClass);

        QMetaObject::connectSlotsByName(STLoadClass);
    } // setupUi

    void retranslateUi(QWidget *STLoadClass)
    {
        STLoadClass->setWindowTitle(QApplication::translate("STLoadClass", "STLoad", 0));
        lblLoad->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STLoadClass: public Ui_STLoadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STLOAD_H
