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

#endif

/*
string species;
string breed;
int age;
string gender;
string size;
string color;
string neutered;
string declawed;
string hypoallergenic;
string moulting;
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
