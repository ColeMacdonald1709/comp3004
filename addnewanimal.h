/**
COMP3004A/B WIN19 - Project Deliverable 1 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef ADDNEWANIMAL_H
#define ADDNEWANIMAL_H

#include <QDialog>
#include <QString>
#include <QList>
#include <QtSql>
#include "manageanimal.h"

namespace Ui {
class addNewAnimal;
}

class addNewAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit addNewAnimal(QWidget *parent = 0);
    ~addNewAnimal();
    manageAnimal *uiMain;

private slots:
    void on_cancelbtn_clicked();
    void on_addAnimalbtn_clicked();

private:
    Ui::addNewAnimal *ui;
    QSqlDatabase AnimalDB;
};

#endif // ADDNEWANIMAL_H
