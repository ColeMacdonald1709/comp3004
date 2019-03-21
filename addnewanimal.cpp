/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "addnewanimal.h"

AddNewAnimal::AddNewAnimal(DBServer* dbserver, UIServer* uiserver)
{
    ui = uiserver;
    db = dbserver;
}
bool AddNewAnimal::animal_exists(QString* name)
{
    return db->verify_animal(name);
}
void AddNewAnimal::add_new_animal(QString* name, QList<QString>* PA, QList<QString>* NPA)
{
    Animal* newanimal;
    QString species = PA->at(0);
    if(species == "Dog"){newanimal = new Dog(*name,PA,NPA);}
    else if(species == "Cat"){newanimal = new Cat(*name,PA,NPA);}
    else if(species == "Rabbit"){newanimal = new Rabbit(*name,PA,NPA);}
    else if(species == "Bird"){newanimal = new Bird(*name,PA,NPA);}
    else if(species == "Fish"){newanimal = new Fish(*name,PA,NPA);}
    else{newanimal = new Animal(*name,PA,NPA);}

    db->add_new_animal(newanimal);
}

