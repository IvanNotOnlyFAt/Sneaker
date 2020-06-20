#ifndef CLOGINFORM_H
#define CLOGINFORM_H

#include <QWidget>
#include <QCloseEvent>
#include <QKeyEvent>
namespace Ui {
class CLoginForm;
}

class CLoginForm : public QWidget
{
    Q_OBJECT
signals:
    void signalUserLogin(QString id,QString pswd);
    void signalUserLogout(void);
    void signalUserClose(void);
public:
    explicit CLoginForm(QWidget *parent = 0);
    ~CLoginForm();

    void userLoginFail(void);

private slots:
    void on_pb_login_clicked();
    void on_pb_logup_clicked();
    void on_pb_forget_clicked();

protected:
    void paintEvent(QPaintEvent *);
    void closeEvent(QCloseEvent *ev);
    void keyPressEvent(QKeyEvent *ev);


private:
    Ui::CLoginForm *ui;
};

#endif // CLOGINFORM_H
