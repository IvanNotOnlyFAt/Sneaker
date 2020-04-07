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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
    QWidget *widget;
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 23));
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
