#include "fanshomeform.h"
#include "ui_fanshomeform.h"

FansHomeForm::FansHomeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansHomeForm)
{
    ui->setupUi(this);
}

FansHomeForm::~FansHomeForm()
{
    delete ui;
}
