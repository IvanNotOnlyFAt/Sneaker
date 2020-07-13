#include "fanstrolleyitem.h"
#include "ui_fanstrolleyitem.h"

FansTrolleyItem::FansTrolleyItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansTrolleyItem)
{
    ui->setupUi(this);
}

FansTrolleyItem::~FansTrolleyItem()
{
    delete ui;
}
