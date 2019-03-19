/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "manageanimal.h"

ManageAnimal::ManageAnimal(UIServer* uiserver){ui = uiserver;}
ManageAnimal::ManageAnimal(DBServer* dbserver){db = dbserver;}

ManageAnimal::~ManageAnimal(){}
void ManageAnimal::set_client_view(QString n){
    ui->addAnimalbtn->show();
}
void ManageAnimal::set_staff_view(QString n){
    ui->addAnimalbtn->show();
}
void ManageAnimal::showAnimals()
{
//show all animals
    QFont boldfont;
    boldfont.setBold(true);
    for(int i=0;i<db->get_size();i++){
        UIServer::manageanimalUI->animalView->insertRow(i);
        Animal* curr = db->get_Animal(i);
        QList<QString>* PAttr = curr->getPAttr();

        QTableWidgetItem* table_cell = new QTableWidgetItem;
        UIServer::manageanimalUI->animalView->setItem(i,0,table_cell);
        table_cell->setText(curr->getAnimalName());
        table_cell->setFont(boldfont);

        //add click event to show detailed profile on name

        for(int col=0; col<PAttr->size();col++){
            table_cell = new QTableWidgetItem;
            UIServer::manageanimalUI->animalView->setItem(i,col+1,table_cell);
            table_cell->setText(PAttr->at(col));
        }
    }
}
