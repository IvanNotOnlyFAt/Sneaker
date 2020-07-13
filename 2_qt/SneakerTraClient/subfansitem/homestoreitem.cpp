#include "homestoreitem.h"
#include "ui_homestoreitem.h"

HomeStoreItem::HomeStoreItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeStoreItem)
{
    ui->setupUi(this);
}

HomeStoreItem::~HomeStoreItem()
{
    delete ui;
}
