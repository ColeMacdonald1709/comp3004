/**
COMP3004A/B W19 - Project Deliverable 4 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "manageanimal.h"

ManageAnimal::ManageAnimal(DBServer* dbserver, UIServer* uiserver)
{
    ui = uiserver;
    db = dbserver;
}

int ManageAnimal::animal_size(){return db->get_animal_size();}
void ManageAnimal::get_animal(int i, QString* name, QList<QString>* PA)
{
    db->get_animal(i,name,PA);
}
void ManageAnimal::set_client_view()
{
    ui->manageanimalUIC->manageanimalUI->addNewAnimalbtn->hide();
}
void ManageAnimal::set_staff_view()
{
    ui->manageanimalUIC->manageanimalUI->addNewAnimalbtn->show();
}
void ManageAnimal::get_animal(int i ,QString* name,QList<QString>* PA,QList<QString> *NPA)
{
    db->get_animal(i,name,PA,NPA);
}
void ManageAnimal::open_edit_animal()
{
    QString name = ui->manageanimalUIC->manageanimalUI->txt_Name->text();
    ui->editanimalUIC->load_info(&name);
}
void ManageAnimal::back()
{
    ui->logout();
}
