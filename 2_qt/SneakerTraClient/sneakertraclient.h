#ifndef SNEAKERTRACLIENT_H
#define SNEAKERTRACLIENT_H
#include "cloginform.h"
#include "fanschangepswdform.h"
#include "fanshomeform.h"
#include "fansinfoform.h"
#include "fanstranscform.h"
#include "trolleyform.h"

#include "merchform.h"
#include "traderstoreform.h"
#include "traderchangepswdform.h"
#include "traderhomeform.h"
#include "traderinfoform.h"
#include "tradertranscform.h"

#include "msgsocket.h"
#include <QMainWindow>

namespace Ui {
class SneakerTraClient;
}

class SneakerTraClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SneakerTraClient(QWidget *parent = 0);
    ~SneakerTraClient();
public slots:
    void slotUserLogin(QString id, QString pswd);
    void slotUserLoginResult(bool res);
    void slotUserLogout(void);
    void slotUserLogoutResult(bool res);
    void slotUserClose(void);

protected:
    void closeEvent(QCloseEvent *ev);

private slots:
    void on_actionFansInfo_triggered();
    void on_actionFansHome_triggered();
    void on_actionTrolley_triggered();
    void on_actionFansChangPswd_triggered();
    void on_actionFansTranscation_triggered();
    void on_actionTraderInfo_triggered();
    void on_actionTraderHome_triggered();
    void on_actionStore_triggered();
    void on_actionMerch_triggered();
    void on_actionTraderTransc_triggered();
    void on_actionTraderChangePswd_triggered();
    void slotRefreshStoreData();
    void slotRefreshHomeData();
    void slotApplyStoreLogo();
    void slotApplyMerchPhoto();
    void slotAddStore(QString msg, QByteArray image);
    void slotAddMerch(QString msg, QByteArray image);
    void slotDeleteStoreItem(QString msg);
    void slotDeleteMerchItem(QString msg);
    void slotHomeStoreApply(QString msg);
    void slotHomeMerchApply(QString msg);
    void slotRefreshMerchData();

private:
    Ui::SneakerTraClient *ui;
//    bool m_isCloseLog;

    bool m_isCloseSystem;
    MsgSocket *m_msgSocket;

    CLoginForm *m_cloginForm;
    FansInfoForm *m_fansInfoForm;
    TraderInfoForm *m_traderInfoForm;

    FansHomeForm *m_fansHomeForm;
    TrolleyForm *m_trolleyForm;
    FansTranscForm *m_fansTranscForm;
    FansChangePswdForm *m_fansChangePswdForm;

    TraderHomeForm *m_traderHomeForm;
    TraderStoreForm *m_traderStoreForm;
    MerchForm *m_merchForm;
    TraderTranscForm *m_traderTranscForm;
    TraderChangePswdForm *m_traderChangePswd;

    int m_logIndex;

    void initFansMS(void);
    void initTraderMs(void);


};

#endif // SNEAKERTRACLIENT_H
