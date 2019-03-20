/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "manageanimal.h"

ManageAnimal::ManageAnimal(UIServer* uiserver){ui = uiserver;}
ManageAnimal::ManageAnimal(DBServer* dbserver){db = dbserver;}
ManageAnimal::~ManageAnimal(){}

int ManageAnimal::animal_size(){return db->get_animal_size();}
void ManageAnimal::get_animal(int i, QString* name, QList<QString>* PA)
{
    db->get_animal(i,name,PA);
}

void ManageAnimal::set_client_view(QString n){
    ui->addAnimalbtn->hide();
}
void ManageAnimal::set_staff_view(QString n){
    ui->addAnimalbtn->show();
}

void ManageAnimal::showAnimals()
{
    db->get_animal(i,name,PA,NPA);
}
