/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
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
class AddNewAnimal;
}

class AddNewAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewAnimal(QWidget *parent = 0);
    ~AddNewAnimal();
    ManageAnimal *uiMain;

private slots:
    void on_cancelbtn_clicked();
    void on_addAnimalbtn_clicked();

private:
    Ui::AddNewAnimal *ui;
    QSqlDatabase AnimalDB;
};

#endif // ADDNEWANIMAL_H
