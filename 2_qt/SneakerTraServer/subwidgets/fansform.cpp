#include "fansform.h"
#include "ui_fansform.h"
#include "globalvars.h"
#include "execsql.h"

FansForm::FansForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansForm)
{
    ui->setupUi(this);

    m_operData = Oper_None;
    m_searchCond = Search_None;

    initWidgetUnits();
    on_pb_search_clicked();
}

FansForm::~FansForm()
{
    delete ui;
}
void FansForm::updataTableInfos(void)
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);

    //set header labers
    QStringList headers;
    headers << "账号" << "昵称" << "电话";

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(GlobalVars::g_fansInfoList->length());

    for(int i=0; i < GlobalVars::g_fansInfoList->length(); i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(GlobalVars::g_fansInfoList->at(i).getID());
        ui->tableWidget->setItem( i, 0, item);
        item = new QTableWidgetItem(GlobalVars::g_fansInfoList->at(i).getNickName());
        ui->tableWidget->setItem( i, 1, item);
        item = new QTableWidgetItem(GlobalVars::g_fansInfoList->at(i).getTele());
        ui->tableWidget->setItem( i, 2, item);
    }
}
void FansForm::initWidgetUnits(void)
{
    ui->le_condition->setEnabled(false);

    ui->le_id->setEnabled(false);
    ui->le_nickname->setEnabled(false);
    ui->le_tele->setEnabled(false);

    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void FansForm::on_tableWidget_clicked(const QModelIndex &index)
{
    ui->pb_add->setEnabled(true);
    ui->pb_delete->setEnabled(true);
    ui->pb_modify->setEnabled(true);

    const FansInfo &info = GlobalVars::g_fansInfoList->at(index.row());
    //int row():Returns the row this model index refers to.

    ui->le_id->setText(info.getID());
    ui->le_nickname->setText(info.getNickName());
    ui->le_tele->setText(info.getTele());
}

void FansForm::on_cb_condition_currentIndexChanged(int index)
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

void FansForm::on_pb_search_clicked()
{
    if(m_searchCond == Search_ID)
    {
        ExecSQL::searchFansInfoForID(ui->le_condition->text());
    }else if(m_searchCond == Search_NickName)
    {
        ExecSQL::searchFansInfoForNickName(ui->le_condition->text());
    }else if(m_searchCond == Search_Tele)
    {
        ExecSQL::searchFansInfoForTele(ui->le_condition->text());
    }else
    {
        ExecSQL::searchAllFansInfos();
    }

    updataTableInfos();
}

void FansForm::pushButtonStatus(void)
{
    ui->le_id->setEnabled(false);
    ui->le_nickname->setEnabled(true);
    ui->le_tele->setEnabled(true);


    ui->pb_delete->setEnabled(false);
    ui->pb_add->setEnabled(false);
    ui->pb_modify->setEnabled(false);

    ui->pb_save->setEnabled(true);
    ui->pb_cancel->setEnabled(true);
}

void FansForm::on_pb_modify_clicked()
{
    m_operData = Oper_Mdy;
    pushButtonStatus();
}

void FansForm::on_pb_delete_clicked()
{
    m_operData = Oper_Del;
    pushButtonStatus();
}

void FansForm::on_pb_add_clicked()
{
    m_operData = Oper_Add;
    pushButtonStatus();
    ui->le_id->setEnabled(true);
}

void FansForm::on_pb_cancel_clicked()
{
    ui->le_id->clear();
    ui->le_nickname->clear();
    ui->le_tele->clear();


    ui->le_id->setEnabled(false);
    ui->le_nickname->setEnabled(false);
    ui->le_tele->setEnabled(false);


    ui->pb_add->setEnabled(false);
    ui->pb_delete->setEnabled(false);
    ui->pb_modify->setEnabled(false);
    ui->pb_save->setEnabled(false);
    ui->pb_cancel->setEnabled(false);
}

void FansForm::on_pb_save_clicked()
{
    if(m_operData == Oper_Mdy)
    {
        ExecSQL::modifyFansInfoForNickName(ui->le_id->text(), ui->le_nickname->text());
        ExecSQL::modifyFansInfoForTele(ui->le_id->text(), ui->le_tele->text());
    }else if(m_operData == Oper_Del)
    {
        ExecSQL::removeFansInfo(ui->le_id->text());
    }else if(m_operData == Oper_Add)
    {
        FansInfo info(ui->le_id->text(),
                         ui->le_nickname->text(),
                         ui->le_tele->text());
        ExecSQL::addNewFansInfo(info);
    }

    on_pb_cancel_clicked();
    on_pb_search_clicked();
}





