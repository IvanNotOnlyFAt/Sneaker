#include "merchform.h"
#include "ui_merchform.h"

MerchForm::MerchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchForm)
{
    ui->setupUi(this);
}

MerchForm::~MerchForm()
{
    delete ui;
}
