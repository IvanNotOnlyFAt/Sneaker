#include "traderstoreform.h"
#include "ui_traderstoreform.h"
#include "traderstoreitem.h"


#include "globalvars.h"

#include <QDebug>
TraderStoreForm::TraderStoreForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderStoreForm)
{
    m_searchCond = Search_None;
    ui->setupUi(this);

}

TraderStoreForm::~TraderStoreForm()
{
    delete ui;

}

void TraderStoreForm::on_cb_condition_currentIndexChanged(int index)
{
    qDebug() << "TraderStoreForm::on_cb_condition_currentIndexChanged" << index;
    m_searchCond = index;
    if (m_searchCond == Search_None)
    {
        ui->le_condition->setEnabled(false);
    }else
    {
        ui->le_condition->setEnabled(true);
    }
}

void TraderStoreForm::on_pb_search_clicked()
{
    qDebug() << "TraderStoreForm::on_pb_search_clicked";
    if(m_searchCond == Search_StoreID)
    {
       //用服务器数据库的方式查询发送的，暂时搁置
    }else if(m_searchCond == Search_StoreName)
    {
        //用服务器数据库的方式查询发送的，暂时搁置
    }else
    {
         emit signalRefreshStoreData();
    }

//    updataListWidget();
}

void TraderStoreForm::on_pb_applystore_clicked()
{
    qDebug() << "TraderStoreForm::on_pb_applystore_clicked";
}

void TraderStoreForm::slotGainStoreInfoResult(bool res)
{
    qDebug() << "TraderStoreForm::slotGainStoreInfoResult" << res;
    if(res)
    {
        ui->listWidget->clear();
        ui->le_traderid->setText(GlobalVars::g_localTrader->getID());
        ui->le_tradername->setText(GlobalVars::g_localTrader->getName());
        for(StoreInfoList::Iterator it = GlobalVars::g_storeInfoList->begin();
            it != GlobalVars::g_storeInfoList->end(); it++)
        {
            StoreInfo info(it->getID(), it->getTra_ID(),
                           it->getName(), it->getMerType(),
                           it->getLocation(), it->getLogo(),
                           it->getDate());
            QListWidgetItem *newItem = new QListWidgetItem;
            ui->listWidget->addItem(newItem);//创建item位置
            TraderStoreItem *traderStoreItem = new TraderStoreItem(info);
            ui->listWidget->setItemWidget(newItem,traderStoreItem);//在item位置插入widget
            newItem->setSizeHint(QSize(1060,152));
        }
    }

}
