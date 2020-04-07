#ifndef CONNECTSQLITE_H
#define CONNECTSQLITE_H


class ConnectSQlite
{
public:
    ConnectSQlite();
    bool createConnection();
    void closeConnection();
};

#endif // CONNECTSQLITE_H
