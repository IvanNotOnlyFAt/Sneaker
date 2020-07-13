#include "homemerchitem.h"
#include "ui_homemerchitem.h"

HomeMerchItem::HomeMerchItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeMerchItem)
{
    ui->setupUi(this);
}

HomeMerchItem::~HomeMerchItem()
{
    delete ui;
}
