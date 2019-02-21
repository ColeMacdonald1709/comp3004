/**
COMP3004A/B WIN19 - Project Deliverable 1 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef MANAGEANIMAL_H
#define MANAGEANIMAL_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "animal.h"

namespace Ui {
class manageAnimal;
}

class manageAnimal : public QMainWindow
{
    Q_OBJECT

public:
    explicit manageAnimal(QWidget *parent = 0);
    ~manageAnimal();
    void loadAnimals();
    void updateAnimals(Animal*);

private slots:
    void on_addAnimalbtn_clicked();
    void showAnimals();

private:
    Ui::manageAnimal *ui;
    QList<Animal*> animals;
};

#endif // MANAGEANIMAL_H
