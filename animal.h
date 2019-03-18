/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <QString>
#include <QList>

//Animal is an abstract class
class Animal {
    public:
        Animal(const QString & aName, QList<QString>* PAttr, QList<QString>* NPAttr);
        Animal(const QString & aName);
        ~Animal(void);

        QString getAnimalName();

        void viewProfile();

        QList<QString>* getPAttr();
        void addPAttr(QString attribute);
        void remPAttr(QString attribute);

        QList<QString>* getNPAttr();
        void addNPAttr(QString attribute);
        void remNPAttr(QString attribute);
    private:
        QString name;
        QList<QString>* PAttr;
        QList<QString>* NPAttr;
};



/*
string species;
string breed;
int age;
string gender;
*/

class Dog: public Animal {
    public:
        Dog(const QString & aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Cat: public Animal {
    public:
        Cat(const QString & aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Rabbit: public Animal {
    public:
        Rabbit(const QString & aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Bird: public Animal {
    public:
        Bird(const QString & aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Fish: public Animal {
    public:
        Fish(const QString & aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

#endif
