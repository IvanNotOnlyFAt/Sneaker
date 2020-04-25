/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "fansform.h"
#include "loginform.h"
#include "merchform.h"
#include "storeform.h"
#include "traderform.h"
#include "tranform.h"
#include "trolleyform.h"
#include "userform.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUser;
    QAction *actionFans;
    QAction *actionTrader;
    QAction *actionStore;
    QAction *actionMerch;
    QAction *actionTransa;
    QAction *actionTrolley;
    QAction *actionHome;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_Login;
    QGridLayout *gridLayout_2;
    LoginForm *widget_0;
    QWidget *page_home;
    QGridLayout *gridLayout_3;
    QWidget *widget_1;
    QWidget *page_User;
    QGridLayout *gridLayout_8;
    UserForm *widget_2;
    QWidget *page_Fans;
    QGridLayout *gridLayout_4;
    FansForm *widget_3;
    QWidget *page_Trader;
    QGridLayout *gridLayout_10;
    TraderForm *widget_4;
    QWidget *page_Store;
    QGridLayout *gridLayout_9;
    StoreForm *widget_5;
    QWidget *page_Merch;
    QGridLayout *gridLayout_7;
    MerchForm *widget_6;
    QWidget *page_Trolley;
    QGridLayout *gridLayout_6;
    TrolleyForm *widget_7;
    QWidget *page_Transa;
    QGridLayout *gridLayout_5;
    TranForm *widget_8;
    QMenuBar *menuBar;
    QMenu *menuUser_info;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setMaximumSize(QSize(1210, 810));
        actionUser = new QAction(MainWindow);
        actionUser->setObjectName(QStringLiteral("actionUser"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon_06.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUser->setIcon(icon);
        actionFans = new QAction(MainWindow);
        actionFans->setObjectName(QStringLiteral("actionFans"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icon_14.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFans->setIcon(icon1);
        actionTrader = new QAction(MainWindow);
        actionTrader->setObjectName(QStringLiteral("actionTrader"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icon_04.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrader->setIcon(icon2);
        actionStore = new QAction(MainWindow);
        actionStore->setObjectName(QStringLiteral("actionStore"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icon_34.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStore->setIcon(icon3);
        actionMerch = new QAction(MainWindow);
        actionMerch->setObjectName(QStringLiteral("actionMerch"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icon_61.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerch->setIcon(icon4);
        actionTransa = new QAction(MainWindow);
        actionTransa->setObjectName(QStringLiteral("actionTransa"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icon_51.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTransa->setIcon(icon5);
        actionTrolley = new QAction(MainWindow);
        actionTrolley->setObjectName(QStringLiteral("actionTrolley"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icon_56.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrolley->setIcon(icon6);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icon_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_Login = new QWidget();
        page_Login->setObjectName(QStringLiteral("page_Login"));
        gridLayout_2 = new QGridLayout(page_Login);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_0 = new LoginForm(page_Login);
        widget_0->setObjectName(QStringLiteral("widget_0"));

        gridLayout_2->addWidget(widget_0, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Login);
        page_home = new QWidget();
        page_home->setObjectName(QStringLiteral("page_home"));
        gridLayout_3 = new QGridLayout(page_home);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_1 = new QWidget(page_home);
        widget_1->setObjectName(QStringLiteral("widget_1"));

        gridLayout_3->addWidget(widget_1, 0, 0, 1, 1);

        stackedWidget->addWidget(page_home);
        page_User = new QWidget();
        page_User->setObjectName(QStringLiteral("page_User"));
        gridLayout_8 = new QGridLayout(page_User);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        widget_2 = new UserForm(page_User);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        gridLayout_8->addWidget(widget_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_User);
        page_Fans = new QWidget();
        page_Fans->setObjectName(QStringLiteral("page_Fans"));
        gridLayout_4 = new QGridLayout(page_Fans);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widget_3 = new FansForm(page_Fans);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        gridLayout_4->addWidget(widget_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Fans);
        page_Trader = new QWidget();
        page_Trader->setObjectName(QStringLiteral("page_Trader"));
        gridLayout_10 = new QGridLayout(page_Trader);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        widget_4 = new TraderForm(page_Trader);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        gridLayout_10->addWidget(widget_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Trader);
        page_Store = new QWidget();
        page_Store->setObjectName(QStringLiteral("page_Store"));
        gridLayout_9 = new QGridLayout(page_Store);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        widget_5 = new StoreForm(page_Store);
        widget_5->setObjectName(QStringLiteral("widget_5"));

        gridLayout_9->addWidget(widget_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Store);
        page_Merch = new QWidget();
        page_Merch->setObjectName(QStringLiteral("page_Merch"));
        gridLayout_7 = new QGridLayout(page_Merch);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        widget_6 = new MerchForm(page_Merch);
        widget_6->setObjectName(QStringLiteral("widget_6"));

        gridLayout_7->addWidget(widget_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Merch);
        page_Trolley = new QWidget();
        page_Trolley->setObjectName(QStringLiteral("page_Trolley"));
        gridLayout_6 = new QGridLayout(page_Trolley);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        widget_7 = new TrolleyForm(page_Trolley);
        widget_7->setObjectName(QStringLiteral("widget_7"));

        gridLayout_6->addWidget(widget_7, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Trolley);
        page_Transa = new QWidget();
        page_Transa->setObjectName(QStringLiteral("page_Transa"));
        gridLayout_5 = new QGridLayout(page_Transa);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widget_8 = new TranForm(page_Transa);
        widget_8->setObjectName(QStringLiteral("widget_8"));

        gridLayout_5->addWidget(widget_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Transa);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 26));
        menuUser_info = new QMenu(menuBar);
        menuUser_info->setObjectName(QStringLiteral("menuUser_info"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        mainToolBar->setAllowedAreas(Qt::AllToolBarAreas);
        mainToolBar->setOrientation(Qt::Vertical);
        mainToolBar->setIconSize(QSize(60, 60));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuUser_info->menuAction());
        menuUser_info->addAction(actionUser);
        menuUser_info->addAction(actionFans);
        menuUser_info->addAction(actionTrader);
        menuUser_info->addAction(actionStore);
        menuUser_info->addAction(actionMerch);
        menuUser_info->addAction(actionTrolley);
        menuUser_info->addAction(actionTransa);
        menuUser_info->addAction(actionHome);
        mainToolBar->addAction(actionHome);
        mainToolBar->addAction(actionUser);
        mainToolBar->addAction(actionFans);
        mainToolBar->addAction(actionTrader);
        mainToolBar->addAction(actionStore);
        mainToolBar->addAction(actionMerch);
        mainToolBar->addAction(actionTrolley);
        mainToolBar->addAction(actionTransa);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionUser->setText(QApplication::translate("MainWindow", "User", Q_NULLPTR));
        actionFans->setText(QApplication::translate("MainWindow", "Fans", Q_NULLPTR));
        actionTrader->setText(QApplication::translate("MainWindow", "Trader", Q_NULLPTR));
        actionStore->setText(QApplication::translate("MainWindow", "Store", Q_NULLPTR));
        actionMerch->setText(QApplication::translate("MainWindow", "Merch", Q_NULLPTR));
        actionTransa->setText(QApplication::translate("MainWindow", "Transa", Q_NULLPTR));
        actionTrolley->setText(QApplication::translate("MainWindow", "Trolley", Q_NULLPTR));
        actionHome->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        menuUser_info->setTitle(QApplication::translate("MainWindow", "sub_system", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
