/**
COMP3004A/B W19 - Project Deliverable 4 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef EDITANIMAL_H
#define EDITANIMAL_H

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class EditAnimal
{
public:
    EditAnimal(DBServer*,UIServer*);
    void set_up(QString*,QList<QString>*,QList<QString>*);
    void editAnimal(QString*, QList<QString>*, QList<QString>*);
private:
    DBServer* db;
    UIServer* ui;
};

#endif // EDITANIMAL_H
