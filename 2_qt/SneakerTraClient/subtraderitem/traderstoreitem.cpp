#include "traderstoreitem.h"
#include "ui_traderstoreitem.h"

TraderStoreItem::TraderStoreItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderStoreItem)
{
    ui->setupUi(this);
}

TraderStoreItem::~TraderStoreItem()
{
    delete ui;
}
