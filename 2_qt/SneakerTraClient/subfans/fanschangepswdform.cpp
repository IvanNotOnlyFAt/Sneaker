#include "fanschangepswdform.h"
#include "ui_fanschangepswdform.h"

FansChangePswdForm::FansChangePswdForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansChangePswdForm)
{
    ui->setupUi(this);
}

FansChangePswdForm::~FansChangePswdForm()
{
    delete ui;
}
