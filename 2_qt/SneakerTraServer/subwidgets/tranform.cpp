#include "tranform.h"
#include "ui_tranform.h"
#include "globalvars.h"
#include "execsql.h"

TranForm::TranForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TranForm)
{
    ui->setupUi(this);

    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_search_clicked();
}

TranForm::~TranForm()
{
    delete ui;
}
void TranForm::updataTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    //set header labers
    QStringList headers;
    headers << "订单编号" << "收藏编号" << "订单总金额" << "交易时间";

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_tranInfoList->length());

    for(int i=0; i < GlobalVars::g_tranInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_tranInfoList->at(i).getID());
        ui->tableWidget->setItem( i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_tranInfoList->at(i).getTro_ID());
        ui->tableWidget->setItem( i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_tranInfoList->at(i).getPriceSum());
        ui->tableWidget->setItem( i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_tranInfoList->at(i).getDTime());
        ui->tableWidget->setItem( i, 3, item);
    }
}
void TranForm::initWidgetUnits(void)
{
    ui->le_condition->setEnabled(false);

    ui->le_id->setEnabled(false);
    ui->le_troid->setEnabled(false);
    ui->le_pricesum->setEnabled(false);
    ui->le_dtime->setEnabled(false);



    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);

}

void TranForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pb_add->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_modify->setEnabled(true);

    const TranInfo &info = GlobalVars::g_tranInfoList->at(index.row());
    //int row():Returns the row this model index refers to.

    ui->le_id->setText(info.getID());
    ui->le_troid->setText(info.getTro_ID());
    ui->le_pricesum->setText(info.getPriceSum());
    ui->le_dtime->setText(info.getDTime());
}

void TranForm::on_cb_condition_currentIndexChanged(int index)
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

void TranForm::on_pb_search_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchTranInfoForID(ui->le_condition->text());
    }else if(m_searchCond == Search_TroID)
    {
        ExecSQL::searchTranInfoForTroID(ui->le_condition->text());
    }else if(m_searchCond == Search_PriSum)
    {
        ExecSQL::searchTranInfoForPriSum(ui->le_condition->text());
    }else if(m_searchCond == Search_DTime)
    {
        ExecSQL::searchTranInfoForDTime(ui->le_condition->text());
    }else
    {
        ExecSQL::searchAllTranInfos();
    }

    updataTableInfos();
}

void TranForm::pushButtonStatus(void)
{
    ui->le_id->setEnabled(false);
    ui->le_troid->setEnabled(true);
    ui->le_pricesum->setEnabled(true);
    ui->le_dtime->setEnabled(true);

    ui->pb_delete->setEnabled(false);
    ui->pb_add->setEnabled(false);
    ui->pb_modify->setEnabled(false);

    ui->pb_save->setEnabled(true);
    ui->pb_cancel->setEnabled(true);
}

void TranForm::on_pb_modify_clicked()
{
    m_operData = Oper_Mdy;
    pushButtonStatus();
}

void TranForm::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    pushButtonStatus();
}

void TranForm::on_pb_add_clicked()
{
    m_operData = Oper_Add;
    pushButtonStatus();
    ui->le_id->setEnabled(true);
}

void TranForm::on_pb_cancel_clicked()
{
    ui->le_id->clear();
    ui->le_troid->clear();
    ui->le_pricesum->clear();
    ui->le_dtime->clear();


    ui->le_id->setEnabled(false);
    ui->le_troid->setEnabled(false);
    ui->le_pricesum->setEnabled(false);
    ui->le_dtime->setEnabled(false);



    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void TranForm::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        ExecSQL::modifyTranInfoForTroID(ui->le_id->text(), ui->le_troid->text());
        ExecSQL::modifyTranInfoForPriSum(ui->le_id->text(), ui->le_pricesum->text());
        ExecSQL::modifyTranInfoForDTime(ui->le_id->text(), ui->le_dtime->text());
    }else if(m_operData == Oper_Del)
    {
        ExecSQL::removeTranInfo(ui->le_id->text());
    }else if(m_operData == Oper_Add)
    {
        TranInfo info(ui->le_id->text(),
                         ui->le_troid->text(),
                         ui->le_pricesum->text(),
                         ui->le_dtime->text());
        ExecSQL::addNewTranInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_search_clicked();
}
