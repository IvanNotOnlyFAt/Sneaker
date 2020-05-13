#include "tradertranscform.h"
#include "ui_tradertranscform.h"

TraderTranscForm::TraderTranscForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TraderTranscForm)
{
    ui->setupUi(this);
}

TraderTranscForm::~TraderTranscForm()
{
    delete ui;
}
