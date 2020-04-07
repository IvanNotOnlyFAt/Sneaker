#include "userform.h"
#include "ui_userform.h"

UserForm::UserForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserForm)
{
    ui->setupUi(this);
}

UserForm::~UserForm()
{
    delete ui;
}

void UserForm::on_cb_condition_activated(int index)
{

}

void UserForm::on_pb_search_clicked()
{

}


void UserForm::on_pb_modify_clicked()
{

}

void UserForm::on_pb_delete_clicked()
{

}

void UserForm::on_pb_add_clicked()
{

}

void UserForm::on_pb_cancel_clicked()
{

}

void UserForm::on_pb_save_clicked()
{

}

