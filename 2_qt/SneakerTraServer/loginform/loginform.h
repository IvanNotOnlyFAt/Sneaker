#ifndef LOGINFORM_H
#define LOGINFORM_H

#include "userinfo.h"

#include <QWidget>

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT
signals:
    void signalLoginSuccess(UserInfo info);
public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();

private slots:
    void on_pb_login_clicked();

    void on_pb_logup_clicked();

    void on_pb_forget_clicked();

private:
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
