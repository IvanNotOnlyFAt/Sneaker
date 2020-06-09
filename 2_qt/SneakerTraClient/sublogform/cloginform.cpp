#include "cloginform.h"
#include "ui_cloginform.h"
#include <QDebug>

#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QMessageBox>

CLoginForm::CLoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CLoginForm)
{
    ui->setupUi(this);
 
}

CLoginForm::~CLoginForm()
{
    delete ui;
}
void CLoginForm::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix(":/images/back3.png");
    p.drawPixmap(0,0,pix);
    
}
void CLoginForm::closeEvent(QCloseEvent *ev)
{
//    emit signalUserLogout();
    qDebug() << "emit signalUserClose();";
    emit signalUserClose();
    ev->ignore();
    //ignore();清除事件对象的接受标志参数，等效于调用setAccepted（false）。
    //清除accept参数表示事件接收者不需要该事件。
}
void CLoginForm::userLoginFail(void)
{
    QMessageBox msgBox(this);
    msgBox.setStyleSheet("background-color: rgb(172, 88, 42);");
    msgBox.setText("登录失败");
    msgBox.setInformativeText("用户名或者密码错误，请重新输入！");
    msgBox.setStandardButtons(QMessageBox::Retry | QMessageBox::Close);
    msgBox.setDefaultButton(QMessageBox::Retry);
    
    int res = msgBox.exec();
    switch (res){
    case QMessageBox::Retry: ui->le_id->setFocus();break;
    case QMessageBox::Close: emit signalUserLogout();break;
//    case QMessageBox::Close: emit signalUserClose();break;
    default:
        break;
    }
}
void CLoginForm::on_pb_login_clicked()
{
    qDebug() << "CLoginForm::on_pb_login_clicked()";
    if(ui->le_id->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "用户名不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }else if(ui->le_pswd->text().isEmpty())
    {
        QMessageBox::warning(this, "警告", "密码不能为空!",
                             QMessageBox::Retry|QMessageBox::Close);
    }else
    {
        emit signalUserLogin(ui->le_id->text(),
                             ui->le_pswd->text());
    }
}

void CLoginForm::on_pb_logup_clicked()
{
    qDebug() << "CLoginForm::on_pb_logup_clicked()";
}

void CLoginForm::on_pb_forget_clicked()
{
    qDebug() << "CLoginForm::on_pb_forget_clicked()";
}
