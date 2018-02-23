/********************************************************************************
** Form generated from reading UI file 'STCloudFileManager.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STCLOUDFILEMANAGER_H
#define UI_STCLOUDFILEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STCloudFileManagerClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbUpload;
    QPushButton *pbNew;
    QPushButton *pbCopy;
    QPushButton *pbMove;
    QPushButton *pbDel;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbSupport;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widPathList;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *twFileManager;

    void setupUi(QWidget *STCloudFileManagerClass)
    {
        if (STCloudFileManagerClass->objectName().isEmpty())
            STCloudFileManagerClass->setObjectName(QStringLiteral("STCloudFileManagerClass"));
        STCloudFileManagerClass->resize(889, 691);
        STCloudFileManagerClass->setStyleSheet(QLatin1String("QWidget{background-color: rgb(255, 255, 255);}\n"
"QWidget#STCloudFileManagerClass{border-bottom: 1px solid #e3e3e3;border-top: 1px solid #e3e3e3;border-right: 1px solid #e3e3e3;border-left: 1px solid #e3e3e3;}\n"
""));
        verticalLayout = new QVBoxLayout(STCloudFileManagerClass);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 1, 1);
        widget = new QWidget(STCloudFileManagerClass);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 20, 10, 0);
        pbUpload = new QPushButton(widget);
        pbUpload->setObjectName(QStringLiteral("pbUpload"));
        pbUpload->setMinimumSize(QSize(80, 30));
        pbUpload->setMaximumSize(QSize(80, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        pbUpload->setFont(font);
        pbUpload->setStyleSheet(QLatin1String("\n"
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/STSample/Resources/images/fileupload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUpload->setIcon(icon);

        horizontalLayout->addWidget(pbUpload);

        pbNew = new QPushButton(widget);
        pbNew->setObjectName(QStringLiteral("pbNew"));
        pbNew->setMinimumSize(QSize(80, 30));
        pbNew->setMaximumSize(QSize(80, 30));
        pbNew->setFont(font);
        pbNew->setStyleSheet(QLatin1String("\n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/STSample/Resources/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbNew->setIcon(icon1);

        horizontalLayout->addWidget(pbNew);

        pbCopy = new QPushButton(widget);
        pbCopy->setObjectName(QStringLiteral("pbCopy"));
        pbCopy->setMinimumSize(QSize(80, 30));
        pbCopy->setMaximumSize(QSize(80, 30));
        pbCopy->setFont(font);
        pbCopy->setStyleSheet(QLatin1String("\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/STSample/Resources/images/filecopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCopy->setIcon(icon2);

        horizontalLayout->addWidget(pbCopy);

        pbMove = new QPushButton(widget);
        pbMove->setObjectName(QStringLiteral("pbMove"));
        pbMove->setMinimumSize(QSize(80, 30));
        pbMove->setMaximumSize(QSize(80, 30));
        pbMove->setFont(font);
        pbMove->setStyleSheet(QLatin1String("\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/STSample/Resources/images/filemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbMove->setIcon(icon3);

        horizontalLayout->addWidget(pbMove);

        pbDel = new QPushButton(widget);
        pbDel->setObjectName(QStringLiteral("pbDel"));
        pbDel->setMinimumSize(QSize(80, 30));
        pbDel->setMaximumSize(QSize(80, 30));
        pbDel->setFont(font);
        pbDel->setStyleSheet(QLatin1String("\n"
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/STSample/Resources/images/filedel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDel->setIcon(icon4);

        horizontalLayout->addWidget(pbDel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbSupport = new QPushButton(widget);
        pbSupport->setObjectName(QStringLiteral("pbSupport"));
        pbSupport->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	color: #30ba78;\n"
"	font:9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"	color: #6dcea0;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/STSample/Resources/images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSupport->setIcon(icon5);

        horizontalLayout->addWidget(pbSupport);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(STCloudFileManagerClass);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(0, 30));
        widget_4->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 0);
        widPathList = new QWidget(widget_4);
        widPathList->setObjectName(QStringLiteral("widPathList"));
        horizontalLayout_4 = new QHBoxLayout(widPathList);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_3->addWidget(widPathList);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(STCloudFileManagerClass);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        twFileManager = new QTableWidget(widget_3);
        if (twFileManager->columnCount() < 3)
            twFileManager->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twFileManager->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twFileManager->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twFileManager->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twFileManager->setObjectName(QStringLiteral("twFileManager"));
        twFileManager->setFocusPolicy(Qt::NoFocus);
        twFileManager->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{  \n"
"    background-color: rgba(255, 255, 255, 0);   \n"
"    font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";  \n"
"	color: rgb(67, 69, 85);\n"
"    border:0px;  \n"
"}  \n"
"  \n"
"QHeaderView::section {\n"
"	color: rgb(67, 69, 85);\n"
"    font:10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";  \n"
"    text-align:center;  \n"
"    height:40px;  \n"
"    border:0px solid #8faac9;  \n"
"    background-color: rgb(241, 241, 241);\n"
"    border-left:none;  \n"
"padding-left: 20px;\n"
"padding-right: 20px;\n"
"}  \n"
"  \n"
"QHeaderView::section::hover {\n"
"    background-color: rgb(216, 216, 216);\n"
"	\n"
"}  \n"
" \n"
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
"/*\346\273\232\345\212\250"
                        "\346\235\241\344\270\255\346\273\221\345\235\227\347\232\204\346\240\267\345\274\217*/\n"
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
        twFileManager->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        twFileManager->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twFileManager->setSelectionMode(QAbstractItemView::NoSelection);
        twFileManager->setSelectionBehavior(QAbstractItemView::SelectRows);
        twFileManager->setShowGrid(false);
        twFileManager->horizontalHeader()->setVisible(true);
        twFileManager->horizontalHeader()->setMinimumSectionSize(40);
        twFileManager->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        twFileManager->horizontalHeader()->setStretchLastSection(false);
        twFileManager->verticalHeader()->setVisible(false);
        twFileManager->verticalHeader()->setDefaultSectionSize(40);
        twFileManager->verticalHeader()->setMinimumSectionSize(40);
        twFileManager->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        twFileManager->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(twFileManager);


        verticalLayout->addWidget(widget_3);


        retranslateUi(STCloudFileManagerClass);

        QMetaObject::connectSlotsByName(STCloudFileManagerClass);
    } // setupUi

    void retranslateUi(QWidget *STCloudFileManagerClass)
    {
        STCloudFileManagerClass->setWindowTitle(QApplication::translate("STCloudFileManagerClass", "STCloudFileManager", 0));
        pbUpload->setText(QApplication::translate("STCloudFileManagerClass", "\344\270\212\344\274\240", 0));
        pbNew->setText(QApplication::translate("STCloudFileManagerClass", "\346\226\260\345\273\272", 0));
        pbCopy->setText(QApplication::translate("STCloudFileManagerClass", "\345\244\215\345\210\266", 0));
        pbMove->setText(QApplication::translate("STCloudFileManagerClass", "\347\247\273\345\212\250", 0));
        pbDel->setText(QApplication::translate("STCloudFileManagerClass", "\345\210\240\351\231\244", 0));
        pbSupport->setText(QApplication::translate("STCloudFileManagerClass", "\346\224\257\346\214\201\346\226\207\344\273\266\346\240\274\345\274\217", 0));
        QTableWidgetItem *___qtablewidgetitem = twFileManager->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("STCloudFileManagerClass", "\346\226\207\344\273\266\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = twFileManager->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("STCloudFileManagerClass", "\346\226\207\344\273\266\345\244\247\345\260\217", 0));
        QTableWidgetItem *___qtablewidgetitem2 = twFileManager->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("STCloudFileManagerClass", "\344\277\256\346\224\271\346\227\245\346\234\237", 0));
    } // retranslateUi

};

namespace Ui {
    class STCloudFileManagerClass: public Ui_STCloudFileManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STCLOUDFILEMANAGER_H
