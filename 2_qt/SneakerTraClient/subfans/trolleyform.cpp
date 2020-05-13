#include "trolleyform.h"
#include "ui_trolleyform.h"

TrolleyForm::TrolleyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrolleyForm)
{
    ui->setupUi(this);
}

TrolleyForm::~TrolleyForm()
{
    delete ui;
}
