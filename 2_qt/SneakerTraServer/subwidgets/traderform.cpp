#include "traderform.h"
#include "ui_traderform.h"
#include "globalvars.h"
#include "execsql.h"

TraderForm::TraderForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderForm)
{
    ui->setupUi(this);

    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_search_clicked();
}

TraderForm::~TraderForm()
{
    delete ui;
}
void TraderForm::updataTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);

    //set header labers
    QStringList headers;
    headers << "账号" << "姓名" << "电话" << "身份证号";

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_traderInfoList->length());

    for(int i=0; i < GlobalVars::g_traderInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_traderInfoList->at(i).getID());
        ui->tableWidget->setItem( i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_traderInfoList->at(i).getName());
        ui->tableWidget->setItem( i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_traderInfoList->at(i).getTele());
        ui->tableWidget->setItem( i, 2, item);
        item = new QTableWidgetItem(GlobalVars::g_traderInfoList->at(i).getID_Num());
        ui->tableWidget->setItem( i, 3, item);
    }
}
void TraderForm::initWidgetUnits(void)
{
    ui->le_condition->setEnabled(false);

    ui->le_id->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_tele->setEnabled(false);
    ui->le_idnum->setEnabled(false);

    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void TraderForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pb_add->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_modify->setEnabled(true);

    const TraderInfo &info = GlobalVars::g_traderInfoList->at(index.row());
    //int row():Returns the row this model index refers to.

    ui->le_id->setText(info.getID());
    ui->le_name->setText(info.getName());
    ui->le_tele->setText(info.getTele());
    ui->le_idnum->setText(info.getID_Num());
}

void TraderForm::on_cb_condition_currentIndexChanged(int index)
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

void TraderForm::on_pb_search_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchTraderInfoForID(ui->le_condition->text());
    }else if(m_searchCond == Search_Name)
    {
        ExecSQL::searchTraderInfoForName(ui->le_condition->text());
    }else if(m_searchCond == Search_Tele)
    {
        ExecSQL::searchTraderInfoForTele(ui->le_condition->text());
    }else if(m_searchCond == Search_IdNum)
    {
        ExecSQL::searchTraderInfoForIdNum(ui->le_condition->text());
    }else
    {
        ExecSQL::searchAllTraderInfos();
    }

    updataTableInfos();
}

void TraderForm::pushButtonStatus(void)
{
    ui->le_id->setEnabled(false);
    ui->le_name->setEnabled(true);
    ui->le_tele->setEnabled(true);
    ui->le_idnum->setEnabled(true);

    ui->pb_delete->setEnabled(false);
    ui->pb_add->setEnabled(false);
    ui->pb_modify->setEnabled(false);

    ui->pb_save->setEnabled(true);
    ui->pb_cancel->setEnabled(true);
}

void TraderForm::on_pb_modify_clicked()
{
    m_operData = Oper_Mdy;
    pushButtonStatus();
}

void TraderForm::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    pushButtonStatus();
}

void TraderForm::on_pb_add_clicked()
{
    m_operData = Oper_Add;
    pushButtonStatus();
    ui->le_id->setEnabled(true);
}

void TraderForm::on_pb_cancel_clicked()
{
    ui->le_id->clear();
    ui->le_name->clear();
    ui->le_tele->clear();
    ui->le_idnum->clear();

    ui->le_id->setEnabled(false);
    ui->le_name->setEnabled(false);
    ui->le_tele->setEnabled(false);
    ui->le_idnum->setEnabled(false);

    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void TraderForm::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        ExecSQL::modifyTraderInfoForName(ui->le_id->text(), ui->le_name->text());
        ExecSQL::modifyTraderInfoForTele(ui->le_id->text(), ui->le_tele->text());
        ExecSQL::modifyTraderInfoForIdNum(ui->le_id->text(), ui->le_idnum->text());
    }else if(m_operData == Oper_Del)
    {
        ExecSQL::removeTraderInfo(ui->le_id->text());
    }else if(m_operData == Oper_Add)
    {
        TraderInfo info(ui->le_id->text(),
                         ui->le_name->text(),
                         ui->le_tele->text(),
                         ui->le_idnum->text());
        ExecSQL::addNewTraderInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_search_clicked();
}



