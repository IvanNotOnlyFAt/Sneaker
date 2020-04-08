#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

#include "connectmysql.h"
#include "connectsqlite.h"
#include "globalvars.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

#if  USE_DATABASE_MySQL
    ConnectMySQL mysql;
    if(mysql.createConnection())
    {
        qDebug() << "MySQL Success: connect DB!!";
    }
#else
    ConnectSQlite sqlite;
    if(sqlite.createConnection())
    {
        qDebug() << "SQlite Success: connect DB!!";
    }
#endif

    MainWindow w;
    w.show();

    int res = app.exec();

#if  USE_DATABASE_MySQL
    mysql.closeConnection();
#else
    sqlite.closeConnection();
#endif
    return res;
}
