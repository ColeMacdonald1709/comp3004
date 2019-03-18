/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef ADDNEWANIMAL_H
#define ADDNEWANIMAL_H

#include <QString>
#include <QList>

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class AddNewAnimal
{
public:
    AddNewAnimal(UIServer*);
    AddNewAnimal(DBServer*);
    bool animal_exists(QString*);
    void add_new_animal(QString*, QList<QString>*, QList<QString>*);
private:
    UIServer* ui;
    DBServer* db;
};

#endif // ADDNEWANIMAL_H
