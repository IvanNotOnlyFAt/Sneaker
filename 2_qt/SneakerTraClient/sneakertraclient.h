#ifndef SNEAKERTRACLIENT_H
#define SNEAKERTRACLIENT_H
#include "cloginform.h"
#include "fanschangepswdform.h"
#include "fanshomeform.h"
#include "fansinfoform.h"
#include "fanstranscform.h"
#include "trolleyform.h"

#include "merchform.h"
#include "storeform.h"
#include "traderchangepswdform.h"
#include "traderhomeform.h"
#include "traderinfoform.h"
#include "tradertranscform.h"

#include "msgsocket.h"
#include <QMainWindow>
#include <QCloseEvent>
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

private:
    Ui::SneakerTraClient *ui;

    bool m_isCloseSystem;
    MsgSocket *m_msgSocket;

    void initFansMS(void);
    void initTraderMs(void);


};

#endif // SNEAKERTRACLIENT_H
