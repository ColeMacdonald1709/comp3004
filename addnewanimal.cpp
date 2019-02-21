/**
COMP3004A/B WIN19 - Project Deliverable 1 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "addnewanimal.h"
#include "ui_addnewanimal.h"
#include "manageanimal.h"

addNewAnimal::addNewAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewAnimal)
{
    ui->setupUi(this);
}

addNewAnimal::~addNewAnimal()
{
    delete ui;
}

void addNewAnimal::on_cancelbtn_clicked()
{
    this->close();
}

void addNewAnimal::on_addAnimalbtn_clicked()
{

    QString Name;
    QList<QString>* PAList = new QList<QString>();
    //QList<QString> NPAList;

    //name
    Name = ui->txtName->toPlainText();
    //add values to PALIST
    //species
    if (ui->radDog->isChecked()){
        PAList->append("Dog");
    } else if (ui->radCat->isChecked()){
        PAList->append("Cat");
    } else if (ui->radRabbit->isChecked()){
        PAList->append("Rabbit");
    } else if (ui->radBird->isChecked()){
        PAList->append("Bird");
    } else if (ui->radFish->isChecked()){
        PAList->append("Fish");
    } else {
        PAList->append("NULL");
    };
    //breed
    PAList->append(ui->txtBreed->toPlainText());
    //sex
    if (ui->radMale->isChecked()){
        PAList->append("Male");
    } else if (ui->radFemale->isChecked()) {
        PAList->append("Female");
    } else {
        PAList->append("NULL");
    };
    //age
    PAList->append(ui->ageComboBox->currentText().toStdString().c_str());

    //add values to NPAList
    QList<QString>* NPAList = new QList<QString>();
    //nothing yet

    //open database
    QSqlDatabase AnimalDB;

    //open connection to db
    AnimalDB = QSqlDatabase::database();
    AnimalDB.setDatabaseName("./cuACS_db.db");
    if(!AnimalDB.open()) {
        qDebug()<<("Failed to open database");
    } else {
        qDebug()<<("Connected to database");
    }

    //set up query
    QSqlQuery qry;
    qry.prepare("INSERT INTO Animals (Name, Species, Breed, Sex, Age)"
                "VALUES (?,?,?,?,?)");
    //name
    qry.addBindValue(Name);
    //species
    qry.addBindValue(PAList->value(0));
    //breed
    qry.addBindValue(PAList->value(1));
    //sex
    qry.addBindValue(PAList->value(2));
    //age
    qry.addBindValue(PAList->value(3));

    if(!qry.exec())
    {
        qDebug() <<("Error adding values to DB");
        qDebug() << qry.lastError();
    }

    //close db
    AnimalDB.close();

    //create new animal
    Animal* newAnimal = new Animal(Name, PAList, NPAList);

    //show animals and add to dynamic animal list
    uiMain->updateAnimals(newAnimal);
    this->close();
}
