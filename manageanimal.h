/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef MANAGEANIMAL_H
#define MANAGEANIMAL_H

#include <QDialog>
#include <QString>

#include "animal.h"
#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class ManageAnimal
{
public:
    ManageAnimal(UIServer*);
    ManageAnimal(DBServer*);
    ~ManageAnimal();
<<<<<<< HEAD
    int animal_size();
    void get_animal(int,QString*,QList<QString>*);
    void get_animal(int,QString*,QList<QString>*,QList<QString>*);
=======
>>>>>>> b6aa78aeda228726d1751e47f8d6cebb49ac33ed
    void get_animal(QString*);
    void updateAnimals(Animal*);
    void set_client_view(QString);
    void set_staff_view(QString);
    void showAnimals();
private:
    DBServer* db;
    UIServer* ui;
};

#endif // MANAGEANIMAL_H
