#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlError>
#include "addnewanimal.h"
#include "ui_addnewanimal.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//load up animals and clients
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/comp3004/cuACS_db.db");
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
        QString size = animalqry.value("Size").toString();
        PAttr->append(size);
        QString color = animalqry.value("Color").toString();
        PAttr->append(color);
        QString spayed = animalqry.value("Spayed").toString();
        PAttr->append(spayed);
        QString declawed = animalqry.value("Declawed").toString();
        PAttr->append(declawed);
        QString hypo = animalqry.value("Hypoallergenic").toString();
        PAttr->append(hypo);
        QString moulting = animalqry.value("Moulting").toString();
        PAttr->append(moulting);
//add non-physical attributes
        QList<QString>* NPAttr = new QList<QString>();
        Animal* newAnimal = new Animal(name,PAttr,NPAttr);
//add animal to dynamic storage
        animals.append(newAnimal);
    }
    db.close();
    showAnimals();
}

MainWindow::~MainWindow()
{
    delete ui;
    for(int i=0;i<animals.size();i++){
        delete animals.at(i);
    }
}

void MainWindow::on_addAnimalbtn_clicked()
{
    addNewAnimal addAnimal;
    addAnimal.setModal(true);
    addAnimal.exec();
}

void MainWindow::showAnimals()
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
