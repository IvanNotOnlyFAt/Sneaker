#include "fansinfoform.h"
#include "ui_fansinfoform.h"

FansInfoForm::FansInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansInfoForm)
{
    ui->setupUi(this);
}

FansInfoForm::~FansInfoForm()
{
    delete ui;
}
