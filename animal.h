/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <bits/stdc++.h>

#include "client.h"

#include <QString>
#include <QList>

class Client;
//Animal is an abstract class
class Animal {
    public:
        Animal(QString aName, QList<QString>* PAttr, QList<QString>* NPAttr);
        Animal(QString aName);
        ~Animal(void);

        QString getAnimalName();
        void viewProfile();

        QList<QString>* getPAttr();
        void addPAttr(QString attribute);
        void remPAttr(QString attribute);

        QList<QString>* getNPAttr();
        void addNPAttr(QString attribute);
        void remNPAttr(QString attribute);
        //ACM stuff
        float get_label();
        void set_label(float);
        bool empty_neighbour();
        std::set<Client*>* get_neighbours();
    protected:
        //ACM stuff
        float label = 0.0f;
        std::set<Client*>* neighbours;
    private:
        QString name;
        QList<QString>* PAttr;
        QList<QString>* NPAttr;
};

class Dog: public Animal {
    public:
        Dog(QString aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Cat: public Animal {
    public:
        Cat(QString aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Rabbit: public Animal {
    public:
        Rabbit(QString aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Bird: public Animal {
    public:
        Bird(QString aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

class Fish: public Animal {
    public:
        Fish(QString aName, QList<QString>* PAttr, QList<QString>* NPAttr) : Animal(aName, PAttr, NPAttr) {}
};

#endif
