/********************************************************************************
** Form generated from reading UI file 'STSample.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STSAMPLE_H
#define UI_STSAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STSampleClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QFrame *widControl;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *leServerIP;
    QWidget *widLogin;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbTeacher;
    QRadioButton *rbStudent;
    QPushButton *pbLogin;
    QPushButton *pbLogout;
    QFrame *line;
    QWidget *widLocalCamera;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLocalCamera;
    QPushButton *pbSendLocalCamera;
    QPushButton *pbStopLocalCamera;
    QWidget *widLocalScreen;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblLocalDesktop;
    QPushButton *pbSendLocalDesktop;
    QPushButton *pbStopLocalDesktop;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblLocalWindow;
    QPushButton *pbSendLocalWindow;
    QPushButton *pbStopLocalWindow;
    QFrame *widList;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblOption;
    QFrame *line_2;
    QWidget *widOption;
    QVBoxLayout *verticalLayout_4;
    QFrame *widManage;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QFrame *widRender;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblStatus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *STSampleClass)
    {
        if (STSampleClass->objectName().isEmpty())
            STSampleClass->setObjectName(QStringLiteral("STSampleClass"));
        STSampleClass->resize(1143, 763);
        centralWidget = new QWidget(STSampleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(9, 9, 9, 9);
        widControl = new QFrame(centralWidget);
        widControl->setObjectName(QStringLiteral("widControl"));
        widControl->setMinimumSize(QSize(320, 240));
        widControl->setMaximumSize(QSize(320, 240));
        widControl->setStyleSheet(QStringLiteral(""));
        widControl->setFrameShape(QFrame::Box);
        widControl->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(widControl);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        leServerIP = new QLineEdit(widControl);
        leServerIP->setObjectName(QStringLiteral("leServerIP"));

        verticalLayout_2->addWidget(leServerIP);

        widLogin = new QWidget(widControl);
        widLogin->setObjectName(QStringLiteral("widLogin"));
        widLogin->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 127);"));
        horizontalLayout = new QHBoxLayout(widLogin);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_2 = new QWidget(widLogin);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        rbTeacher = new QRadioButton(widget_2);
        rbTeacher->setObjectName(QStringLiteral("rbTeacher"));
        rbTeacher->setChecked(true);

        horizontalLayout_6->addWidget(rbTeacher);

        rbStudent = new QRadioButton(widget_2);
        rbStudent->setObjectName(QStringLiteral("rbStudent"));

        horizontalLayout_6->addWidget(rbStudent);


        horizontalLayout->addWidget(widget_2);

        pbLogin = new QPushButton(widLogin);
        pbLogin->setObjectName(QStringLiteral("pbLogin"));

        horizontalLayout->addWidget(pbLogin);

        pbLogout = new QPushButton(widLogin);
        pbLogout->setObjectName(QStringLiteral("pbLogout"));

        horizontalLayout->addWidget(pbLogout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_2->addWidget(widLogin);

        line = new QFrame(widControl);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        widLocalCamera = new QWidget(widControl);
        widLocalCamera->setObjectName(QStringLiteral("widLocalCamera"));
        widLocalCamera->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(widLocalCamera);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblLocalCamera = new QLabel(widLocalCamera);
        lblLocalCamera->setObjectName(QStringLiteral("lblLocalCamera"));

        horizontalLayout_2->addWidget(lblLocalCamera);

        pbSendLocalCamera = new QPushButton(widLocalCamera);
        pbSendLocalCamera->setObjectName(QStringLiteral("pbSendLocalCamera"));

        horizontalLayout_2->addWidget(pbSendLocalCamera);

        pbStopLocalCamera = new QPushButton(widLocalCamera);
        pbStopLocalCamera->setObjectName(QStringLiteral("pbStopLocalCamera"));

        horizontalLayout_2->addWidget(pbStopLocalCamera);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout_2->addWidget(widLocalCamera);

        widLocalScreen = new QWidget(widControl);
        widLocalScreen->setObjectName(QStringLiteral("widLocalScreen"));
        widLocalScreen->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(widLocalScreen);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblLocalDesktop = new QLabel(widLocalScreen);
        lblLocalDesktop->setObjectName(QStringLiteral("lblLocalDesktop"));

        horizontalLayout_3->addWidget(lblLocalDesktop);

        pbSendLocalDesktop = new QPushButton(widLocalScreen);
        pbSendLocalDesktop->setObjectName(QStringLiteral("pbSendLocalDesktop"));

        horizontalLayout_3->addWidget(pbSendLocalDesktop);

        pbStopLocalDesktop = new QPushButton(widLocalScreen);
        pbStopLocalDesktop->setObjectName(QStringLiteral("pbStopLocalDesktop"));

        horizontalLayout_3->addWidget(pbStopLocalDesktop);


        verticalLayout_2->addWidget(widLocalScreen);

        widget = new QWidget(widControl);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblLocalWindow = new QLabel(widget);
        lblLocalWindow->setObjectName(QStringLiteral("lblLocalWindow"));

        horizontalLayout_4->addWidget(lblLocalWindow);

        pbSendLocalWindow = new QPushButton(widget);
        pbSendLocalWindow->setObjectName(QStringLiteral("pbSendLocalWindow"));

        horizontalLayout_4->addWidget(pbSendLocalWindow);

        pbStopLocalWindow = new QPushButton(widget);
        pbStopLocalWindow->setObjectName(QStringLiteral("pbStopLocalWindow"));

        horizontalLayout_4->addWidget(pbStopLocalWindow);


        verticalLayout_2->addWidget(widget);


        horizontalLayout_5->addWidget(widControl);

        widList = new QFrame(centralWidget);
        widList->setObjectName(QStringLiteral("widList"));
        widList->setMaximumSize(QSize(300, 16777215));
        widList->setStyleSheet(QStringLiteral(""));
        widList->setFrameShape(QFrame::Box);
        widList->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(widList);
        verticalLayout_3->setSpacing(9);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        lblOption = new QLabel(widList);
        lblOption->setObjectName(QStringLiteral("lblOption"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        lblOption->setFont(font);

        verticalLayout_3->addWidget(lblOption);

        line_2 = new QFrame(widList);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_2);

        widOption = new QWidget(widList);
        widOption->setObjectName(QStringLiteral("widOption"));
        widOption->setLayoutDirection(Qt::LeftToRight);
        widOption->setAutoFillBackground(false);
        widOption->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(widOption);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        verticalLayout_3->addWidget(widOption, 0, Qt::AlignTop);

        verticalLayout_3->setStretch(2, 1);

        horizontalLayout_5->addWidget(widList);

        widManage = new QFrame(centralWidget);
        widManage->setObjectName(QStringLiteral("widManage"));
        widManage->setStyleSheet(QStringLiteral(""));
        widManage->setFrameShape(QFrame::Box);
        widManage->setFrameShadow(QFrame::Plain);
        widManage->setLineWidth(1);
        verticalLayout_5 = new QVBoxLayout(widManage);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));

        horizontalLayout_5->addWidget(widManage);

        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_5);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 200));
        frame_3->setFrameShape(QFrame::Panel);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widRender = new QFrame(frame_3);
        widRender->setObjectName(QStringLiteral("widRender"));
        widRender->setStyleSheet(QStringLiteral(""));
        widRender->setFrameShape(QFrame::NoFrame);
        widRender->setFrameShadow(QFrame::Plain);
        widRender->setLineWidth(1);
        horizontalLayout_7 = new QHBoxLayout(widRender);
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, 10, 10, 10);

        verticalLayout_6->addWidget(widRender, 0, Qt::AlignLeft);


        verticalLayout->addWidget(frame_3);

        lblStatus = new QLabel(centralWidget);
        lblStatus->setObjectName(QStringLiteral("lblStatus"));
        QFont font1;
        font1.setPointSize(10);
        lblStatus->setFont(font1);
        lblStatus->setMargin(6);

        verticalLayout->addWidget(lblStatus);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        STSampleClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(STSampleClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1143, 23));
        STSampleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(STSampleClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        STSampleClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(STSampleClass);

        QMetaObject::connectSlotsByName(STSampleClass);
    } // setupUi

    void retranslateUi(QMainWindow *STSampleClass)
    {
        STSampleClass->setWindowTitle(QApplication::translate("STSampleClass", "\350\275\257\347\273\210\347\253\257Sample", 0));
        leServerIP->setText(QApplication::translate("STSampleClass", "221.226.156.109", 0));
        rbTeacher->setText(QApplication::translate("STSampleClass", "\344\270\273\350\256\262", 0));
        rbStudent->setText(QApplication::translate("STSampleClass", "\345\220\254\350\257\276", 0));
        pbLogin->setText(QApplication::translate("STSampleClass", "\347\231\273\345\205\245", 0));
        pbLogout->setText(QApplication::translate("STSampleClass", "\347\231\273\345\207\272", 0));
        lblLocalCamera->setText(QApplication::translate("STSampleClass", "\345\217\221\351\200\201\346\234\254\345\234\260\350\247\206\351\242\221", 0));
        pbSendLocalCamera->setText(QApplication::translate("STSampleClass", "\345\217\221\351\200\201", 0));
        pbStopLocalCamera->setText(QApplication::translate("STSampleClass", "\345\201\234\346\255\242\345\217\221\351\200\201", 0));
        lblLocalDesktop->setText(QApplication::translate("STSampleClass", "\345\217\221\351\200\201\346\234\254\345\234\260\346\241\214\351\235\242", 0));
        pbSendLocalDesktop->setText(QApplication::translate("STSampleClass", "\345\217\221\351\200\201", 0));
        pbStopLocalDesktop->setText(QApplication::translate("STSampleClass", "\345\201\234\346\255\242\345\217\221\351\200\201", 0));
        lblLocalWindow->setText(QApplication::translate("STSampleClass", "\345\217\221\351\200\201\346\234\254\345\234\260\347\252\227\345\217\243", 0));
        pbSendLocalWindow->setText(QApplication::translate("STSampleClass", "\345\217\221\351\200\201", 0));
        pbStopLocalWindow->setText(QApplication::translate("STSampleClass", "\345\201\234\346\255\242\345\217\221\351\200\201", 0));
#ifndef QT_NO_ACCESSIBILITY
        widList->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        lblOption->setText(QApplication::translate("STSampleClass", "\345\217\257\350\247\202\347\234\213\347\232\204\350\247\206\351\242\221\346\265\201\357\274\232", 0));
        lblStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class STSampleClass: public Ui_STSampleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STSAMPLE_H
