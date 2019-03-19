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
void ManageAnimal::showAnimals()
{
//show all animals
    QFont boldfont;
    boldfont.setBold(true);
    for(int i=0;i<animals.size();i++){
        ui->animalView->insertRow(i);
        Animal* curr = animals.at(i);
        QList<QString>* PAttr = curr->getPAttr();

        QTableWidgetItem* table_cell = new QTableWidgetItem;
        ui->animalView->setItem(i,0,table_cell);
        table_cell->setText(curr->getAnimalName());
        table_cell->setFont(boldfont);

        //add click event to show detailed profile on name

        for(int col=0; col<PAttr->size();col++){
            table_cell = new QTableWidgetItem;
            ui->animalView->setItem(i,col+1,table_cell);
            table_cell->setText(PAttr->at(col));
        }
    }
}
void ManageAnimal::updateAnimals(Animal* newAnimal){
    animals.append(newAnimal);
    QFont boldfont;
    boldfont.setBold(true);
    int newRow = ui->animalView->rowCount();
    ui->animalView->insertRow(newRow);
    QList<QString>* PAttr = newAnimal->getPAttr();

    QTableWidgetItem* table_cell = new QTableWidgetItem;
    ui->animalView->setItem(newRow,0,table_cell);
    table_cell->setText(newAnimal->getAnimalName());
    table_cell->setFont(boldfont);
//add click event to show detailed profile on name

    for(int col=0; col<PAttr->size();col++){
        table_cell = new QTableWidgetItem;
        ui->animalView->setItem(newRow,col+1,table_cell);
        table_cell->setText(PAttr->at(col));
    }
}
void ManageAnimal::loadAnimals(){
    //load up animals and clients
        if (!db.open())
        {
            qDebug()<<"Failed to open cuACS database";
            return;
        }
        db.open();
        QSqlQuery animalqry("select * from Animals");
        while(animalqry.next()){
            QString name = animalqry.value("Name").toString();
    //add physical attributes
            QList<QString>* PAttr = new QList<QString>();
            QString species = animalqry.value("Species").toString();
            PAttr->append(species);
            QString breed = animalqry.value("Breed").toString();
            PAttr->append(breed);
            QString sex = animalqry.value("Sex").toString();
            PAttr->append(sex);
            QString age = animalqry.value("Age").toString();
            PAttr->append(age);

    //add non-physical attributes
            QList<QString>* NPAttr = new QList<QString>();

            QString npa1 = animalqry.value("NPA1").toString();
            NPAttr->append(npa1);
            QString npa2 = animalqry.value("NPA2").toString();
            NPAttr->append(npa2);
            QString npa3 = animalqry.value("NPA3").toString();
            NPAttr->append(npa3);
            QString npa4 = animalqry.value("NPA4").toString();
            NPAttr->append(npa4);
            QString npa5 = animalqry.value("NPA5").toString();
            NPAttr->append(npa5);
            QString npa6 = animalqry.value("NPA6").toString();
            NPAttr->append(npa6);
            QString npa7 = animalqry.value("NPA7").toString();
            NPAttr->append(npa7);
            QString npa8 = animalqry.value("NPA8").toString();
            NPAttr->append(npa8);
            QString npa9 = animalqry.value("NPA9").toString();
            NPAttr->append(npa9);
            QString npa10 = animalqry.value("NPA10").toString();
            NPAttr->append(npa10);
            QString npa11 = animalqry.value("NPA11").toString();
            NPAttr->append(npa11);
            QString npa12 = animalqry.value("NPA12").toString();
            NPAttr->append(npa12);

            Animal* newAnimal = new Animal(name,PAttr,NPAttr);
    //add animal to dynamic storage
            animals.append(newAnimal);
        }
        db.close();
}

void set_client_view(QString username) {

}

void set_staff_view(QString username) {

}
