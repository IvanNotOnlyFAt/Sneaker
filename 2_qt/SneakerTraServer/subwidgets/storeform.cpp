#include "storeform.h"
#include "ui_storeform.h"
#include "globalvars.h"
#include "execsql.h"



StoreForm::StoreForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StoreForm)
{
    ui->setupUi(this);

    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_search_clicked();
}

StoreForm::~StoreForm()
{
    delete ui;
}
void StoreForm::updataTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);

    //set header labers
    QStringList headers;
    headers << "店铺号" << "商家号" << "店名" << "类型"<< "注册地点" << "商标" << "注册日期";

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_storeInfoList->length());

    for(int i=0; i < GlobalVars::g_storeInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getID());
        ui->tableWidget->setItem( i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getTra_ID());
        ui->tableWidget->setItem( i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getName());
        ui->tableWidget->setItem( i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getMerType());
        ui->tableWidget->setItem( i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getLocation());
        ui->tableWidget->setItem( i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getLogo());
        ui->tableWidget->setItem( i, 5, item);
        item = new QTableWidgetItem(GlobalVars::g_storeInfoList->at(i).getDate());
        ui->tableWidget->setItem( i, 6, item);
    }
}
void StoreForm::initWidgetUnits(void)
{
    ui->le_condition->setEnabled(false);

    ui->le_id->setEnabled(false);
    ui->le_traid->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_type->setEnabled(false);
    ui->le_location->setEnabled(false);
    ui->le_logo->setEnabled(false);
    ui->le_date->setEnabled(false);

    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void StoreForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pb_add->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_modify->setEnabled(true);

    const StoreInfo &info = GlobalVars::g_storeInfoList->at(index.row());
    //int row():Returns the row this model index refers to.

    ui->le_id->setText(info.getID());
    ui->le_traid->setText(info.getTra_ID());
    ui->le_name->setText(info.getName());
    ui->le_type->setText(info.getMerType());
    ui->le_location->setText(info.getLocation());
    ui->le_logo->setText(info.getLogo());
    ui->le_date->setText(info.getDate());
}

void StoreForm::on_cb_condition_currentIndexChanged(int index)
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

void StoreForm::on_pb_search_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchStoreInfoForID(ui->le_condition->text());
    }else if(m_searchCond == Search_TraID)
    {
        ExecSQL::searchStoreInfoForTraID(ui->le_condition->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchStoreInfoForName(ui->le_condition->text());
    }else if(m_searchCond == Search_MerchType)
    {
        ExecSQL::searchStoreInfoForMerchType(ui->le_condition->text());
    }else if(m_searchCond == Search_Location)
    {
        ExecSQL::searchStoreInfoForLocation(ui->le_condition->text());
    }else if(m_searchCond == Search_Logo)
    {
        ExecSQL::searchStoreInfoForLogo(ui->le_condition->text());
    }else if(m_searchCond == Search_Date)
    {
        ExecSQL::searchStoreInfoForDate(ui->le_condition->text());
    }else
    {
        ExecSQL::searchAllStoreInfos();
    }

    updataTableInfos();
}

void StoreForm::pushButtonStatus(void)
{
    ui->le_id->setEnabled(false);
    ui->le_traid->setEnabled(true);
    ui->le_name->setEnabled(true);
    ui->le_type->setEnabled(true);
    ui->le_location->setEnabled(true);
    ui->le_logo->setEnabled(true);
    ui->le_date->setEnabled(true);

    ui->pb_delete->setEnabled(false);
    ui->pb_add->setEnabled(false);
    ui->pb_modify->setEnabled(false);

    ui->pb_save->setEnabled(true);
    ui->pb_cancel->setEnabled(true);
}

void StoreForm::on_pb_modify_clicked()
{
    m_operData = Oper_Mdy;
    pushButtonStatus();
}

void StoreForm::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    pushButtonStatus();
}

void StoreForm::on_pb_add_clicked()
{
    m_operData = Oper_Add;
    pushButtonStatus();
    ui->le_id->setEnabled(true);
}

void StoreForm::on_pb_cancel_clicked()
{
    ui->le_id->clear();
    ui->le_traid->clear();
    ui->le_name->clear();
    ui->le_type->clear();
    ui->le_location->clear();
    ui->le_logo->clear();
    ui->le_date->clear();

    ui->le_id->setEnabled(false);
    ui->le_traid->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_type->setEnabled(false);
    ui->le_location->setEnabled(false);
    ui->le_logo->setEnabled(false);
    ui->le_date->setEnabled(false);

    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void StoreForm::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        ExecSQL::modifyStoreInfoForTraID(ui->le_id->text(), ui->le_traid->text());
        ExecSQL::modifyStoreInfoForName(ui->le_id->text(), ui->le_name->text());
        ExecSQL::modifyStoreInfoForMerchType(ui->le_id->text(), ui->le_type->text());
        ExecSQL::modifyStoreInfoForLocation(ui->le_id->text(), ui->le_location->text());
        ExecSQL::modifyStoreInfoForLogo(ui->le_id->text(), ui->le_logo->text());
        ExecSQL::modifyStoreInfoForDate(ui->le_id->text(), ui->le_date->text());
    }else if(m_operData == Oper_Del)
    {
        ExecSQL::removeStoreInfo(ui->le_id->text());
    }else if(m_operData == Oper_Add)
    {
        StoreInfo info(ui->le_id->text(),
                         ui->le_traid->text(),
                         ui->le_name->text(),
                         ui->le_type->text(),
                         ui->le_location->text(),
                         ui->le_logo->text(),
                         ui->le_date->text());
        ExecSQL::addNewStoreInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_search_clicked();
}




