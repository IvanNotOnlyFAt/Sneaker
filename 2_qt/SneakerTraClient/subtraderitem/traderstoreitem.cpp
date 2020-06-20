#include "traderstoreitem.h"
#include "ui_traderstoreitem.h"
#include <QDebug>
#include <QImage>

TraderStoreItem::TraderStoreItem(StoreInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderStoreItem)
{

    m_storeInfo = info;
    ui->setupUi(this);
    m_storeStatus = true;
    ui->le_status->setText("营业中..");

    ui->le_id->setText(m_storeInfo.getID());
    ui->le_name->setText(m_storeInfo.getName());
    ui->le_type->setText(m_storeInfo.getMerType());
    ui->le_date->setText(m_storeInfo.getDate());
//    m_index = index % 6;
//    m_logoPath = "G:/lianhang/program/SneakerPro/Sneaker/3_images/storelogos/";
//    m_logoFilePath = QString(m_logoPath + QString("ST-10000") + QString::number(m_index) + ".jpg");
//    qDebug() << m_logoFilePath;
//    QImage img(m_logoFilePath);
//    ui->lb_photo->setPixmap(QPixmap::fromImage(img));
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
