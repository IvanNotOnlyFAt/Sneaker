#include "tradermerchform.h"
#include "ui_tradermerchform.h"

#include "globalvars.h"

#include <QDebug>
#include <QImage>
#include <QStringBuilder>
#include <QSize>
TraderMerchForm::TraderMerchForm(MerchInfo info,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderMerchForm)
{
    ui->setupUi(this);

    m_merchInfo = info;

    ui->le_id->setText(info.getID());
    ui->le_name->setText(info.getName());
    ui->le_storeID->setText(info.getStore_ID());
    ui->le_price->setText(info.getPrice());
    ui->le_stock->setText(info.getStock());
    ui->le_size->setText(info.getMerchSize());
    ui->le_adphoto->setText(info.getADPhoto());
    ui->te_descri->setText(info.getDescri());

}

TraderMerchForm::~TraderMerchForm()
{
    delete ui;
}

void TraderMerchForm::setMerchHostPhoto()
{
    QImage img = GlobalVars::g_merchHostPhotoMap[m_merchInfo.getID()];
    QSize lbsize = ui->lb_photo->size();
    QImage m_tempimg = img.scaled(lbsize,Qt::IgnoreAspectRatio);
    ui->lb_photo->setPixmap(QPixmap::fromImage(m_tempimg));
}

QString TraderMerchForm::getMerchID()
{
    return m_merchInfo.getID();
}

QString TraderMerchForm::getMerchStoreID()
{
    return m_merchInfo.getStore_ID();
}
