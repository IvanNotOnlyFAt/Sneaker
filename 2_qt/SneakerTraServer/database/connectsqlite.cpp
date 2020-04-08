#include "connectsqlite.h"
#include <QSqlDatabase>
#include <QSqlError>
ConnectSQlite::ConnectSQlite()
{

}
bool ConnectSQlite::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("../SneakerTraServer/database/sneaker.db");

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

void ConnectSQlite::closeConnection()
{
    //QSqlDatabase::database()返回名为connectionName的数据库连接,如果未指定connectionName，则使用默认连接。
    QSqlDatabase::database().close();
}
