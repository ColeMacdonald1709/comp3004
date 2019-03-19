/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "animal.h"

//Base Class
//general constructors
Animal::Animal(QString aName, QList<QString>* PAttribute, QList<QString>* NPAttribute){
    name = aName;
    PAttr = PAttribute;
    NPAttr = NPAttribute;
}
Animal::Animal(QString aName){
    name = aName;
    PAttr = new QList<QString>();
    NPAttr = new QList<QString>();
}

//destructor
Animal::~Animal(){
    delete PAttr;
    delete NPAttr;
}

QString Animal::getAnimalName(){return name;}

//may not be necessary
void Animal::viewProfile(){}

//TODO: UPDATE FUNCTION TO ALLOW KEY PAIR VALUE
QList<QString>* Animal::getPAttr() { return PAttr; }

//TODO: UPDATE FUNCTION TO ALLOW KEY PAIR VALUES
void Animal::addPAttr(QString attribute) { PAttr->append(attribute); }

//TODO: UPDATE FUNCTION TO ALLOW KEY PAIR VALUE
void Animal::remPAttr(QString attribute) { PAttr->removeAt(PAttr->indexOf(attribute)); }

//TODO: UPDATE FUNCTION TO ALLOW KEY PAIR VALUE
QList<QString>* Animal::getNPAttr() {return NPAttr;}

//TODO: UPDATE FUNCTION TO ALLOW KEY PAIR VALUE
void Animal::addNPAttr(QString attribute) { NPAttr->append(attribute); }

//TODO: UPDATE FUNCTION TO ALLOW KEY PAIR VALUE
void Animal::remNPAttr(QString attribute) { NPAttr->removeAt(NPAttr->indexOf(attribute)); }
