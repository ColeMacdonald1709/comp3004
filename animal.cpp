#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

//Base Class
//general constructors
Animal::Animal(const string & aName, list<string> & PAttribute, list<string> & NPAttribute, const int anId){
	cout << "Animal(string&, list<string>&, list<string>&, int) " << this << endl;
	name = aName;
	PAttr = PAttribute;
	NPAttr = NPAttribute;
	id = anID;
}
Animal::Animal(const string & aName, const int anId){
	cout << "Animal(string&, int) " << this << endl;
	name = aName;
	PAttr = list<string> x;
	NPAttr = list<string> y;
	id = anID;
}

//destructor
Animal::~Animal(){
	cout << "~Animal(void) "  << this << endl;
}

int Animal::getAnimalID(){return id;}
int Animal::getAnimalName(){return name;}

list<string> getPAttr() { return PAList; };
void addPAttr(string attribute) { PAList.push_back(attribute); };
void remPAttr(string attribute) { PAList.remove(attribute); };

list<string> getNPAttr() {return NPAList};
void addNPAttr(string attribute) { NPAList.push_back(attribute); };
void remNPAttr(string attribute) { NPAList.remove(attribute); };

string Animal::toString()const {
	return to_string(id) + " " + name;
}

ostream & operator<<(ostream & out, const Animal & anAnimal){
	out << anAnimal.toString() << endl;
	return out;
}
