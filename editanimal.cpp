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

<<<<<<< HEAD
void EditAnimal::set_up(QString* name, QList<QString>* PA, QList<QString>* NPA)
{
    db->get_animal(name, PA, NPA);
}
void editAnimal(QString* name, QList<QString>* PAList, QList<QString>* NPAList)
{
=======
void editAnimal(QString* name, QList<QString>* PAList, QList<QString>* NPAList){
>>>>>>> b6aa78aeda228726d1751e47f8d6cebb49ac33ed
    db->editAnimalProfile(name, PAList, NPAList);
}
