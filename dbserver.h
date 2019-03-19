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
    int add_new_animal(Animal*);
    int add_new_client(Client*);
    void editClientProfile(QString*, QString*, QString*, QList<QString>*, QList<QString>*);
    void editAnimalProfile(QString*, QList<QString>*, QList<QString>*);
    void get_client(int, QString*, QString*, QString*);
    int get_size();
    Animal* get_Animal(int);
private:
    QList<Animal*> animals;
    QList<Client*> clients;
    QSqlDatabase db;
};

#endif // DBSERVER_H
