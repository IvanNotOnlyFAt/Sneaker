#include "fanshomeform.h"
#include "ui_fanshomeform.h"

#include <QDebug>
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

void FansHomeForm::on_pb_search_clicked()
{
    qDebug() << "FansHomeForm::on_pb_search_clicked()";
}

void FansHomeForm::on_cb_condition_activated(int index)
{
    qDebug() << "FansHomeForm::on_cb_condition_activated()"<< index;
}

void FansHomeForm::on_pb_change_clicked()
{
    qDebug() << "FansHomeForm::on_pb_change_clicked()";
}
