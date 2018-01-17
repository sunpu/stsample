/********************************************************************************
** Form generated from reading UI file 'STScreenshotToolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STSCREENSHOTTOOLBAR_H
#define UI_STSCREENSHOTTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STScreenshotToolbarClass
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pbFinish;
    QLabel *label;
    QPushButton *pbCancel;

    void setupUi(QWidget *STScreenshotToolbarClass)
    {
        if (STScreenshotToolbarClass->objectName().isEmpty())
            STScreenshotToolbarClass->setObjectName(QStringLiteral("STScreenshotToolbarClass"));
        STScreenshotToolbarClass->resize(131, 30);
        STScreenshotToolbarClass->setStyleSheet(QLatin1String("\n"
"background-color: rgba(0, 0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(STScreenshotToolbarClass);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pbFinish = new QPushButton(STScreenshotToolbarClass);
        pbFinish->setObjectName(QStringLiteral("pbFinish"));
        pbFinish->setMinimumSize(QSize(65, 30));
        pbFinish->setMaximumSize(QSize(65, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        pbFinish->setFont(font);
        pbFinish->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-top-left-radius: 3px;\n"
"	border-bottom-left-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover:pressed {\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	background-color: rgb(63, 63, 63);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/STSample/Resources/images/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFinish->setIcon(icon);
        pbFinish->setFlat(true);

        horizontalLayout->addWidget(pbFinish);

        label = new QLabel(STScreenshotToolbarClass);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(1, 0));
        label->setMaximumSize(QSize(1, 16777215));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        pbCancel = new QPushButton(STScreenshotToolbarClass);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        pbCancel->setMinimumSize(QSize(65, 30));
        pbCancel->setMaximumSize(QSize(65, 30));
        pbCancel->setFont(font);
        pbCancel->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton {\n"
"	border-left-color: rgb(255, 255, 255);\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover:pressed {\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	background-color: rgb(63, 63, 63);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/STSample/Resources/images/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancel->setIcon(icon1);
        pbCancel->setFlat(true);

        horizontalLayout->addWidget(pbCancel);


        retranslateUi(STScreenshotToolbarClass);

        QMetaObject::connectSlotsByName(STScreenshotToolbarClass);
    } // setupUi

    void retranslateUi(QWidget *STScreenshotToolbarClass)
    {
        STScreenshotToolbarClass->setWindowTitle(QApplication::translate("STScreenshotToolbarClass", "STScreenshotToolbar", 0));
        pbFinish->setText(QApplication::translate("STScreenshotToolbarClass", "\347\241\256\345\256\232", 0));
        label->setText(QString());
        pbCancel->setText(QApplication::translate("STScreenshotToolbarClass", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class STScreenshotToolbarClass: public Ui_STScreenshotToolbarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STSCREENSHOTTOOLBAR_H
