/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

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
    void get_client(int, QString*, QString*, QString*);
private:
    QList<Animal*> animals;
    QList<Client*> clients;
    QSqlDatabase db;
};

#endif // DBSERVER_H
