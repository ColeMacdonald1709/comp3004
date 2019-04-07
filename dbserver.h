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
#include "addnewanimal.h"
#include "addnewclient.h"
#include "clientportal.h"
#include "editanimal.h"
#include "editclient.h"
#include "login.h"
#include "manageanimal.h"
#include "manageclient.h"
#include "staffportal.h"
#include "acm.h"

class DBServer
{
public:
    DBServer();
    ~DBServer();

    void loadAnimals();
    void loadClients();

    bool verify_animal(QString*);

    bool verify_client(QString*);
    bool verify_staff(QString*);

    void add_new_animal(Animal*);
    void add_new_client(Client*);

    void get_client(int, QString*, QString*, QString*);
    void get_client(int, QString*, QString*, QString*, QList<QString>*, QList<QString>*);
    void get_client(QString* , QString* , QString* , QList<QString>* , QList<QString>* );
    void get_client(QString*, QList<QString>*, QList<QString>*);
    void get_client(int, QString*, QList<QString>*,QList<QString>*);

    void get_animal(int, QString*, QList<QString>*,QList<QString>*);
    void get_animal(int, QString*, QList<QString>*);
    void get_animal(QString*, QList<QString>*, QList<QString>*);

    int get_animal_size();
    int get_client_size();

    void editAnimalProfile(QString*, QList<QString>*, QList<QString>*);
    void editClientProfile(QString*, QString*, QString*, QList<QString>*,QList<QString>*);

    void get_breeds(QString*,QList<QString>*);
    void init();

    QList<Animal*>* get_animals();
    QList<Client*>* get_clients();
private:
    QList<Animal*>* animals;
    QList<Client*>* clients;
    QSqlDatabase db;
};

#endif // DBSERVER_H
