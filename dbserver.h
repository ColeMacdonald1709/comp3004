#ifndef DBSERVER_H
#define DBSERVER_H

#include <QList>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "animal.h"
#include "client.h"


class DBServer
{
public:
    DBServer();
    ~DBServer();
    bool verify_animal(QString*);
    bool verify_client(QString*);
    bool verify_staff(QString*);
    void add_new_animal(Animal*);
    void add_new_client(Client*);
private:
    QList<Animal*> animals;
    QList<Client*> clients;
    QSqlDatabase db;
};

#endif // DBSERVER_H
