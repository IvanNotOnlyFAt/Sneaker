#include "traderstoreitem.h"
#include "ui_traderstoreitem.h"
#include "globalvars.h"

#include <QDebug>
#include <QImage>
#include <QStringBuilder>
TraderStoreItem::TraderStoreItem(StoreInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderStoreItem)
{


    ui->setupUi(this);

    m_storeInfo = info;
    m_modifyStoreInfo == nullptr;
    m_storeStatus = true;
    ui->le_status->setText("营业中..");

    ui->le_id->setText(info.getID());
    ui->le_name->setText(info.getName());
    ui->le_type->setText(info.getMerType());
    ui->le_date->setText(info.getDate());

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

    m_modifyStoreInfo = 0;//多开用模态阻塞来避免，0是为了避免野指针
    m_modifyStoreInfo = new ApplyStoreForm(m_storeInfo , this);
    m_modifyStoreInfo->show();


}

void TraderStoreItem::on_pb_delete_clicked()
{
    qDebug() << "TraderStoreItem::on_pb_delete_clicked()";
    QString command = QString(CMD_RemoveInfo_D) % QString(CMD_TraderStore_S)
            % QString("#") % QString(m_storeInfo.getTra_ID())
            % QString("|") % QString(m_storeInfo.getID());

    emit signalDeleteStore(command);


}

void TraderStoreItem::updataStoreStatus()
{
    qDebug() << "TraderStoreItem::updataStoreStatus()" << "硬编码未完成...";
    if(m_storeStatus)
    {
        ui->le_status->setText("营业中..");
    }else
    {
        ui->le_status->setText("暂停营业");
    }
}
