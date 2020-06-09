#include "traderstoreform.h"
#include "ui_traderstoreform.h"

TraderStoreForm::TraderStoreForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderStoreForm)
{
    ui->setupUi(this);
}

TraderStoreForm::~TraderStoreForm()
{
    delete ui;
}

void TraderStoreForm::on_cb_condition_currentIndexChanged(int index)
{

}

void TraderStoreForm::on_pb_search_clicked()
{

}

void TraderStoreForm::on_pb_applystore_clicked()
{

}
