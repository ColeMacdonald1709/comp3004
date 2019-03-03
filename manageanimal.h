/**
COMP3004A/B WIN19 - Project Deliverable 1 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef MANAGEANIMAL_H
#define MANAGEANIMAL_H

#include <QDialog>
#include <QtSql>
#include <QSqlError>
#include <QtDebug>
#include <QFileInfo>
#include <QString>
#include "animal.h"
#include "login.h"

namespace Ui {
class manageAnimal;
}

class manageAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit manageAnimal(int user, QString username = "Staff", QWidget *parent = 0);
    ~manageAnimal();
    Login *uiMain;

    void updateAnimals(Animal*);

private slots:
    void on_addAnimalbtn_clicked();
    void showAnimals();
    void loadAnimals();

    void on_animalView_activated(const QModelIndex &index);
    void on_btnLogout_clicked();

private:
    Ui::manageAnimal *ui;
    QList<Animal*> animals;
    QSqlDatabase db;
};

#endif // MANAGEANIMAL_H
