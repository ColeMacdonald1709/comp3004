#include "animal.h"

//Base Class
//general constructors
Animal::Animal(const QString & aName, QList<QString>* PAttribute, QList<QString>* NPAttribute){
    name = aName;
    PAttr = PAttribute;
    NPAttr = NPAttribute;
}
Animal::Animal(const QString & aName){
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

void Animal::viewProfile(){}

QList<QString>* Animal::getPAttr() { return PAttr; }
void Animal::addPAttr(QString attribute) { PAttr->append(attribute); }
void Animal::remPAttr(QString attribute) { PAttr->removeAt(PAttr->indexOf(attribute)); }

QList<QString>* Animal::getNPAttr() {return NPAttr;}
void Animal::addNPAttr(QString attribute) { NPAttr->append(attribute); }
void Animal::remNPAttr(QString attribute) { NPAttr->removeAt(NPAttr->indexOf(attribute)); }
