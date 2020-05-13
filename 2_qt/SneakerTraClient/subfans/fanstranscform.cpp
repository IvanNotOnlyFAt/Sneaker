#include "fanstranscform.h"
#include "ui_fanstranscform.h"

FansTranscForm::FansTranscForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FansTranscForm)
{
    ui->setupUi(this);
}

FansTranscForm::~FansTranscForm()
{
    delete ui;
}
