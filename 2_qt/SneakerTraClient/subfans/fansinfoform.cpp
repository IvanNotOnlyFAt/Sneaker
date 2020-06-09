#include "fansinfoform.h"
#include "ui_fansinfoform.h"
#include "globalvars.h"

#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
FansInfoForm::FansInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansInfoForm)
{
    ui->setupUi(this);
}

FansInfoForm::~FansInfoForm()
{
    delete ui;
}
void FansInfoForm::slotGainFansInfoResult(bool res)
{
    if(res)
    {
        ui->le_id->setText(GlobalVars::g_localFans->getID());
        ui->le_nickname->setText(GlobalVars::g_localFans->getNickName());
        ui->le_tele->setText(GlobalVars::g_localFans->getTele());
    }
}
void FansInfoForm::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/images/banck5.png");
    p.drawPixmap(0,0,pix);
}
