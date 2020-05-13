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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "cloginform.h"
#include "fanschangepswdform.h"
#include "fanshomeform.h"
#include "fansinfoform.h"
#include "fanstranscform.h"
#include "merchform.h"
#include "storeform.h"
#include "traderchangepswdform.h"
#include "traderhomeform.h"
#include "traderinfoform.h"
#include "tradertranscform.h"
#include "trolleyform.h"

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
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_Login;
    QGridLayout *gridLayout_2;
    CLoginForm *widget_Login;
    QWidget *page_FanInfo;
    QGridLayout *gridLayout_3;
    FansInfoForm *widget_FansInfo;
    QWidget *page_FansHome;
    QGridLayout *gridLayout_4;
    FansHomeForm *widget_FHome;
    QWidget *page_Trolley;
    QGridLayout *gridLayout_5;
    TrolleyForm *widget_Trolley;
    QWidget *page_FansTran;
    QGridLayout *gridLayout_6;
    FansTranscForm *widget_FTran;
    QWidget *page_FansChangPswd;
    QGridLayout *gridLayout_7;
    FansChangePswdForm *widget_FCPswd;
    QWidget *page_TraderInfo;
    QGridLayout *gridLayout_8;
    TraderInfoForm *widget_TraderInfo;
    QWidget *page_TraderHome;
    QGridLayout *gridLayout_9;
    TraderHomeForm *widget_THome;
    QWidget *page_Store;
    QGridLayout *gridLayout_10;
    StoreForm *widget_Store;
    QWidget *page_Merch;
    QGridLayout *gridLayout_11;
    MerchForm *widget_Merch;
    QWidget *page_TraderTran;
    QGridLayout *gridLayout_12;
    TraderTranscForm *widget_TTran;
    QWidget *page_TraderChangPswd;
    QGridLayout *gridLayout_13;
    TraderChangePswdForm *widget_TCPswd;
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
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_Login = new QWidget();
        page_Login->setObjectName(QStringLiteral("page_Login"));
        page_Login->setStyleSheet(QLatin1String("\n"
"/*background-image: url(:/images/back3.png);"));
        gridLayout_2 = new QGridLayout(page_Login);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_Login = new CLoginForm(page_Login);
        widget_Login->setObjectName(QStringLiteral("widget_Login"));
        widget_Login->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(widget_Login, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Login);
        page_FanInfo = new QWidget();
        page_FanInfo->setObjectName(QStringLiteral("page_FanInfo"));
        gridLayout_3 = new QGridLayout(page_FanInfo);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_FansInfo = new FansInfoForm(page_FanInfo);
        widget_FansInfo->setObjectName(QStringLiteral("widget_FansInfo"));

        gridLayout_3->addWidget(widget_FansInfo, 0, 0, 1, 1);

        stackedWidget->addWidget(page_FanInfo);
        page_FansHome = new QWidget();
        page_FansHome->setObjectName(QStringLiteral("page_FansHome"));
        gridLayout_4 = new QGridLayout(page_FansHome);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widget_FHome = new FansHomeForm(page_FansHome);
        widget_FHome->setObjectName(QStringLiteral("widget_FHome"));

        gridLayout_4->addWidget(widget_FHome, 0, 0, 1, 1);

        stackedWidget->addWidget(page_FansHome);
        page_Trolley = new QWidget();
        page_Trolley->setObjectName(QStringLiteral("page_Trolley"));
        gridLayout_5 = new QGridLayout(page_Trolley);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widget_Trolley = new TrolleyForm(page_Trolley);
        widget_Trolley->setObjectName(QStringLiteral("widget_Trolley"));

        gridLayout_5->addWidget(widget_Trolley, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Trolley);
        page_FansTran = new QWidget();
        page_FansTran->setObjectName(QStringLiteral("page_FansTran"));
        gridLayout_6 = new QGridLayout(page_FansTran);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        widget_FTran = new FansTranscForm(page_FansTran);
        widget_FTran->setObjectName(QStringLiteral("widget_FTran"));

        gridLayout_6->addWidget(widget_FTran, 0, 0, 1, 1);

        stackedWidget->addWidget(page_FansTran);
        page_FansChangPswd = new QWidget();
        page_FansChangPswd->setObjectName(QStringLiteral("page_FansChangPswd"));
        gridLayout_7 = new QGridLayout(page_FansChangPswd);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        widget_FCPswd = new FansChangePswdForm(page_FansChangPswd);
        widget_FCPswd->setObjectName(QStringLiteral("widget_FCPswd"));

        gridLayout_7->addWidget(widget_FCPswd, 0, 0, 1, 1);

        stackedWidget->addWidget(page_FansChangPswd);
        page_TraderInfo = new QWidget();
        page_TraderInfo->setObjectName(QStringLiteral("page_TraderInfo"));
        gridLayout_8 = new QGridLayout(page_TraderInfo);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        widget_TraderInfo = new TraderInfoForm(page_TraderInfo);
        widget_TraderInfo->setObjectName(QStringLiteral("widget_TraderInfo"));

        gridLayout_8->addWidget(widget_TraderInfo, 0, 0, 1, 1);

        stackedWidget->addWidget(page_TraderInfo);
        page_TraderHome = new QWidget();
        page_TraderHome->setObjectName(QStringLiteral("page_TraderHome"));
        gridLayout_9 = new QGridLayout(page_TraderHome);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        widget_THome = new TraderHomeForm(page_TraderHome);
        widget_THome->setObjectName(QStringLiteral("widget_THome"));

        gridLayout_9->addWidget(widget_THome, 0, 0, 1, 1);

        stackedWidget->addWidget(page_TraderHome);
        page_Store = new QWidget();
        page_Store->setObjectName(QStringLiteral("page_Store"));
        gridLayout_10 = new QGridLayout(page_Store);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        widget_Store = new StoreForm(page_Store);
        widget_Store->setObjectName(QStringLiteral("widget_Store"));

        gridLayout_10->addWidget(widget_Store, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Store);
        page_Merch = new QWidget();
        page_Merch->setObjectName(QStringLiteral("page_Merch"));
        gridLayout_11 = new QGridLayout(page_Merch);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        widget_Merch = new MerchForm(page_Merch);
        widget_Merch->setObjectName(QStringLiteral("widget_Merch"));

        gridLayout_11->addWidget(widget_Merch, 0, 0, 1, 1);

        stackedWidget->addWidget(page_Merch);
        page_TraderTran = new QWidget();
        page_TraderTran->setObjectName(QStringLiteral("page_TraderTran"));
        gridLayout_12 = new QGridLayout(page_TraderTran);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        widget_TTran = new TraderTranscForm(page_TraderTran);
        widget_TTran->setObjectName(QStringLiteral("widget_TTran"));

        gridLayout_12->addWidget(widget_TTran, 0, 0, 1, 1);

        stackedWidget->addWidget(page_TraderTran);
        page_TraderChangPswd = new QWidget();
        page_TraderChangPswd->setObjectName(QStringLiteral("page_TraderChangPswd"));
        gridLayout_13 = new QGridLayout(page_TraderChangPswd);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        widget_TCPswd = new TraderChangePswdForm(page_TraderChangPswd);
        widget_TCPswd->setObjectName(QStringLiteral("widget_TCPswd"));

        gridLayout_13->addWidget(widget_TCPswd, 0, 0, 1, 1);

        stackedWidget->addWidget(page_TraderChangPswd);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

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

        stackedWidget->setCurrentIndex(0);


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
