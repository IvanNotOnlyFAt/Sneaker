#include "applymerchform.h"
#include "ui_applymerchform.h"

ApplyMerchForm::ApplyMerchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyMerchForm)
{
    ui->setupUi(this);
}

ApplyMerchForm::~ApplyMerchForm()
{
    delete ui;
}
