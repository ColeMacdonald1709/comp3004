/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "editanimal.h"

EditAnimal::EditAnimal(UIServer* uiserver){ui = uiserver;}
EditAnimal::EditAnimal(DBServer* dbserver){db = dbserver;}

EditAnimal::~EditAnimal(){}

void EditAnimal::set_up(QString* name, QList<QString>* PA, QList<QString>* NPA)
{
    db->get_animal(name, PA, NPA);
}
void EditAnimal::editAnimal(QString* name, QList<QString>* PAList, QList<QString>* NPAList)
{
    db->editAnimalProfile(name, PAList, NPAList);
}
