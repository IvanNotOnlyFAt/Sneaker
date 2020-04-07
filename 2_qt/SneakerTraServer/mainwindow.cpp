#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->hide();
    ui->statusBar->hide();
    this->setContextMenuPolicy(Qt::NoContextMenu);

    m_userForm = new UserForm(ui->widget);
//    m_userForm->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
