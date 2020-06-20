#include "traderinfoform.h"
#include "ui_traderinfoform.h"

#include "globalvars.h"

#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
TraderInfoForm::TraderInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderInfoForm)
{
    ui->setupUi(this);
}

TraderInfoForm::~TraderInfoForm()
{
    delete ui;
}
void TraderInfoForm::slotGainTraderInfoResult(bool res)
{
    if(res)
    {
        ui->le_id->setText(GlobalVars::g_localTrader->getID());
        ui->le_name->setText(GlobalVars::g_localTrader->getName());
        ui->le_idnum->setText(GlobalVars::g_localTrader->getID_Num());
        ui->le_tele->setText(GlobalVars::g_localTrader->getTele());
        emit signalRefreshStoreData();
    }
}
void TraderInfoForm::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/images/1.png");
    p.drawPixmap(0,0,pix);
}
