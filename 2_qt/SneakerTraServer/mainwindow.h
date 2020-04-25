#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "userform.h"
#include "fansform.h"
#include "traderform.h"
#include "storeform.h"
#include "merchform.h"
#include "trolleyform.h"
#include "tranform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionHome_triggered();

    void on_actionUser_triggered();

    void on_actionFans_triggered();

    void on_actionTrader_triggered();

    void on_actionStore_triggered();

    void on_actionMerch_triggered();

    void on_actionTransa_triggered();

    void on_actionTrolley_triggered();

private:
    Ui::MainWindow *ui;
//    UserForm *m_userForm;
//    FansForm *m_fansform;
//    TraderForm *m_traderform;
//    StoreForm *m_storeform;
//    MerchForm *m_merchform;
//    TrolleyForm *m_trolleyform;
//    TranForm *m_tranform;
};

#endif // MAINWINDOW_H
