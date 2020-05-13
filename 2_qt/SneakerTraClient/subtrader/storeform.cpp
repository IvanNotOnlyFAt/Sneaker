#include "storeform.h"
#include "ui_storeform.h"

StoreForm::StoreForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StoreForm)
{
    ui->setupUi(this);
}

StoreForm::~StoreForm()
{
    delete ui;
}
