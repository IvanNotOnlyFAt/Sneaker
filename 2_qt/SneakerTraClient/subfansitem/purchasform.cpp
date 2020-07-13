#include "purchasform.h"
#include "ui_purchasform.h"

PurchasForm::PurchasForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PurchasForm)
{
    ui->setupUi(this);
}

PurchasForm::~PurchasForm()
{
    delete ui;
}


