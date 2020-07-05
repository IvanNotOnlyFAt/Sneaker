#include "merchform.h"
#include "ui_merchform.h"
#include "globalvars.h"

#include <QDebug>
MerchForm::MerchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchForm)
{
    ui->setupUi(this);
    m_searchCond = Search_MerchNone;
//    m_merchItem = nullptr;
    initMerchForm();
}

MerchForm::~MerchForm()
{
    delete ui;
}

void MerchForm::on_pb_addmerch_clicked()
{
    qDebug() << "MerchForm::on_pb_addmerch_clicked";
//    m_applyWidget = 0;//多开用模态阻塞来避免，0是为了避免野指针
//    m_applyWidget = new ApplyStoreForm( GlobalVars::g_localTrader->getID(), this);
//    m_applyWidget->show();
//    connect(m_applyWidget, SIGNAL(signalApplyAddStore(QString,QByteArray)),
//            this, SLOT(slotApplyAddStore(QString,QByteArray)));
}

void MerchForm::on_pb_deletemerch_clicked()
{
    qDebug() << "MerchForm::on_pb_deletemerch_clicked";
}

void MerchForm::on_pb_modifymerch_clicked()
{
    qDebug() << "MerchForm::on_pb_modifymerch_clicked";
}

void MerchForm::on_pb_photo_clicked()
{
    qDebug() << "MerchForm::on_pb_photo_clicked";
}

void MerchForm::on_pb_search_clicked()
{
    qDebug() << "MerchForm::on_pb_search_clicked";
    if(m_searchCond == Search_MerchID)
    {
       //用服务器数据库的方式查询发送的，暂时搁置
    }else if(m_searchCond == Search_MerchName)
    {
        //用服务器数据库的方式查询发送的，暂时搁置
    }else
    {
         emit signalRefreshMerchData();
    }

}

void MerchForm::on_cb_condition_activated(int index)
{
    qDebug() << "MerchForm::on_cb_condition_activated" << index;
    m_searchCond = index;
    if (m_searchCond == Search_MerchNone)
    {
        ui->le_condition->setEnabled(false);
    }else
    {
        ui->le_condition->setEnabled(true);
    }
}

void MerchForm::slotAroundMerch()
{
    qDebug() << "MerchForm::slotAroundMerch";
    ui->cb_condition->setCurrentIndex(Search_MerchNone);
    on_pb_search_clicked();
    initMerchForm();

}


void MerchForm::slotGainMerchInfoResult(bool res)
{
    qDebug() << "MerchForm::slotGainMerchInfoResult" << res;
    if(res)
    {
        ui->listWidget->clear();

        for(int i = 0; i < GlobalVars::g_merchInfoList->length(); i++)
        {

            QListWidgetItem *newItem = new QListWidgetItem;

            ui->listWidget->addItem(newItem);//创建item位置
            TraderMerchForm *traderMerchItem = new TraderMerchForm(GlobalVars::g_merchInfoList->at(i));
            ui->listWidget->setItemWidget(newItem,traderMerchItem);//在item位置插入widget


            newItem->setSizeHint(QSize(1060,230));
//            m_merchItemList->append(traderMerchItem);//装入itemwidget
        }
        emit signalApplyMerchPhoto();
    }

}

void MerchForm::slotGainMerchHostPhotoResult(bool res)
{
    qDebug() << "TraderStoreForm::slotGainMerchHostPhotoResult" << res;

    if(res)
    {

//        for(int i = 0; i < m_merchItemList->length(); i++)
//        {
//            TraderMerchForm *item = m_merchItemList->at(i);
//            item->setMerchHostPhoto();
//        }
    }
}

void MerchForm::initMerchForm()
{
    ui->pb_addmerch->setEnabled(false);
    ui->pb_deletemerch->setEnabled(false);
    ui->pb_modifymerch->setEnabled(false);
    ui->pb_photo->setEnabled(false);
}

//void MerchForm::slotGainMerchphotoResult(bool res)
//{
//    qDebug() << "MerchForm::slotGainMerchphotoResult" << res;

//    if(res)
//    {
//        ui->listWidget->clear();
//        ui->le_traderid->setText(GlobalVars::g_localTrader->getID());
//        ui->le_tradername->setText(GlobalVars::g_localTrader->getName());
//        for(StoreInfoList::Iterator it = GlobalVars::g_storeInfoList->begin();
//            it != GlobalVars::g_storeInfoList->end(); it++)
//        {
//            StoreInfo info(it->getID(), it->getTra_ID(),
//                           it->getName(), it->getMerType(),
//                           it->getLocation(), it->getLogo(),
//                           it->getDate());
//            QListWidgetItem *newItem = new QListWidgetItem;
//            ui->listWidget->addItem(newItem);//创建item位置
//            TraderStoreItem *traderStoreItem = new TraderStoreItem(info);
//            ui->listWidget->setItemWidget(newItem,traderStoreItem);//在item位置插入widget
//            newItem->setSizeHint(QSize(1060,152));
//            connect(traderStoreItem,SIGNAL(signalDeleteStore(QString)),
//                    this, SLOT(slotDeleteStore(QString)));
//        }

//    }
//}

//void MerchForm::slotApplyAddMerch(QString msg, QByteArray image)
//{
//    emit signalAddStore(msg, image);
//}

//void MerchForm::slotAddMerchResult(bool res, QString msg)
//{
//    m_applyWidget->applyOrModifyResult(res,msg);
//    if(res)
//    {
//        //更新店铺列表数据
//        ui->cb_condition->setCurrentIndex(Search_StoreNone);
//        on_pb_search_clicked();
//    }
//}

//void MerchForm::slotDeleteMerchResult(bool res)
//{
//    if(res)
//    {
//        //更新店铺列表数据
//        ui->cb_condition->setCurrentIndex(Search_StoreNone);
//        on_pb_search_clicked();

//    }
//}

//void MerchForm::slotDeleteMerch(QString msg)
//{
//    emit signalDeleteStoreItem(msg);
//}



