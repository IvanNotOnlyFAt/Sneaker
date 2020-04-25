#include "trolleyform.h"
#include "ui_trolleyform.h"
#include "globalvars.h"
#include "execsql.h"



TrolleyForm::TrolleyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrolleyForm)
{
    ui->setupUi(this);

    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_search_clicked();
}

TrolleyForm::~TrolleyForm()
{
    delete ui;
}
void TrolleyForm::updataTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(6);

    //set header labers
    QStringList headers;
    headers << "收藏编号" << "鞋友账号" << "商品编号" << "收藏数量"<< "收藏尺码" << "日期" ;

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_trolleyInfoList->length());

    for(int i=0; i < GlobalVars::g_trolleyInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_trolleyInfoList->at(i).getID());
        ui->tableWidget->setItem( i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_trolleyInfoList->at(i).getFans_ID());
        ui->tableWidget->setItem( i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_trolleyInfoList->at(i).getMerch_ID());
        ui->tableWidget->setItem( i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_trolleyInfoList->at(i).getMerchNum());
        ui->tableWidget->setItem( i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_trolleyInfoList->at(i).getSelectSize());
        ui->tableWidget->setItem( i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_trolleyInfoList->at(i).getDate());
        ui->tableWidget->setItem( i, 5, item);
    }
}
void TrolleyForm::initWidgetUnits(void)
{
    ui->le_condition->setEnabled(false);

    ui->le_id->setEnabled(false);
    ui->le_fansid->setEnabled(false);
    ui->le_merchid->setEnabled(false);
    ui->le_merchnum->setEnabled(false);
    ui->le_selectsize->setEnabled(false);
    ui->le_date->setEnabled(false);


    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);

}

void TrolleyForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pb_add->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_modify->setEnabled(true);

    const TrolleyInfo &info = GlobalVars::g_trolleyInfoList->at(index.row());
    //int row():Returns the row this model index refers to.

    ui->le_id->setText(info.getID());
    ui->le_fansid->setText(info.getFans_ID());
    ui->le_merchid->setText(info.getMerch_ID());
    ui->le_merchnum->setText(info.getMerchNum());
    ui->le_selectsize->setText(info.getSelectSize());
    ui->le_date->setText(info.getDate());

}

void TrolleyForm::on_cb_condition_currentIndexChanged(int index)
{
    m_searchCond = index;
    if (m_searchCond == Search_None)
    {
        ui->le_condition->setEnabled(false);
    } else
    {
        ui->le_condition->setEnabled(true);
    }
}

void TrolleyForm::on_pb_search_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchTrolleyInfoForID(ui->le_condition->text());
    }else if(m_searchCond == Search_FansID)
    {
        ExecSQL::searchTrolleyInfoForFansID(ui->le_condition->text());
    }else if(m_searchCond == Search_MerchID)
    {
        ExecSQL::searchTrolleyInfoForMerchID(ui->le_condition->text());
    }else if(m_searchCond == Search_MerchNum)
    {
        ExecSQL::searchTrolleyInfoForMerchNum(ui->le_condition->text());
    }else if(m_searchCond == Search_SelectSize)
    {
        ExecSQL::searchTrolleyInfoForSelectSize(ui->le_condition->text());
    }else if(m_searchCond == Search_Date)
    {
        ExecSQL::searchTrolleyInfoForDate(ui->le_condition->text());
    }else
    {
        ExecSQL::searchAllTrolleyInfos();
    }

    updataTableInfos();
}

void TrolleyForm::pushButtonStatus(void)
{
    ui->le_id->setEnabled(false);
    ui->le_fansid->setEnabled(true);
    ui->le_merchid->setEnabled(true);
    ui->le_merchnum->setEnabled(true);
    ui->le_selectsize->setEnabled(true);
    ui->le_date->setEnabled(true);


    ui->pb_delete->setEnabled(false);
    ui->pb_add->setEnabled(false);
    ui->pb_modify->setEnabled(false);

    ui->pb_save->setEnabled(true);
    ui->pb_cancel->setEnabled(true);
}

void TrolleyForm::on_pb_modify_clicked()
{
    m_operData = Oper_Mdy;
    pushButtonStatus();
}

void TrolleyForm::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    pushButtonStatus();
}

void TrolleyForm::on_pb_add_clicked()
{
    m_operData = Oper_Add;
    pushButtonStatus();
    ui->le_id->setEnabled(true);
}

void TrolleyForm::on_pb_cancel_clicked()
{
    ui->le_id->clear();
    ui->le_fansid->clear();
    ui->le_merchid->clear();
    ui->le_merchnum->clear();
    ui->le_selectsize->clear();
    ui->le_date->clear();


    ui->le_id->setEnabled(false);
    ui->le_fansid->setEnabled(false);
    ui->le_merchid->setEnabled(false);
    ui->le_merchnum->setEnabled(false);
    ui->le_selectsize->setEnabled(false);
    ui->le_date->setEnabled(false);



    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void TrolleyForm::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        ExecSQL::modifyTrolleyInfoForFansID(ui->le_id->text(), ui->le_fansid->text());
        ExecSQL::modifyTrolleyInfoForMerchID(ui->le_id->text(), ui->le_merchid->text());
        ExecSQL::modifyTrolleyInfoForMerchNum(ui->le_id->text(), ui->le_merchnum->text());
        ExecSQL::modifyTrolleyInfoForSelectSize(ui->le_id->text(), ui->le_selectsize->text());
        ExecSQL::modifyTrolleyInfoForDate(ui->le_id->text(), ui->le_date->text());
    }else if(m_operData == Oper_Del)
    {
        ExecSQL::removeTrolleyInfo(ui->le_id->text());
    }else if(m_operData == Oper_Add)
    {
        TrolleyInfo info(ui->le_id->text(),
                         ui->le_fansid->text(),
                         ui->le_merchid->text(),
                         ui->le_merchnum->text(),
                         ui->le_selectsize->text(),
                         ui->le_date->text());
        ExecSQL::addNewTrolleyInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_search_clicked();
}



