#include "merchadphotoform.h"
#include "ui_merchadphotoform.h"

MerchADPhotoForm::MerchADPhotoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MerchADPhotoForm)
{
    ui->setupUi(this);
}

MerchADPhotoForm::~MerchADPhotoForm()
{
    delete ui;
}
