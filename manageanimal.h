/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef MANAGEANIMAL_H
#define MANAGEANIMAL_H

#include <QDialog>
#include <QString>
#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class ManageAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit ManageAnimal(int user, QString username = "Staff", QWidget *parent = 0);
    ~ManageAnimal();
    Login *uiMain;

    void UpdateAnimals(Animal*);

private slots:
    void on_addAnimalbtn_clicked();
    void showAnimals();
    void loadAnimals();

    void on_animalView_activated(const QModelIndex &index);
    void on_btnLogout_clicked();

private:
    Ui::ManageAnimal *ui;
    QList<Animal*> animals;
    QSqlDatabase db;
};

#endif // MANAGEANIMAL_H
