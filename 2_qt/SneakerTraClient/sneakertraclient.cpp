#include "sneakertraclient.h"
#include "ui_sneakertraclient.h"



SneakerTraClient::SneakerTraClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SneakerTraClient)
{
    ui->setupUi(this);
    ui->menuBar->hide();
    ui->statusBar->hide();
    this->setContextMenuPolicy(Qt::NoContextMenu);


//    this->setCentralWidget(ui->widget);
//    FansChangePswdForm *fansChangePswdForm = new FansChangePswdForm(ui->widget);
//    fansChangePswdForm->show();
    ///stack法
    this->setCentralWidget(ui->stackedWidget);
    ui->mainToolBar->hide();
    ui->stackedWidget->setCurrentIndex(0);
}

SneakerTraClient::~SneakerTraClient()
{
    delete ui;
}

void SneakerTraClient::initFansMS(void)
{

}
void SneakerTraClient::initTraderMs(void)
{

}

void SneakerTraClient::slotUserLogin(QString id, QString pswd)
{

}
void SneakerTraClient::slotUserLoginResult(bool res)
{

}
void SneakerTraClient::slotUserLogout(void)
{

}
void SneakerTraClient::slotUserLogoutResult(bool res)
{

}
/////////////////////////////Fans//////////////////////////////////

void SneakerTraClient::on_actionFansInfo_triggered()
{

}

void SneakerTraClient::on_actionFansHome_triggered()
{

}

void SneakerTraClient::on_actionTrolley_triggered()
{

}

void SneakerTraClient::on_actionFansTranscation_triggered()
{

}

void SneakerTraClient::on_actionFansChangPswd_triggered()
{

}

/////////////////////////////Trader//////////////////////////////////

void SneakerTraClient::on_actionTraderInfo_triggered()
{

}

void SneakerTraClient::on_actionTraderHome_triggered()
{

}

void SneakerTraClient::on_actionStore_triggered()
{

}

void SneakerTraClient::on_actionMerch_triggered()
{

}

void SneakerTraClient::on_actionTraderTransc_triggered()
{

}

void SneakerTraClient::on_actionTraderChangePswd_triggered()
{

}
