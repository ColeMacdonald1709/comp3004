#ifndef DBSERVER_H
#define DBSERVER_H

#include "animal.h"
#include "client.h"
#include <QList>
#include <QString>
#include <QSqlDatabase>

class DBServer
{
public:
    DBServer();
    ~DBServer();
    bool verify_client(QString*);
    bool verify_staff(QString*);
private:
    QList<Animal*> animals;
    QList<Client*> clients;
    QSqlDatabase db;
};

#endif // DBSERVER_H
