#include "merchform.h"
#include "ui_merchform.h"
#include "globalvars.h"

#include <QDebug>
#include <QStringBuilder>
MerchForm::MerchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchForm)
{
    ui->setupUi(this);
    m_searchCond = Search_MerchNone;
    ui->pb_addmerch->setEnabled(true);
    m_applyWidget = 0;
    m_modifyWidget = 0;
    itemWidgetList.clear();
    itemList.clear();

    m_clickedFlag = false;
    initMerchForm();

}

MerchForm::~MerchForm()
{
    delete ui;

}

void MerchForm::on_pb_addmerch_clicked()
{
    qDebug() << "MerchForm::on_pb_addmerch_clicked";
    m_applyWidget = 0;//多开用模态阻塞来避免，0是为了避免野指针
    m_applyWidget = new ApplyMerchForm(this);
    m_applyWidget->show();
    connect(m_applyWidget, SIGNAL(signalApplyAddMerch(QString,QByteArray)),
            this, SLOT(slotApplyAddMerch(QString,QByteArray)));
}
void MerchForm::slotApplyAddMerch(QString msg, QByteArray buffer)
{
    emit signalAddMerch(msg, buffer);
}
void MerchForm::on_pb_deletemerch_clicked()
{
    qDebug() << "MerchForm::on_pb_deletemerch_clicked";

    QString command = QString(CMD_RemoveInfo_D) % QString(CMD_TraderMerch_M)
            % QString("#") % QString(GlobalVars::g_localTrader->getID())
            % QString("|") % QString(m_currentMerchID);

    emit signalDeleteMerch(command);
}

void MerchForm::on_pb_modifymerch_clicked()
{
    qDebug() << "MerchForm::on_pb_modifymerch_clicked--和增加差不多，以后再做";
    m_modifyWidget = 0;//多开用模态阻塞来避免，0是为了避免野指针
    QString merchid = m_merchItem->getMerchID();
    m_modifyWidget = new ApplyMerchForm(GlobalVars::g_merchInfoMap[merchid], this);
    m_modifyWidget->show();
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

void MerchForm::slotApplyMerchResult(bool res, QString msg)
{
    m_applyWidget->applyOrModifyResult(res,msg);
    disconnect(m_applyWidget, SIGNAL(signalApplyAddMerch(QString,QByteArray)),
            this, SLOT(slotApplyAddMerch(QString,QByteArray)));//无论结果与否，都取消connect，否则发送段错误
    if(res)
    {
        //更新店铺列表数据
        ui->cb_condition->setCurrentIndex(Search_MerchNone);
        on_pb_search_clicked();
    }
}


void MerchForm::slotGainMerchInfoResult(bool res)
{
    qDebug() << "MerchForm::slotGainMerchInfoResult" << res;
    if(res)
    {
        initMerchForm();        //初始化按键
        disconnectListwidget(); //断开连接
        deleteAllItem();        //释放item和widget
        ui->listWidget->clear();//清除listwidget
        connectListwidget();     //重新连接

        for(int i = 0; i < GlobalVars::g_merchInfoList->length(); i++)
        {

            QListWidgetItem *newItem = new QListWidgetItem;

            ui->listWidget->addItem(newItem);//创建item位置
            TraderMerchForm *m_merchItem = new TraderMerchForm(GlobalVars::g_merchInfoList->at(i));
            ui->listWidget->setItemWidget(newItem,m_merchItem);//在item位置插入widget
            newItem->setSizeHint(QSize(1060,230));

        }
        emit signalApplyMerchPhoto();
    }

}

void MerchForm::slotGainMerchHostPhotoResult(bool res)
{
    itemWidgetList.clear();
    itemList.clear();
    qDebug() << "TraderStoreForm::slotGainMerchHostPhotoResult" << res;
    if(res)
    {
        for(int i = 0; i < ui->listWidget->count(); i++)
        {
            QListWidgetItem *item = ui->listWidget->item(i);
            QWidget *itemWidget = ui->listWidget->itemWidget(item);
            ((TraderMerchForm *)itemWidget)->setMerchHostPhoto();

            if(item != NULL )
            {
                itemList.append(item);
//                qDebug() << " append item "<< i <<"is success";
            }
            if(itemWidget != NULL )
            {
                itemWidgetList.append(itemWidget);
//                qDebug() << " append itemWidget "<< i <<"is success";

            }
        }
    }
}

void MerchForm::slotDeleteMerchResult(bool res)
{
    if(res)
    {
        //更新店铺列表数据
        ui->cb_condition->setCurrentIndex(Search_MerchNone);
        on_pb_search_clicked();

    }
}

void MerchForm::initMerchForm()
{
    m_merchItem = nullptr;
    ui->pb_deletemerch->setEnabled(false);
    ui->pb_modifymerch->setEnabled(false);
    ui->pb_photo->setEnabled(false);
}

void MerchForm::currrentSelect(TraderMerchForm *merchItem)
{
    m_merchItem = merchItem;  //设置当前窗口

    //设置按键可用
    ui->pb_addmerch->setEnabled(true);
    ui->pb_deletemerch->setEnabled(true);
    ui->pb_modifymerch->setEnabled(true);
    ui->pb_photo->setEnabled(true);

    //设置显示所属商店和名称
    m_currentMerchID = merchItem->getMerchID();
    m_currentStoreID = merchItem->getMerchStoreID();
    m_currentStoreName = GlobalVars::g_storeInfoMap[m_currentStoreID].getName();
    ui->le_storeid->setText(m_currentStoreID);
    ui->le_storename->setText(m_currentStoreName);
}

void MerchForm::deleteAllItem()
{
    int counter = itemList.count();
    qDebug() << "count is " <<counter;

    QListWidgetItem *item;
    QWidget *widget;
    for(int index = 0;index < counter;index++)
    {

        item = itemList.at(index);
        widget = itemWidgetList.at(index);
        if(widget != NULL)
        {
            delete widget;
//            qDebug() << " delete widget "<< index <<"is success";
        }
        if(item !=NULL)
        {
            delete item;
//            qDebug() << " delete item "<< index <<"is success";
        }
//         qDebug() << index;
    }
    itemWidgetList.clear();
    itemList.clear();
//    qDebug() << " 全删除光了";
}

void MerchForm::disconnectListwidget()
{
    if(m_clickedFlag)
    {
        disconnect(ui->listWidget,SIGNAL(currentRowChanged(int)),
                   this,SLOT(on_listWidget_currentRowChanged(int)));
        disconnect(ui->listWidget,SIGNAL(doubleClicked(QModelIndex)),
                   this,SLOT(on_listWidget_itemDoubleClicked(QListWidgetItem)));
    }
}

void MerchForm::connectListwidget()
{
    if(m_clickedFlag)
    {
        connect(ui->listWidget,SIGNAL(currentRowChanged(int)),
                   this,SLOT(on_listWidget_currentRowChanged(int)));
        connect(ui->listWidget,SIGNAL(itemDoubleClicked(QListWidgetItem*)),
                   this,SLOT(on_listWidget_itemDoubleClicked(QListWidgetItem*)));
       m_clickedFlag = false;
    }
}

void MerchForm::on_listWidget_currentRowChanged(int currentRow)
{
    m_clickedFlag =true;//item已经被按下
    QWidget *item = ui->listWidget->itemWidget(ui->listWidget->item(currentRow));
    currrentSelect((TraderMerchForm *)item);
}


void MerchForm::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{

    m_clickedFlag =true;//item已经被按下
    QWidget *Witem = ui->listWidget->itemWidget(item);

    currrentSelect((TraderMerchForm *)Witem);
    on_pb_photo_clicked();
}










