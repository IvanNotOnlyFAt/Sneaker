#include "traderhomeform.h"
#include "ui_traderhomeform.h"

TraderHomeForm::TraderHomeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderHomeForm)
{
    ui->setupUi(this);
}

TraderHomeForm::~TraderHomeForm()
{
    delete ui;
}
