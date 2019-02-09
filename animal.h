#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <ostream>
#include <string>
#include <list> 

using namespace std;

//Animal is an abstract class
class Animal {
	public:
	   Animal(const string & aName, list<string> & PAttr, list<string> & NPAttr, const int anId = -1);
		 Animal(const string & aName, const int anId = -1);
	   ~Animal(void);

     int getAnimalID();
     string getAnimalName();

		 list<string> getPAttr();
		 void addPAttr(string attribute);
		 void remPAttr(string attribute);

		 list<string> getNPAttr();
		 void addNPAttr(string attribute);
		 void remNPAttr(string attribute);

     string toString() const;

	private:
	   string name;
     list<string> PAttr;
     list<string> NPAttr;
	   int id;
};

ostream & operator<<(ostream & out, const Animal & anAnimal);

#endif

/*
string species;
string breed;
int age;
string gender;
string size;
string color;
bool neutered;
bool declawed;
bool hypoallergenic;
bool moulting;
*/

class Dog: public Animal {
	public:
		Dog(const string & aName, list<string> & PAttr, list<string> & NPAttr, const int anId) : Animal(aName, PAttr, NPAttr, andId) {}
}

class Cat: public Animal {
	public:
		Cat(const string & aName, list<string> & PAttr, list<string> & NPAttr, const int anId) : Animal(aName, PAttr, NPAttr, andId) {}
}

class Rabbit: public Animal {
	public:
		Rabbit(const string & aName, list<string> & PAttr, list<string> & NPAttr, const int anId) : Animal(aName, PAttr, NPAttr, andId) {}
}

class Bird: public Animal {
	public:
		Bird(const string & aName, list<string> & PAttr, list<string> & NPAttr, const int anId) : Animal(aName, PAttr, NPAttr, andId) {}
}

class Fish: public Animal {
	public:
		Fish(const string & aName, list<string> & PAttr, list<string> & NPAttr, const int anId) : Animal(aName, PAttr, NPAttr, andId) {}
}
