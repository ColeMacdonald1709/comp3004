/**
COMP3004A/B WIN19 - Project Deliverable 1 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "manageanimal.h"
#include "ui_manageanimal.h"
#include <QSqlError>
#include "addnewanimal.h"
#include "ui_addnewanimal.h"

manageAnimal::manageAnimal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::manageAnimal)
{
    ui->setupUi(this);
    loadAnimals();
    showAnimals();
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
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("./cuACS_db.db");
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
            Animal* newAnimal = new Animal(name,PAttr,NPAttr);
    //add animal to dynamic storage
            animals.append(newAnimal);
        }
        db.close();
}
