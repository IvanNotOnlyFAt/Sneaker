#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->hide();
    ui->statusBar->hide();
    this->setContextMenuPolicy(Qt::NoContextMenu);
//    ///普通法
//    ui->mainToolBar->hide();
//    m_userForm = new UserForm(ui->widget);
//    m_fansform = new FansForm(ui->widget);
//    m_traderform = new TraderForm(ui->widget);
//    m_storeform = new StoreForm(ui->widget);
//    m_merchform = new MerchForm(ui->widget);
//    m_trolleyform = new TrolleyForm(ui->widget);
//    m_tranform = new TranForm(ui->widget);
//    m_userForm->hide();
//    m_fansform->hide();
//    m_traderform->hide();
//    m_storeform->hide();
//    m_merchform->hide();
//    m_trolleyform->hide();
//    m_tranform->hide();
    ///stack法
    this->setCentralWidget(ui->stackedWidget);
    ui->mainToolBar->hide();
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->widget_login,SIGNAL(signalLoginSuccess(UserInfo)),
            this,SLOT(slotLoginSuccess(UserInfo)));
    m_msgServer = new MsgServer;

}

MainWindow::~MainWindow()
{
    delete m_msgServer;
    delete ui;
}

void MainWindow::slotLoginSuccess(UserInfo info)
{
    qDebug() << "Welcome to";
    info.display();

    ui->mainToolBar->show();
    this->setWindowTitle("SNEAKER|吾鞋 管理系统["+info.getID()+"]");
    on_actionHome_triggered();
}

void MainWindow::on_actionHome_triggered()
{
    ui->actionHome->setEnabled(false);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_actionUser_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(false);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_actionFans_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(false);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_actionTrader_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(false);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_actionStore_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(false);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_actionMerch_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(false);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_actionTrolley_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(false);
    ui->actionTransa->setEnabled(true);
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_actionTransa_triggered()
{
    ui->actionHome->setEnabled(true);
    ui->actionUser->setEnabled(true);
    ui->actionFans->setEnabled(true);
    ui->actionTrader->setEnabled(true);
    ui->actionStore->setEnabled(true);
    ui->actionMerch->setEnabled(true);
    ui->actionTrolley->setEnabled(true);
    ui->actionTransa->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(8);
}
