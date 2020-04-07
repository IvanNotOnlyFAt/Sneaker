#include "connectmysql.h"
#include <QSqlDatabase>
#include <QSqlError>

ConnectMySQL::ConnectMySQL()
{

}
bool ConnectMySQL::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQLDriver");
    db.setHostName("localhost");
    db.setDatabaseName("sneakerdb");
    db.setUserName("root");
    db.setPassword("123456");
    if(!db.open())
    {
        //qCritical(String)Calls the message handler with the critical message "String"
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());
        //toLocal8Bit:Returns the local 8-bit representation of the string as a QByteArray.
        //QByteArray::data():Returns a pointer to the data stored in the byte array.
        //The pointer can be used to access and modify the bytes that compose the array.

        return false;
    }
    return true;
}

void ConnectMySQL::closeConnection()
{
    //QSqlDatabase::database()返回名为connectionName的数据库连接,如果未指定connectionName，则使用默认连接。
    QSqlDatabase::database().close();
}
