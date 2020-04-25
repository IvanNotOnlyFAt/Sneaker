#include "merchform.h"
#include "ui_merchform.h"
#include "globalvars.h"
#include "execsql.h"



MerchForm::MerchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchForm)
{
    ui->setupUi(this);

    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_search_clicked();
}

MerchForm::~MerchForm()
{
    delete ui;
}
void MerchForm::updataTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(8);

    //set header labers
    QStringList headers;
    headers << "货号" << "店铺号" << "商品名" << "价格"<< "库存" << "鞋码" << "介绍图" << "描述";

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_merchInfoList->length());

    for(int i=0; i < GlobalVars::g_merchInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getID());
        ui->tableWidget->setItem( i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getStore_ID());
        ui->tableWidget->setItem( i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getName());
        ui->tableWidget->setItem( i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getPrice());
        ui->tableWidget->setItem( i, 3, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getStock());
        ui->tableWidget->setItem( i, 4, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getMerchSize());
        ui->tableWidget->setItem( i, 5, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getADPhoto());
        ui->tableWidget->setItem( i, 6, item);
        item = new QTableWidgetItem(GlobalVars::g_merchInfoList->at(i).getDescri());
        ui->tableWidget->setItem( i, 7, item);
    }
}
void MerchForm::initWidgetUnits(void)
{
    ui->le_condition->setEnabled(false);

    ui->le_id->setEnabled(false);
    ui->le_storeid->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_price->setEnabled(false);
    ui->le_stock->setEnabled(false);
    ui->le_size->setEnabled(false);
    ui->le_adphoto->setEnabled(false);
    ui->le_descri->setEnabled(false);

    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);

}

void MerchForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pb_add->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_modify->setEnabled(true);

    const MerchInfo &info = GlobalVars::g_merchInfoList->at(index.row());
    //int row():Returns the row this model index refers to.

    ui->le_id->setText(info.getID());
    ui->le_storeid->setText(info.getStore_ID());
    ui->le_name->setText(info.getName());
    ui->le_price->setText(info.getPrice());
    ui->le_stock->setText(info.getMerchSize());
    ui->le_size->setText(info.getMerchSize());
    ui->le_adphoto->setText(info.getADPhoto());
    ui->le_descri->setText(info.getDescri());
}

void MerchForm::on_cb_condition_currentIndexChanged(int index)
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

void MerchForm::on_pb_search_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchMerchInfoForID(ui->le_condition->text());
    }else if(m_searchCond == Search_StoreID)
    {
        ExecSQL::searchMerchInfoForStoreID(ui->le_condition->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchMerchInfoForName(ui->le_condition->text());
    }else if(m_searchCond == Search_Price)
    {
        ExecSQL::searchMerchInfoForPrice(ui->le_condition->text());
    }else if(m_searchCond == Search_Stock)
    {
        ExecSQL::searchMerchInfoForStock(ui->le_condition->text());
    }else if(m_searchCond == Search_MerchSize)
    {
        ExecSQL::searchMerchInfoForMerchSize(ui->le_condition->text());
    }else if(m_searchCond == Search_AdPhoto)
    {
        ExecSQL::searchMerchInfoForAdPhoto(ui->le_condition->text());
    }else if(m_searchCond == Search_Descri)
    {
        ExecSQL::searchMerchInfoForDescri(ui->le_condition->text());
    }else
    {
        ExecSQL::searchAllMerchInfos();
    }

    updataTableInfos();
}

void MerchForm::pushButtonStatus(void)
{
    ui->le_id->setEnabled(false);
    ui->le_storeid->setEnabled(true);
    ui->le_name->setEnabled(true);
    ui->le_price->setEnabled(true);
    ui->le_stock->setEnabled(true);
    ui->le_size->setEnabled(true);
    ui->le_adphoto->setEnabled(true);
    ui->le_descri->setEnabled(true);

    ui->pb_delete->setEnabled(false);
    ui->pb_add->setEnabled(false);
    ui->pb_modify->setEnabled(false);

    ui->pb_save->setEnabled(true);
    ui->pb_cancel->setEnabled(true);
}

void MerchForm::on_pb_modify_clicked()
{
    m_operData = Oper_Mdy;
    pushButtonStatus();
}

void MerchForm::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    pushButtonStatus();
}

void MerchForm::on_pb_add_clicked()
{
    m_operData = Oper_Add;
    pushButtonStatus();
    ui->le_id->setEnabled(true);
}

void MerchForm::on_pb_cancel_clicked()
{
    ui->le_id->clear();
    ui->le_storeid->clear();
    ui->le_name->clear();
    ui->le_price->clear();
    ui->le_stock->clear();
    ui->le_size->clear();
    ui->le_adphoto->clear();
    ui->le_descri->clear();

    ui->le_id->setEnabled(false);
    ui->le_storeid->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_price->setEnabled(false);
    ui->le_stock->setEnabled(false);
    ui->le_size->setEnabled(false);
    ui->le_adphoto->setEnabled(false);
    ui->le_descri->setEnabled(false);


    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void MerchForm::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        ExecSQL::modifyMerchInfoForStoreID(ui->le_id->text(), ui->le_storeid->text());
        ExecSQL::modifyMerchInfoForName(ui->le_id->text(), ui->le_name->text());
        ExecSQL::modifyMerchInfoForPrice(ui->le_id->text(), ui->le_price->text());
        ExecSQL::modifyMerchInfoForStock(ui->le_id->text(), ui->le_stock->text());
        ExecSQL::modifyMerchInfoForMerchSize(ui->le_id->text(), ui->le_size->text());
        ExecSQL::modifyMerchInfoForAdPhoto(ui->le_id->text(), ui->le_adphoto->text());
        ExecSQL::modifyMerchInfoForDescri(ui->le_id->text(), ui->le_descri->text());
    }else if(m_operData == Oper_Del)
    {
        ExecSQL::removeMerchInfo(ui->le_id->text());
    }else if(m_operData == Oper_Add)
    {
        MerchInfo info(ui->le_id->text(),
                         ui->le_storeid->text(),
                         ui->le_name->text(),
                         ui->le_price->text(),
                         ui->le_stock->text(),
                         ui->le_size->text(),
                         ui->le_adphoto->text(),
                         ui->le_descri->text());
        ExecSQL::addNewMerchInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_search_clicked();
}



