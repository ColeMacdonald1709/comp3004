/**
COMP3004A/B W19 - Project Deliverable 4 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "animal.h"

Animal::Animal(QString aName, QList<QString>* PAttribute, QList<QString>* NPAttribute){
    name = aName;
    PAttr = PAttribute;
    NPAttr = NPAttribute;
    neighbours = new std::vector<Client*>();
}
Animal::Animal(QString aName){
    name = aName;
    PAttr = new QList<QString>();
    NPAttr = new QList<QString>();
    neighbours = new std::vector<Client*>();
}
Animal::~Animal(){
    delete PAttr;
    delete NPAttr;
    delete neighbours;
}
QString Animal::getAnimalName()const{return name;}
void Animal::viewProfile(){}
QList<QString>* Animal::getPAttr() { return PAttr; }
void Animal::addPAttr(QString attribute) { PAttr->append(attribute); }
void Animal::remPAttr(QString attribute) { PAttr->removeAt(PAttr->indexOf(attribute)); }
QList<QString>* Animal::getNPAttr() {return NPAttr;}
void Animal::addNPAttr(QString attribute) { NPAttr->append(attribute); }
void Animal::remNPAttr(QString attribute) { NPAttr->removeAt(NPAttr->indexOf(attribute)); }

//ACM stuff
void Animal::set_label(float l)
{
    Animal::label = l;
}
float Animal::get_label()
{
    return Animal::label;
}
std::vector<Client*>* Animal::get_neighbours()
{
    return neighbours;
}
bool Animal::operator <(Animal* other) const
{
    return (this->name < other->name);
}
