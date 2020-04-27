/********************************************************************************
** Form generated from reading UI file 'sneakertraclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNEAKERTRACLIENT_H
#define UI_SNEAKERTRACLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SneakerTraClient
{
public:
    QAction *actionFansInfo;
    QAction *actionTraderInfo;
    QAction *actionFansHome;
    QAction *actionTrolley;
    QAction *actionFansTranscation;
    QAction *actionFansChangPswd;
    QAction *actionTraderHome;
    QAction *actionStore;
    QAction *actionMerch;
    QAction *actionTraderTransc;
    QAction *actionTraderChangePswd;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFansActions;
    QMenu *menuTraderActions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SneakerTraClient)
    {
        if (SneakerTraClient->objectName().isEmpty())
            SneakerTraClient->setObjectName(QStringLiteral("SneakerTraClient"));
        SneakerTraClient->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(120);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SneakerTraClient->sizePolicy().hasHeightForWidth());
        SneakerTraClient->setSizePolicy(sizePolicy);
        SneakerTraClient->setMinimumSize(QSize(1200, 800));
        SneakerTraClient->setMaximumSize(QSize(1210, 810));
        SneakerTraClient->setIconSize(QSize(60, 60));
        SneakerTraClient->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        SneakerTraClient->setAnimated(true);
        actionFansInfo = new QAction(SneakerTraClient);
        actionFansInfo->setObjectName(QStringLiteral("actionFansInfo"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon_47.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFansInfo->setIcon(icon);
        actionTraderInfo = new QAction(SneakerTraClient);
        actionTraderInfo->setObjectName(QStringLiteral("actionTraderInfo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icon_04.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraderInfo->setIcon(icon1);
        actionFansHome = new QAction(SneakerTraClient);
        actionFansHome->setObjectName(QStringLiteral("actionFansHome"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icon_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFansHome->setIcon(icon2);
        actionTrolley = new QAction(SneakerTraClient);
        actionTrolley->setObjectName(QStringLiteral("actionTrolley"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icon_57.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrolley->setIcon(icon3);
        actionFansTranscation = new QAction(SneakerTraClient);
        actionFansTranscation->setObjectName(QStringLiteral("actionFansTranscation"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icon_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFansTranscation->setIcon(icon4);
        actionFansChangPswd = new QAction(SneakerTraClient);
        actionFansChangPswd->setObjectName(QStringLiteral("actionFansChangPswd"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icon_21.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFansChangPswd->setIcon(icon5);
        actionTraderHome = new QAction(SneakerTraClient);
        actionTraderHome->setObjectName(QStringLiteral("actionTraderHome"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icon_66.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraderHome->setIcon(icon6);
        actionStore = new QAction(SneakerTraClient);
        actionStore->setObjectName(QStringLiteral("actionStore"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icon_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStore->setIcon(icon7);
        actionMerch = new QAction(SneakerTraClient);
        actionMerch->setObjectName(QStringLiteral("actionMerch"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/icon_61.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerch->setIcon(icon8);
        actionTraderTransc = new QAction(SneakerTraClient);
        actionTraderTransc->setObjectName(QStringLiteral("actionTraderTransc"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/icon_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraderTransc->setIcon(icon9);
        actionTraderChangePswd = new QAction(SneakerTraClient);
        actionTraderChangePswd->setObjectName(QStringLiteral("actionTraderChangePswd"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/icon_23.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraderChangePswd->setIcon(icon10);
        centralWidget = new QWidget(SneakerTraClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SneakerTraClient->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SneakerTraClient);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 26));
        menuFansActions = new QMenu(menuBar);
        menuFansActions->setObjectName(QStringLiteral("menuFansActions"));
        menuTraderActions = new QMenu(menuBar);
        menuTraderActions->setObjectName(QStringLiteral("menuTraderActions"));
        SneakerTraClient->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SneakerTraClient);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(60, 60));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        SneakerTraClient->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SneakerTraClient);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SneakerTraClient->setStatusBar(statusBar);

        menuBar->addAction(menuFansActions->menuAction());
        menuBar->addAction(menuTraderActions->menuAction());
        menuFansActions->addAction(actionFansInfo);
        menuFansActions->addAction(actionFansHome);
        menuFansActions->addAction(actionTrolley);
        menuFansActions->addAction(actionFansTranscation);
        menuFansActions->addAction(actionFansChangPswd);
        menuTraderActions->addAction(actionTraderInfo);
        menuTraderActions->addAction(actionTraderHome);
        menuTraderActions->addAction(actionStore);
        menuTraderActions->addAction(actionMerch);
        menuTraderActions->addAction(actionTraderTransc);
        menuTraderActions->addAction(actionTraderChangePswd);
        mainToolBar->addAction(actionFansInfo);
        mainToolBar->addAction(actionTraderInfo);
        mainToolBar->addAction(actionFansHome);
        mainToolBar->addAction(actionTrolley);
        mainToolBar->addAction(actionFansTranscation);
        mainToolBar->addAction(actionFansChangPswd);
        mainToolBar->addAction(actionTraderHome);
        mainToolBar->addAction(actionStore);
        mainToolBar->addAction(actionMerch);
        mainToolBar->addAction(actionTraderTransc);
        mainToolBar->addAction(actionTraderChangePswd);

        retranslateUi(SneakerTraClient);

        QMetaObject::connectSlotsByName(SneakerTraClient);
    } // setupUi

    void retranslateUi(QMainWindow *SneakerTraClient)
    {
        SneakerTraClient->setWindowTitle(QApplication::translate("SneakerTraClient", "SneakerTraClient", Q_NULLPTR));
        actionFansInfo->setText(QApplication::translate("SneakerTraClient", "FansInfo", Q_NULLPTR));
        actionTraderInfo->setText(QApplication::translate("SneakerTraClient", "TraderInfo", Q_NULLPTR));
        actionFansHome->setText(QApplication::translate("SneakerTraClient", "FansHome", Q_NULLPTR));
        actionTrolley->setText(QApplication::translate("SneakerTraClient", "Trolley", Q_NULLPTR));
        actionFansTranscation->setText(QApplication::translate("SneakerTraClient", "FansTransc", Q_NULLPTR));
        actionFansChangPswd->setText(QApplication::translate("SneakerTraClient", "FansChangePswd", Q_NULLPTR));
        actionTraderHome->setText(QApplication::translate("SneakerTraClient", "TraderHome", Q_NULLPTR));
        actionStore->setText(QApplication::translate("SneakerTraClient", "Store", Q_NULLPTR));
        actionMerch->setText(QApplication::translate("SneakerTraClient", "Merch", Q_NULLPTR));
        actionTraderTransc->setText(QApplication::translate("SneakerTraClient", "TraderTransc", Q_NULLPTR));
        actionTraderChangePswd->setText(QApplication::translate("SneakerTraClient", "TraderChangePswd", Q_NULLPTR));
        menuFansActions->setTitle(QApplication::translate("SneakerTraClient", "FansActions", Q_NULLPTR));
        menuTraderActions->setTitle(QApplication::translate("SneakerTraClient", "TraderActions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SneakerTraClient: public Ui_SneakerTraClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNEAKERTRACLIENT_H
