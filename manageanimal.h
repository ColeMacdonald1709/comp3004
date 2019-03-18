/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef MANAGEANIMAL_H
#define MANAGEANIMAL_H

#include <QDialog>
#include <QString>

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;

class ManageAnimal : public QDialog
{
public:
    ManageAnimal(UIServer*);
    ManageAnimal(DBServer*);
    ~ManageAnimal();
    void updateAnimals(Animal*);
    void showAnimals();
    void loadAnimals();

private:
    DBServer* db;
    UIServer* ui;
};

#endif // MANAGEANIMAL_H
