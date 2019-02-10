#include <string>
#include "animal.h" 

using namespace std;

//Base Class
//general constructors
Animal::Animal(const string & aName, list<string> & PAttribute, list<string> & NPAttribute){
	name = aName;
	PAttr = PAttribute;
	NPAttr = NPAttribute;
}
Animal::Animal(const string & aName){
	name = aName;
    PAttr = list<string> {};
    NPAttr = list<string> {};
}

//destructor
Animal::~Animal(){}

string Animal::getAnimalName(){return name;}

list<string> Animal::getPAttr() { return PAttr; }
void Animal::addPAttr(string attribute) { PAttr.push_back(attribute); }
void Animal::remPAttr(string attribute) { PAttr.remove(attribute); }

list<string> Animal::getNPAttr() {return NPAttr;}
void Animal::addNPAttr(string attribute) { NPAttr.push_back(attribute); }
void Animal::remNPAttr(string attribute) { NPAttr.remove(attribute); }
