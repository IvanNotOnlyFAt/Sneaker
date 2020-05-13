#include "traderchangepswdform.h"
#include "ui_traderchangepswdform.h"

TraderChangePswdForm::TraderChangePswdForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderChangePswdForm)
{
    ui->setupUi(this);
}

TraderChangePswdForm::~TraderChangePswdForm()
{
    delete ui;
}
