#include "applystoreform.h"
#include "ui_applystoreform.h"

ApplyStoreForm::ApplyStoreForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyStoreForm)
{
    ui->setupUi(this);
}

ApplyStoreForm::~ApplyStoreForm()
{
    delete ui;
}
