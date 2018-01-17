/********************************************************************************
** Form generated from reading UI file 'STScreenshotOption.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STSCREENSHOTOPTION_H
#define UI_STSCREENSHOTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STScreenshotOptionClass
{
public:
    QHBoxLayout *horizontalLayout_4;
    QWidget *widMain;
    QVBoxLayout *verticalLayout;
    QWidget *widScreenshot;
    QHBoxLayout *horizontalLayout;
    QLabel *lblScreenshot;
    QWidget *widScreenshotWithoutWindow;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblScreenshotWithoutWindow;

    void setupUi(QWidget *STScreenshotOptionClass)
    {
        if (STScreenshotOptionClass->objectName().isEmpty())
            STScreenshotOptionClass->setObjectName(QStringLiteral("STScreenshotOptionClass"));
        STScreenshotOptionClass->resize(124, 70);
        horizontalLayout_4 = new QHBoxLayout(STScreenshotOptionClass);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widMain = new QWidget(STScreenshotOptionClass);
        widMain->setObjectName(QStringLiteral("widMain"));
        widMain->setStyleSheet(QLatin1String("QWidget#widMain{border-bottom: 1px solid #e3e3e3;border-top: 1px solid #e3e3e3;border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;background-color: rgb(255, 255, 255);\n"
"border-radius:3px;}\n"
""));
        verticalLayout = new QVBoxLayout(widMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, 0, 5);
        widScreenshot = new QWidget(widMain);
        widScreenshot->setObjectName(QStringLiteral("widScreenshot"));
        horizontalLayout = new QHBoxLayout(widScreenshot);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        lblScreenshot = new QLabel(widScreenshot);
        lblScreenshot->setObjectName(QStringLiteral("lblScreenshot"));
        lblScreenshot->setMinimumSize(QSize(0, 30));
        lblScreenshot->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lblScreenshot->setFont(font);
        lblScreenshot->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout->addWidget(lblScreenshot);


        verticalLayout->addWidget(widScreenshot);

        widScreenshotWithoutWindow = new QWidget(widMain);
        widScreenshotWithoutWindow->setObjectName(QStringLiteral("widScreenshotWithoutWindow"));
        horizontalLayout_2 = new QHBoxLayout(widScreenshotWithoutWindow);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 10, 0);
        lblScreenshotWithoutWindow = new QLabel(widScreenshotWithoutWindow);
        lblScreenshotWithoutWindow->setObjectName(QStringLiteral("lblScreenshotWithoutWindow"));
        lblScreenshotWithoutWindow->setMinimumSize(QSize(0, 30));
        lblScreenshotWithoutWindow->setMaximumSize(QSize(16777215, 30));
        lblScreenshotWithoutWindow->setFont(font);
        lblScreenshotWithoutWindow->setStyleSheet(QStringLiteral("color: rgb(67, 69, 85);"));

        horizontalLayout_2->addWidget(lblScreenshotWithoutWindow);


        verticalLayout->addWidget(widScreenshotWithoutWindow);


        horizontalLayout_4->addWidget(widMain);


        retranslateUi(STScreenshotOptionClass);

        QMetaObject::connectSlotsByName(STScreenshotOptionClass);
    } // setupUi

    void retranslateUi(QWidget *STScreenshotOptionClass)
    {
        STScreenshotOptionClass->setWindowTitle(QApplication::translate("STScreenshotOptionClass", "STScreenshotOption", 0));
        lblScreenshot->setText(QApplication::translate("STScreenshotOptionClass", "\345\261\217\345\271\225\346\210\252\345\233\276", 0));
        lblScreenshotWithoutWindow->setText(QApplication::translate("STScreenshotOptionClass", "\351\232\220\350\227\217\350\201\212\345\244\251\347\252\227\345\217\243\346\210\252\345\233\276", 0));
    } // retranslateUi

};

namespace Ui {
    class STScreenshotOptionClass: public Ui_STScreenshotOptionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STSCREENSHOTOPTION_H
