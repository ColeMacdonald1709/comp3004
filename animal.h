#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>
#include <list> 

using namespace std;

//Animal is an abstract class
class Animal {
    public:
        Animal(const string & aName, list<string> & PAttr, list<string> & NPAttr);
        Animal(const string & aName);
        ~Animal(void);
    protected:
        int getAnimalID();
        string getAnimalName();

        list<string> getPAttr();
        void addPAttr(string attribute);
        void remPAttr(string attribute);

        list<string> getNPAttr();
        void addNPAttr(string attribute);
        void remNPAttr(string attribute);
	private:
        string name;
        list<string> PAttr;
        list<string> NPAttr;
};

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
        Dog(const string & aName, list<string> & PAttr, list<string> & NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Cat: public Animal {
	public:
        Cat(const string & aName, list<string> & PAttr, list<string> & NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Rabbit: public Animal {
	public:
        Rabbit(const string & aName, list<string> & PAttr, list<string> & NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Bird: public Animal {
	public:
        Bird(const string & aName, list<string> & PAttr, list<string> & NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Fish: public Animal {
	public:
        Fish(const string & aName, list<string> & PAttr, list<string> & NPAttr) : Animal(aName, PAttr, NPAttr) {}
};
