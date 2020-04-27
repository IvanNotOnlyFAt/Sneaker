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


}

SneakerTraClient::~SneakerTraClient()
{
    delete ui;
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
