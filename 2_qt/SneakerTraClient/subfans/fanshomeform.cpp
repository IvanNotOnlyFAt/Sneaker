#include "fanshomeform.h"
#include "ui_fanshomeform.h"
#include "globalvars.h"


#include <QDebug>
#include <QStringBuilder>
FansHomeForm::FansHomeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansHomeForm)
{
    ui->setupUi(this);
    m_searchCond = Search_None;
    m_merchIndex = 0;
    m_puchasWidget = 0;
    itemWidgetList.clear();
}

FansHomeForm::~FansHomeForm()
{
    delete ui;
}
void FansHomeForm::slotGainHomeInfo(bool res)
{
    qDebug() << "FansHomeForm::slotGainHomeInfo()" << res;
    m_storeDisplayList.clear();
    if(res)
    {
       QString msg = QString(CMD_ApplyImage_P) % QString(CMD_GetHomePage_Z) % QString(CMD_TraderStore_S) % QString("#")
               % GlobalVars::g_localFans->getID();
        for(int it = 0;it < GlobalVars::g_HomeStoreInfoList->length(); it++)
        {
            QString id = QString("|") % GlobalVars::g_HomeStoreInfoList->at(it);
            msg.append(id);
            m_storeDisplayList.append(GlobalVars::g_HomeStoreInfoList->at(it));
        }
        m_storeDisplayList.removeLast();//去除最后一个空的
        emit signalHomeStoreApply(msg);

        on_pb_change_clicked();//直接用刷新键，去获取想要的merch
    }
}

void FansHomeForm::slotGainHomeStorePhoto(bool res)
{
    qDebug() << "MerchForm::slotGainHomeStorePhoto" << res;
    if(res)
    {
        ui->listWidget->clear();//清除listwidget

        for(int i = 0; i < m_storeDisplayList.length(); i++)
        {

            QListWidgetItem *newItem = new QListWidgetItem;
            ui->listWidget->addItem(newItem);//创建item位置

            QString storeid = m_storeDisplayList.at(i);
            StoreInfo info = GlobalVars::g_homeStoreInfoMap.value(storeid);
            HomeStoreItem *storeItem = new HomeStoreItem(info);

            ui->listWidget->setItemWidget(newItem,storeItem);//在item位置插入widget
            newItem->setSizeHint(QSize(250,110));
        }
    }

}

void FansHomeForm::slotGainHomeMerchPhoto(bool res)
{
    qDebug() << "MerchForm::slotGainHomeMerchPhoto" << res;
    ui->tableWidget->clear();
    if(res)
    {
        ui->tableWidget->setRowCount(HOMEPAGEMAXDIPLAY / 3);
        ui->tableWidget->setColumnCount(3);
        ui->tableWidget->horizontalHeader()->setVisible(false);
        ui->tableWidget->verticalHeader()->setVisible(false);
        ui->tableWidget->horizontalHeader()->setDefaultSectionSize(259);
        ui->tableWidget->verticalHeader()->setDefaultSectionSize(325);
        ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection); //取消了选择样式，外观上取消选中
        for(int x = 0; x < (HOMEPAGEMAXDIPLAY / 3); x++)
        {
            for(int y = 0; y < 3; y++)
            {
                QString merchid = m_merchDisplayList.at((x*3)+ y);
                MerchInfo info = GlobalVars::g_homeMerchInfoMap.value(merchid);
                HomeMerchItem *widget = new HomeMerchItem(info); ///用户自定义的
                ui->tableWidget->setCellWidget(x,y,widget);
                connect(widget, SIGNAL(signalPBPurchase(QString)),
                        this,SLOT(slotPBPurchase(QString)));
                itemWidgetList.append(widget);

            }
        }
    }
}

void FansHomeForm::slotPBPurchase(QString merchID)
{
    qDebug() << "FansHomeForm::slotPBPurchase()" << merchID;
    m_puchasWidget = 0;//多开用模态阻塞来避免，0是为了避免野指针
    m_puchasWidget = new PurchasForm(GlobalVars::g_homeMerchInfoMap[merchID],this);
    m_puchasWidget->show();

}

void FansHomeForm::on_pb_search_clicked()
{
    qDebug() << "FansHomeForm::on_pb_search_clicked()";
    if(m_searchCond == Search_MerchID)
    {
       //用服务器数据库的方式查询发送的，暂时搁置
    }else if(m_searchCond == Search_MerchName)
    {
        //用服务器数据库的方式查询发送的，暂时搁置
    }else if(m_searchCond == Search_StoreID)
    {
       //用服务器数据库的方式查询发送的，暂时搁置
    }else if(m_searchCond == Search_StoreName)
    {
        //用服务器数据库的方式查询发送的，暂时搁置
    }else
    {
        emit signalRefreshHomeData();

    }
}

void FansHomeForm::on_cb_condition_activated(int index)
{
    qDebug() << "FansHomeForm::on_cb_condition_activated()"<< index;
    m_searchCond = index;
    if (m_searchCond == Search_None)
    {
        ui->le_condition->setEnabled(false);
    }else
    {
        ui->le_condition->setEnabled(true);
    }
}

void FansHomeForm::on_pb_change_clicked()
{
    qDebug() << "FansHomeForm::on_pb_change_clicked()";
    deleteAllItem();//清理tablewidget
    m_merchDisplayList.clear();

    int count = GlobalVars::g_HomeMerchInfoList->length();
    int currentPageIndex = 0;
//    qDebug() << "////////////////////"<< m_merchIndex;
    QString msg = QString(CMD_ApplyImage_P) % QString(CMD_GetHomePage_Z) % QString(CMD_TraderMerch_M) % QString("#")
            % GlobalVars::g_localFans->getID();
    for(m_merchIndex;m_merchIndex <= GlobalVars::g_HomeMerchInfoList->length(); m_merchIndex++)
    {
        if(currentPageIndex < HOMEPAGEMAXDIPLAY)//限制只获取一页
        {
            currentPageIndex++;
            m_merchIndex = m_merchIndex % count;//使得m_merchIndex保持可翻页循环的状态
            QString id = QString("|") % GlobalVars::g_HomeMerchInfoList->at(m_merchIndex);
            msg.append(id);
            m_merchDisplayList.append(GlobalVars::g_HomeMerchInfoList->at(m_merchIndex));
        }else
        {
            emit signalHomeMerchApply(msg);
            return;
        }
    }


}
void FansHomeForm::deleteAllItem()
{
    qDebug() << "FansHomeForm::deleteAllItem()" ;
    int counter = itemWidgetList.count();
    qDebug() << "count is " <<counter;

    for(int index = 0;index < counter;index++)
    {
        HomeMerchItem *widget = itemWidgetList.at(index);
        if(widget != NULL)
        {
            disconnect(widget, SIGNAL(signalPBPurchase(QString)),
                       this,SLOT(slotPBPurchase(QString)));
            delete widget;
             qDebug() << "----------------------------" ;
        }

    }
    itemWidgetList.clear();

}

