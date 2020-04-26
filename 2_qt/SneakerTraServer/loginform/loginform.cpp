#include "loginform.h"
#include "ui_loginform.h"
#include "execsql.h"

#include <QDebug>
#include <QMessageBox>
LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pb_login_clicked()
{
    qDebug() << "on_pb_login_clicked()";
    UserInfo info;
    ExecSQL::selectLoginForInfo(info,ui->le_id->text());

    if(!ui->le_id->text().isEmpty())
    {
        if(!ui->le_pswd->text().isEmpty())
        {
            if(info.getRole() == "管理")
            {
                if(ui->le_id->text() == info.getID() && ui->le_pswd->text() == info.getPswd())
                {
                    emit signalLoginSuccess(info);
                    qDebug() <<"===============================";
                    qDebug() <<" Success For Log in ";
                    qDebug() << "emit signalLoginSuccess(info)";
                }else
                {
                    QMessageBox::warning(this,"警告","账号和密码不匹配");
                }
            }else
            {
                QMessageBox::warning(this,"警告","您不是管理员，无法登录");
            }
        }else
        {
            QMessageBox::warning(this,"警告","密码不能为空");
        }
    }else
    {
        QMessageBox::warning(this,"警告","账号不能为空");
    }

}

void LoginForm::on_pb_logup_clicked()
{
    qDebug() << "on_pb_logup_clicked()";
}

void LoginForm::on_pb_forget_clicked()
{
    qDebug() << "on_pb_forget_clicked()";
}
