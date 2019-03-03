/**
COMP3004A/B WIN19 - Project Deliverable 1 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "manageanimal.h"
#include "ui_manageanimal.h"
#include "addnewanimal.h"
#include "ui_addnewanimal.h"

manageAnimal::manageAnimal(int user, QString username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageAnimal)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./cuACS_db.db");
    loadAnimals();
    showAnimals();

    if (user==0) {
        qDebug()<<"Client user "+username+" logged in.";
        ui->lblWelcome->setText("Welcome "+username);
        ui->addAnimalbtn->hide();
    } else if (user==1) {
        qDebug()<<"Staff user logged in.";
        ui->lblWelcome->setText("Welcome Staff User");
        ui->addAnimalbtn->show();
    } else {
        qDebug()<<"User failed to log in.";
    }
}

manageAnimal::~manageAnimal()
{
    delete ui;
    for(int i=0;i<animals.size();i++){
        delete animals.at(i);
    }
}

void manageAnimal::on_addAnimalbtn_clicked()
{
    addNewAnimal addAnimal;
    addAnimal.uiMain = this;
    addAnimal.setModal(true);
    addAnimal.exec();
}

void manageAnimal::showAnimals()
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
void manageAnimal::updateAnimals(Animal* newAnimal){
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
void manageAnimal::loadAnimals(){
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

void manageAnimal::on_animalView_activated(const QModelIndex &index)
{//MAY NEED TO MODIFY TO USE DYNAMIC MEMORY INSTEAD OF DB CALL
 /*   QString animal = ui->animalView->model()->data(index).toString();

    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return;
    }
    db.open();
    QSqlQuery animalqry;
    animalqry.prepare("select * from Animals where Name ='"+animal+"' OR Species = '"+animal+"' OR Breed = '"+animal+"' ");

    if(animalqry.exec())
    {
        while(animalqry.next())
        {
            ui->txt_Name->setText(animalqry.value(0).toString());
            ui->txt_Species->setText(animalqry.value(1).toString());
            ui->txt_Breed->setText(animalqry.value(2).toString());
            ui->txt_Sex->setText(animalqry.value(3).toString());
            ui->txt_Age->setText(animalqry.value(4).toString());
            ui->txt_NPA1->setText(animalqry.value(5).toString());
            ui->txt_NPA2->setText(animalqry.value(6).toString());
            ui->txt_NPA3->setText(animalqry.value(7).toString());
            ui->txt_NPA4->setText(animalqry.value(8).toString());
            ui->txt_NPA5->setText(animalqry.value(9).toString());
            ui->txt_NPA6->setText(animalqry.value(10).toString());
            ui->txt_NPA7->setText(animalqry.value(11).toString());
            ui->txt_NPA8->setText(animalqry.value(12).toString());
            ui->txt_NPA9->setText(animalqry.value(13).toString());
            ui->txt_NPA10->setText(animalqry.value(14).toString());
            ui->txt_NPA11->setText(animalqry.value(15).toString());
            ui->txt_NPA12->setText(animalqry.value(16).toString());
        }

        db.close();
    }
*/
    //access dynamic memory and pull the animal that at index of the row that was clicked

    Animal* selectedAnimal = animals.at(index.row());
   // qDebug()<<selectedAnimal->getAnimalName();

    ui->txt_Name->setText(selectedAnimal->getAnimalName());
    ui->txt_Species->setText(selectedAnimal->getPAttr()->at(0));
    ui->txt_Breed->setText(selectedAnimal->getPAttr()->at(1));
    ui->txt_Sex->setText(selectedAnimal->getPAttr()->at(2));
    ui->txt_Age->setText(selectedAnimal->getPAttr()->at(3));

    ui->txt_NPA1->setText(selectedAnimal->getNPAttr()->at(0));
    ui->txt_NPA2->setText(selectedAnimal->getNPAttr()->at(1));
    ui->txt_NPA3->setText(selectedAnimal->getNPAttr()->at(2));
    ui->txt_NPA4->setText(selectedAnimal->getNPAttr()->at(3));
    ui->txt_NPA5->setText(selectedAnimal->getNPAttr()->at(4));
    ui->txt_NPA6->setText(selectedAnimal->getNPAttr()->at(5));
    ui->txt_NPA7->setText(selectedAnimal->getNPAttr()->at(6));
    ui->txt_NPA8->setText(selectedAnimal->getNPAttr()->at(7));
    ui->txt_NPA9->setText(selectedAnimal->getNPAttr()->at(8));
    ui->txt_NPA10->setText(selectedAnimal->getNPAttr()->at(9));
    ui->txt_NPA11->setText(selectedAnimal->getNPAttr()->at(10));
    ui->txt_NPA12->setText(selectedAnimal->getNPAttr()->at(11));

}

void manageAnimal::on_btnLogout_clicked()
{
    db.close();
    this->close();
}
