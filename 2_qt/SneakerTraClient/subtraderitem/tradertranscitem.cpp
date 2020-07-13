#include "tradertranscitem.h"
#include "ui_tradertranscitem.h"

TraderTranscItem::TraderTranscItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderTranscItem)
{
    ui->setupUi(this);
}

TraderTranscItem::~TraderTranscItem()
{
    delete ui;
}
