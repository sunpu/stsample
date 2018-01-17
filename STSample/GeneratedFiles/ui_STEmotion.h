/********************************************************************************
** Form generated from reading UI file 'STEmotion.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEMOTION_H
#define UI_STEMOTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STEmotionClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *twEmotion;

    void setupUi(QWidget *STEmotionClass)
    {
        if (STEmotionClass->objectName().isEmpty())
            STEmotionClass->setObjectName(QStringLiteral("STEmotionClass"));
        STEmotionClass->resize(242, 158);
        horizontalLayout_2 = new QHBoxLayout(STEmotionClass);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(STEmotionClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"border-bottom: 1px solid #e3e3e3;border-top: 1px solid #e3e3e3;border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:3px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        twEmotion = new QTableWidget(widget);
        if (twEmotion->columnCount() < 8)
            twEmotion->setColumnCount(8);
        if (twEmotion->rowCount() < 5)
            twEmotion->setRowCount(5);
        twEmotion->setObjectName(QStringLiteral("twEmotion"));
        twEmotion->setMinimumSize(QSize(224, 140));
        twEmotion->setMaximumSize(QSize(224, 140));
        twEmotion->setFocusPolicy(Qt::NoFocus);
        twEmotion->setStyleSheet(QLatin1String("QTableWidget{border:0px;}\n"
"\n"
"QTableWidget::item:hover {\n"
"border:2px solid #e3e3e3;} "));
        twEmotion->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twEmotion->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        twEmotion->setAutoScroll(false);
        twEmotion->setSelectionMode(QAbstractItemView::NoSelection);
        twEmotion->setGridStyle(Qt::NoPen);
        twEmotion->setRowCount(5);
        twEmotion->setColumnCount(8);
        twEmotion->horizontalHeader()->setVisible(false);
        twEmotion->horizontalHeader()->setDefaultSectionSize(28);
        twEmotion->horizontalHeader()->setMinimumSectionSize(28);
        twEmotion->horizontalHeader()->setStretchLastSection(true);
        twEmotion->verticalHeader()->setVisible(false);
        twEmotion->verticalHeader()->setDefaultSectionSize(28);
        twEmotion->verticalHeader()->setMinimumSectionSize(28);

        horizontalLayout->addWidget(twEmotion);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(STEmotionClass);

        QMetaObject::connectSlotsByName(STEmotionClass);
    } // setupUi

    void retranslateUi(QWidget *STEmotionClass)
    {
        STEmotionClass->setWindowTitle(QApplication::translate("STEmotionClass", "STEmotion", 0));
    } // retranslateUi

};

namespace Ui {
    class STEmotionClass: public Ui_STEmotionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEMOTION_H
