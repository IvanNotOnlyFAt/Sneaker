#include "sneakertraclient.h"
#include "ui_sneakertraclient.h"
#include "globalvars.h"

#include <QStringBuilder>

SneakerTraClient::SneakerTraClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SneakerTraClient)
{
    ui->setupUi(this);
    ui->menuBar->hide();
    ui->statusBar->hide();
    this->setContextMenuPolicy(Qt::NoContextMenu);

    m_isCloseSystem = false;
    ///stack法
    this->setCentralWidget(ui->stackedWidget);
    ui->mainToolBar->hide();

    m_msgSocket = new MsgSocket;
    m_cloginForm = new CLoginForm;
    m_fansInfoForm = new FansInfoForm;
    m_traderInfoForm = new TraderInfoForm;

    m_fansHomeForm = new FansHomeForm;
    m_trolleyForm = new TrolleyForm;
    m_fansTranscForm = new FansTranscForm;
    m_fansChangePswdForm = new FansChangePswdForm;

    m_traderHomeForm = new TraderHomeForm;
    m_traderStoreForm = new TraderStoreForm;
    m_merchForm = new MerchForm;
    m_traderTranscForm = new TraderTranscForm;
    m_traderChangePswd = new TraderChangePswdForm;
    //////////////////////////////////////////////////////////////
    connect(m_cloginForm, SIGNAL(signalUserLogin(QString,QString)),
            this, SLOT(slotUserLogin(QString,QString)));
    connect(m_msgSocket, SIGNAL(signalUserLoginResult(bool)),
            this, SLOT(slotUserLoginResult(bool)));
    connect(m_cloginForm, SIGNAL(signalUserLogout()),
            this, SLOT(slotUserLogout()));
    connect(m_msgSocket, SIGNAL(signalUserLogoutResult(bool)),
            this, SLOT(slotUserLogoutResult(bool)));

    connect(m_cloginForm, SIGNAL(signalUserClose()),
            this, SLOT(slotUserClose()));

    ///////////////////////////////////////////////////////////////
    ui->stackedWidget->insertWidget(0,m_fansHomeForm);
    ui->stackedWidget->insertWidget(1,m_trolleyForm);
    ui->stackedWidget->insertWidget(2,m_fansTranscForm);
    ui->stackedWidget->insertWidget(3,m_fansChangePswdForm);
    ui->stackedWidget->insertWidget(4,m_traderHomeForm);
    ui->stackedWidget->insertWidget(5,m_traderStoreForm);
    ui->stackedWidget->insertWidget(6,m_merchForm);
    ui->stackedWidget->insertWidget(7,m_traderTranscForm);
    ui->stackedWidget->insertWidget(8,m_traderChangePswd);
    ui->stackedWidget->insertWidget(9,m_cloginForm);
    //为了用m_cloginForm对象进行connect，所以后续再把登录界面插入到stackedwidget
    ui->stackedWidget->insertWidget(10,m_fansInfoForm);
    ui->stackedWidget->insertWidget(11,m_traderInfoForm);
    ui->stackedWidget->setCurrentIndex(9);
    ///////////////////////////
    m_msgSocket->start();
    //////////////////////////
}

SneakerTraClient::~SneakerTraClient()
{
    //////////////////////////
    m_msgSocket->exitThread();
    if(m_msgSocket->wait())
    {
        delete m_msgSocket;
    }
    delete ui;
}
void SneakerTraClient::slotUserClose(void)
{
    m_isCloseSystem = true;
}
void SneakerTraClient::closeEvent(QCloseEvent *ev)
{
    //accept标志也可以用accept（）设置，并用ignore（）清除。
    if(!m_isCloseSystem)
    {
        slotUserLogout();
        ev->ignore();
    }else
    {
        ev->accept();
    }
}
///////////////////////INIT//////////////////////////////////
void SneakerTraClient::initFansMS(void)
{
    //insert stack1
    //stacked:1~5
    QString title = QString("Sneaker|吾鞋  鞋友-[" % GlobalVars::g_localUser->getID() % "]");
    this->setWindowTitle(title);
    connect(m_msgSocket, SIGNAL(signalGainFansInfo(bool)),
            m_fansInfoForm, SLOT(slotGainFansInfoResult(bool)));

    ui->mainToolBar->removeAction(ui->actionMerch);
    ui->mainToolBar->removeAction(ui->actionStore);
    ui->mainToolBar->removeAction(ui->actionTraderChangePswd);
    ui->mainToolBar->removeAction(ui->actionTraderHome);
    ui->mainToolBar->removeAction(ui->actionTraderInfo);
    ui->mainToolBar->removeAction(ui->actionTraderTransc);

    on_actionFansInfo_triggered();

}
void SneakerTraClient::initTraderMs(void)
{
    //insert stack6
    //stacked:6~11
    QString title = QString("Sneaker|吾鞋  鞋商-[" % GlobalVars::g_localUser->getID() % "]");
    this->setWindowTitle(title);
    connect(m_msgSocket, SIGNAL(signalGainTraderInfo(bool)),
            m_traderInfoForm, SLOT(slotGainTraderInfoResult(bool)));

    ui->mainToolBar->removeAction(ui->actionFansChangPswd);
    ui->mainToolBar->removeAction(ui->actionFansHome);
    ui->mainToolBar->removeAction(ui->actionTrolley);
    ui->mainToolBar->removeAction(ui->actionFansInfo);
    ui->mainToolBar->removeAction(ui->actionFansTranscation);

    on_actionTraderInfo_triggered();
}
///////////////////////SLOT//////////////////////////////////
void SneakerTraClient::slotUserLogin(QString id, QString pswd)
{
    ///用户请求登录
    QString msg = QString(CMD_UserLogin_L)
            % QString("#") % id
            % QString("|") % pswd;
    m_msgSocket->slotSendMsg(msg);
}
void SneakerTraClient::slotUserLoginResult(bool res)
{
    if(res)
    {
        if(GlobalVars::g_localUser->getRole() == "鞋友")
        {
            initFansMS();
        }else if(GlobalVars::g_localUser->getRole() == "鞋商")
        {
            initTraderMs();
        }
        ui->mainToolBar->show();

        ///用户详细信息请求
        QString msg = QString(CMD_UserInfo_I)
                % QString("#") % QString(GlobalVars::g_localUser->getID())
                % QString("|") % QString(GlobalVars::g_localUser->getRole());
        m_msgSocket->slotSendMsg(msg);
    }else
    {
        m_cloginForm->userLoginFail();
    }
}
void SneakerTraClient::slotUserLogout(void)
{
    ///用户请求退出
    QString msg = QString(CMD_UserExit_X)
            % QString("#") % GlobalVars::g_localUser->getID();
    m_msgSocket->slotSendMsg(msg);
}
void SneakerTraClient::slotUserLogoutResult(bool res)
{
    if(res)
    {
        m_isCloseSystem = res;
        this->close();
    }
}
/////////////////////////////Fans//////////////////////////////////

void SneakerTraClient::on_actionFansInfo_triggered()
{
    ui->stackedWidget->setCurrentIndex(10);
    ui->actionFansChangPswd->setEnabled(true);
    ui->actionFansHome->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionFansInfo->setEnabled(false);
    ui->actionFansTranscation->setEnabled(true);
}

void SneakerTraClient::on_actionFansHome_triggered()
{

    ui->stackedWidget->setCurrentIndex(0);
    ui->actionFansChangPswd->setEnabled(true);
    ui->actionFansHome->setEnabled(false);
    ui->actionTrolley->setEnabled(true);
    ui->actionFansInfo->setEnabled(true);
    ui->actionFansTranscation->setEnabled(true);
}

void SneakerTraClient::on_actionTrolley_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->actionFansChangPswd->setEnabled(true);
    ui->actionFansHome->setEnabled(true);
    ui->actionTrolley->setEnabled(false);
    ui->actionFansInfo->setEnabled(true);
    ui->actionFansTranscation->setEnabled(true);
}

void SneakerTraClient::on_actionFansTranscation_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->actionFansChangPswd->setEnabled(true);
    ui->actionFansHome->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionFansInfo->setEnabled(true);
    ui->actionFansTranscation->setEnabled(false);
}

void SneakerTraClient::on_actionFansChangPswd_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->actionFansChangPswd->setEnabled(false);
    ui->actionFansHome->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionFansInfo->setEnabled(true);
    ui->actionFansTranscation->setEnabled(true);
}

/////////////////////////////Trader//////////////////////////////////

void SneakerTraClient::on_actionTraderInfo_triggered()
{
    ui->stackedWidget->setCurrentIndex(11);
    ui->actionMerch->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionTraderChangePswd->setEnabled(true);
    ui->actionTraderHome->setEnabled(true);
    ui->actionTraderInfo->setEnabled(false);
    ui->actionTraderTransc->setEnabled(true);
}

void SneakerTraClient::on_actionTraderHome_triggered()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->actionMerch->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionTraderChangePswd->setEnabled(true);
    ui->actionTraderHome->setEnabled(false);
    ui->actionTraderInfo->setEnabled(true);
    ui->actionTraderTransc->setEnabled(true);
}

void SneakerTraClient::on_actionStore_triggered()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->actionMerch->setEnabled(true);
    ui->actionStore->setEnabled(false);
    ui->actionTraderChangePswd->setEnabled(true);
    ui->actionTraderHome->setEnabled(true);
    ui->actionTraderInfo->setEnabled(true);
    ui->actionTraderTransc->setEnabled(true);
}

void SneakerTraClient::on_actionMerch_triggered()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->actionMerch->setEnabled(false);
    ui->actionStore->setEnabled(true);
    ui->actionTraderChangePswd->setEnabled(true);
    ui->actionTraderHome->setEnabled(true);
    ui->actionTraderInfo->setEnabled(true);
    ui->actionTraderTransc->setEnabled(true);
}

void SneakerTraClient::on_actionTraderTransc_triggered()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->actionMerch->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionTraderChangePswd->setEnabled(true);
    ui->actionTraderHome->setEnabled(true);
    ui->actionTraderInfo->setEnabled(true);
    ui->actionTraderTransc->setEnabled(false);
}

void SneakerTraClient::on_actionTraderChangePswd_triggered()
{
    ui->stackedWidget->setCurrentIndex(8);
    ui->actionMerch->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionTraderChangePswd->setEnabled(false);
    ui->actionTraderHome->setEnabled(true);
    ui->actionTraderInfo->setEnabled(true);
    ui->actionTraderTransc->setEnabled(true);
}
