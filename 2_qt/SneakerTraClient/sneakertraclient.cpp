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
//    qDebug() << "1111111111111" <<m_msgSocket->connectStatus();
//    if(!m_msgSocket->connectStatus())  //如果没有连接是可以退出关闭的
//    {
//        m_isCloseSystem = true;
//    }
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
    /****************************************************************/
    ///申请
    connect(m_fansHomeForm, SIGNAL(signalRefreshHomeData()),
            this, SLOT(slotRefreshHomeData()));//用于再次刷新获取消息
    connect(m_fansHomeForm, SIGNAL(signalHomeStoreApply(QString)),
            this, SLOT(slotHomeStoreApply(QString)));//申请商店详情
    connect(m_fansHomeForm, SIGNAL(signalHomeMerchApply(QString)),
            this, SLOT(slotHomeMerchApply(QString)));//申请商品详情
    ///结果
    connect(m_msgSocket, SIGNAL(signalGainHomeInfo(bool)),
            m_fansHomeForm, SLOT(slotGainHomeInfo(bool)));//获得主页信息简表
    connect(m_msgSocket, SIGNAL(signalGainHomeStorePhoto(bool)),
            m_fansHomeForm, SLOT(slotGainHomeStorePhoto(bool)));//获得主页商店信息
    connect(m_msgSocket, SIGNAL(signalGainHomeMerchPhoto(bool)),
            m_fansHomeForm, SLOT(slotGainHomeMerchPhoto(bool)));//获得主页商品简表

     /*********************************************************************/
    //////////////////////相关界面配置/////////////////////////
    ui->mainToolBar->removeAction(ui->actionMerch);
    ui->mainToolBar->removeAction(ui->actionStore);
    ui->mainToolBar->removeAction(ui->actionTraderChangePswd);
    ui->mainToolBar->removeAction(ui->actionTraderHome);
    ui->mainToolBar->removeAction(ui->actionTraderInfo);
    ui->mainToolBar->removeAction(ui->actionTraderTransc);

    on_actionFansInfo_triggered();
    //////////////////////相关数据请求/////////////////////////
    slotRefreshHomeData();

}
void SneakerTraClient::initTraderMs(void)
{
    //insert stack6
    //stacked:6~11
    QString title = QString("Sneaker|吾鞋  鞋商-[" % GlobalVars::g_localUser->getID() % "]");
    this->setWindowTitle(title);
    connect(m_msgSocket, SIGNAL(signalGainTraderInfo(bool)),
            m_traderInfoForm, SLOT(slotGainTraderInfoResult(bool)));    //商户信息结果
    /***********************************商店*********************************************/
    ///申请
    connect(m_traderStoreForm, SIGNAL(signalRefreshStoreData()),
            this, SLOT(slotRefreshStoreData()));                        //更新商店信息申请
    connect(m_traderStoreForm, SIGNAL(signalApplyStoreLogo()),
            this, SLOT(slotApplyStoreLogo()));                          //申请商店图片
    connect(m_traderStoreForm, SIGNAL(signalAddStore(QString,QByteArray)),
            this,SLOT(slotAddStore(QString,QByteArray)));               //申请开店
    connect(m_traderStoreForm, SIGNAL(signalDeleteStoreItem(QString)),
            this, SLOT(slotDeleteStoreItem(QString)));              //申请注销店铺
    ///结果
    connect(m_msgSocket, SIGNAL(signalGainStoreInfo(bool)),
            m_traderStoreForm, SLOT(slotGainStoreInfoResult(bool)));    //商店信息结果
    connect(m_msgSocket, SIGNAL(signalApplyStoreResult(bool,QString)),
            m_traderStoreForm, SLOT(slotApplyStoreResult(bool,QString)));    //商店开通申请结果
    connect(m_msgSocket, SIGNAL(signalGainStoreLogo(bool)),
            m_traderStoreForm, SLOT(slotGainStoreLogoResult(bool)));        //商店图片结果
    connect(m_msgSocket, SIGNAL(signalDeleteStoreResult(bool)),
            m_traderStoreForm, SLOT(slotDeleteStoreResult(bool)));        //商店删除结果

    /*************************************商品*******************************************/
    ///申请
    connect(m_traderStoreForm, SIGNAL(signalAroundMerch()),
            m_merchForm, SLOT(slotAroundMerch()));        //商品页开始初始化申请
    connect(m_merchForm, SIGNAL(signalRefreshMerchData()),
            this, SLOT(slotRefreshMerchData()));          //商品页申请
    connect(m_merchForm, SIGNAL(signalApplyMerchPhoto()),
            this, SLOT(slotApplyMerchPhoto()));                      //商品图片申请
    connect(m_merchForm, SIGNAL(signalAddMerch(QString,QByteArray)),
            this,SLOT(slotAddStore(QString,QByteArray)));               //申请添加商品
    connect(m_merchForm, SIGNAL(signalDeleteMerch(QString)),
            this, SLOT(slotDeleteMerchItem(QString)));              //申请删除商品
    ///结果
    connect(m_msgSocket, SIGNAL(signalGainMerchInfo(bool)),
            m_merchForm, SLOT(slotGainMerchInfoResult(bool)));    //商品信息结果
    connect(m_msgSocket, SIGNAL(signalGainMerchHostPhoto(bool)),
            m_merchForm, SLOT(slotGainMerchHostPhotoResult(bool)));        //商品图片结果
    connect(m_msgSocket, SIGNAL(signalApplyMerchResult(bool,QString)),
            m_merchForm, SLOT(slotApplyMerchResult(bool,QString)));    //商品add结果
    connect(m_msgSocket, SIGNAL(signalDeleteMerchResult(bool)),
            m_merchForm, SLOT(slotDeleteMerchResult(bool)));        //商品删除结果

    //////////////////////相关界面配置/////////////////////////
    ui->mainToolBar->removeAction(ui->actionFansChangPswd);
    ui->mainToolBar->removeAction(ui->actionFansHome);
    ui->mainToolBar->removeAction(ui->actionTrolley);
    ui->mainToolBar->removeAction(ui->actionFansInfo);
    ui->mainToolBar->removeAction(ui->actionFansTranscation);
    on_actionTraderInfo_triggered();
    //////////////////////相关数据请求/////////////////////////
    slotRefreshStoreData();

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
        ///用户详细信息请求
        QString msg = QString(CMD_UserInfo_I)
                % QString("#") % QString(GlobalVars::g_localUser->getID())
                % QString("|") % QString(GlobalVars::g_localUser->getRole());
        m_msgSocket->slotSendMsg(msg);
        bool flag = m_msgSocket->wiatToWriteSuccess();  //为防止粘包之后不好解析，一条一条发
        qDebug() << "用户详细信息请求但语句写入：" <<flag;
        if(GlobalVars::g_localUser->getRole() == "鞋友")
        {
            initFansMS();
        }else if(GlobalVars::g_localUser->getRole() == "鞋商")
        {
            initTraderMs();
        }
        ui->mainToolBar->show();

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
//=======================================================//
void SneakerTraClient::slotRefreshStoreData()
{
    ///鞋商商铺详细信息请求
    GlobalVars::g_storeLogoImageMap.clear();
    GlobalVars::g_storeInfoList->clear();
    QString msgforstore = QString(CMD_TraderStore_S)
            % QString("#") % QString(GlobalVars::g_localUser->getID());
    m_msgSocket->slotSendMsg(msgforstore);
}

void SneakerTraClient::slotRefreshHomeData()
{
    ///主页详细信息请求
    GlobalVars::g_HomeMerchInfoList->clear();
    GlobalVars::g_HomeStoreInfoList->clear();
    QString msgforhome = QString(CMD_GetHomePage_Z)
            % QString("#") % QString(GlobalVars::g_localUser->getID());
    m_msgSocket->slotSendMsg(msgforhome);
}

void SneakerTraClient::slotApplyStoreLogo()
{
    QString msgforstore = QString(CMD_ApplyImage_P) % QString(CMD_TraderStore_S)
            % QString("#") % QString(GlobalVars::g_localUser->getID());
    for(StoreInfoList::Iterator it = GlobalVars::g_storeInfoList->begin();
        it != GlobalVars::g_storeInfoList->end(); it++)
    {
        QString msg = QString("|") % it->getID();
        msgforstore.append(msg);
    }
    m_msgSocket->slotSendMsg(msgforstore);
}

void SneakerTraClient::slotApplyMerchPhoto()
{
    QString msgformerch = QString(CMD_ApplyImage_P) % QString(CMD_TraderMerch_M)
            % QString("#") % QString(GlobalVars::g_localUser->getID());
    for(MerchInfoList::Iterator it = GlobalVars::g_merchInfoList->begin();
        it != GlobalVars::g_merchInfoList->end(); it++)
    {
        QString msg = QString("|") % it->getID();
        msgformerch.append(msg);
    }
    m_msgSocket->slotSendMsg(msgformerch);
}

void SneakerTraClient::slotAddStore(QString msg, QByteArray image)
{
    m_msgSocket->slotSendImg(msg, image);
}

void SneakerTraClient::slotAddMerch(QString msg, QByteArray image)
{
    m_msgSocket->slotSendImg(msg, image);
}

void SneakerTraClient::slotDeleteStoreItem(QString msg)
{
    m_msgSocket->slotSendMsg(msg);
}

void SneakerTraClient::slotDeleteMerchItem(QString msg)
{
    m_msgSocket->slotSendMsg(msg);
}

void SneakerTraClient::slotHomeStoreApply(QString msg)
{
    GlobalVars::g_homeStoreInfoMap.clear();
    GlobalVars::g_homeStoreLogoMap.clear();
    m_msgSocket->slotSendMsg(msg);
}

void SneakerTraClient::slotHomeMerchApply(QString msg)
{
    GlobalVars::g_homeMerchInfoMap.clear();
    GlobalVars::g_homeMerchHostMap.clear();
    m_msgSocket->slotSendMsg(msg);
}

void SneakerTraClient::slotRefreshMerchData()
{
    ///鞋商商铺详细信息请求
    GlobalVars::g_merchHostPhotoMap.clear();
    GlobalVars::g_merchInfoList->clear();

    QString msgformerch = QString(CMD_TraderMerch_M) % QString("#") % GlobalVars::g_localTrader->getID();
    for(StoreInfoList::Iterator it = GlobalVars::g_storeInfoList->begin();
        it != GlobalVars::g_storeInfoList->end(); it++)
    {
        QString msg = QString("|") % it->getID();
        msgformerch.append(msg);
    }
    m_msgSocket->slotSendMsg(msgformerch);
}

