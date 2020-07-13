#include "fanstranscitem.h"
#include "ui_fanstranscitem.h"

FansTranscItem::FansTranscItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansTranscItem)
{
    ui->setupUi(this);
}

FansTranscItem::~FansTranscItem()
{
    delete ui;
}
