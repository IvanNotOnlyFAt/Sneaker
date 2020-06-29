#include "traderstoreitem.h"
#include "ui_traderstoreitem.h"
#include "globalvars.h"
#include <QDebug>
#include <QImage>

TraderStoreItem::TraderStoreItem(StoreInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderStoreItem)
{

//    m_storeInfo = info;
    ui->setupUi(this);
    m_storeStatus = true;
    ui->le_status->setText("营业中..");

    ui->le_id->setText(info.getID());
    ui->le_name->setText(info.getName());
    ui->le_type->setText(info.getMerType());
    ui->le_date->setText(info.getDate());

//    QImage img;
//    img.loadFromData(GlobalVars::g_storeLogoImageMap[info.getID()]);
    ui->lb_photo->setPixmap(QPixmap::fromImage(GlobalVars::g_storeLogoImageMap[info.getID()]));

}

TraderStoreItem::~TraderStoreItem()
{
    delete ui;
}

void TraderStoreItem::on_pb_switch_clicked()
{
    qDebug() << "TraderStoreItem::on_pb_switchka";
    m_storeStatus = !m_storeStatus;
    updataStoreStatus();

}

void TraderStoreItem::on_pb_change_clicked()
{
    qDebug() << "TraderStoreItem::on_pb_change_clicked()";

}

void TraderStoreItem::on_pb_delete_clicked()
{
    qDebug() << "TraderStoreItem::on_pb_delete_clicked()";

}

void TraderStoreItem::updataStoreStatus()
{
    if(m_storeStatus)
    {
        ui->le_status->setText("营业中..");
    }else
    {
        ui->le_status->setText("暂停营业");
    }
}
