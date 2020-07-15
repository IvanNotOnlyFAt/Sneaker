#include "homemerchitem.h"
#include "ui_homemerchitem.h"

#include "globalvars.h"

#include <QDebug>
#include <Qimage>
#include <QSize>
HomeMerchItem::HomeMerchItem(MerchInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeMerchItem)
{
    ui->setupUi(this);
    m_merchInfo = info;
    ui->pb_merch->text().clear();
    QString merchname = info.getName();

    if(merchname.size() < 20)
    {
        ui->pb_merch->setText(merchname);
    }else
    {
        QString tmp = merchname.left(16)
                + QString("\n")
                + merchname.right(merchname.size()-16);
        ui->pb_merch->setText(tmp);
    }

    setMerchHostPhoto();
}

HomeMerchItem::~HomeMerchItem()
{
    delete ui;
}



void HomeMerchItem::setMerchHostPhoto()
{
    QImage img = GlobalVars::g_homeMerchHostMap[m_merchInfo.getID()];
    QSize lbsize = ui->label->size();
    QImage m_tempimg = img.scaled(lbsize,Qt::IgnoreAspectRatio);
    ui->label->setPixmap(QPixmap::fromImage(m_tempimg));
}




void HomeMerchItem::on_pb_merch_clicked()
{
    emit signalPBPurchase(m_merchInfo.getID());
}
