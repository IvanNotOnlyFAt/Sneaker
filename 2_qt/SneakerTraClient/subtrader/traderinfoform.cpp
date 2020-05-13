#include "traderinfoform.h"
#include "ui_traderinfoform.h"

TraderInfoForm::TraderInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderInfoForm)
{
    ui->setupUi(this);
}

TraderInfoForm::~TraderInfoForm()
{
    delete ui;
}
