#include "addnewanimal.h"
#include "ui_addnewanimal.h"
#include "mainwindow.h"

addNewAnimal::addNewAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewAnimal)
{
    ui->setupUi(this);

    //open database and load in contents into main list box
    QSqlDatabase NPADB;
    QSqlQueryModel * model = new QSqlQueryModel();

    //open connection to db
    NPADB = QSqlDatabase::database();
    NPADB.setDatabaseName("/home/student/Documents/comp3004/cuACS_db.db");
    if(!NPADB.open()) {
        qDebug()<<("Failed to open database");
    } else {
        qDebug()<<("Connected to database");
    }

    QSqlQuery * qry = new QSqlQuery();
    qry->prepare("select Attribute from NP_Attr_List");
    qry->exec();

    model->setQuery(*qry);
    ui->NPABox_1->setModel(model);
    ui->NPABox_2->setModel(model);
    ui->NPABox_3->setModel(model);
    ui->NPABox_4->setModel(model);
    ui->NPABox_5->setModel(model);
    ui->NPABox_6->setModel(model);
    ui->NPABox_7->setModel(model);
    ui->NPABox_8->setModel(model);
    ui->NPABox_9->setModel(model);
    ui->NPABox_10->setModel(model);
    ui->NPABox_11->setModel(model);
    ui->NPABox_12->setModel(model);

    //close connection
    NPADB.close();
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
    PAList->append(ui->txtAge->toPlainText());
    //size
    PAList->append(ui->txtSize->toPlainText());
    //color
    PAList->append(ui->txtColor->toPlainText());
    //neutered
    if (ui->radYesN->isChecked()){
        PAList->append("Yes");
    } else if (ui->radNoN->isChecked()) {
        PAList->append("No");
    } else {
        PAList->append("NULL");
    };
    //hypo
    if (ui->radYesH->isChecked()){
        PAList->append("Yes");
    } else if (ui->radNoH->isChecked()) {
        PAList->append("No");
    } else {
        PAList->append("NULL");
    };
    //declawed
    if (ui->radYesD->isChecked()){
        PAList->append("Yes");
    } else if (ui->radNoD->isChecked()) {
        PAList->append("No");
    } else {
        PAList->append("NULL");
    };
    //moulting
    if (ui->radYesM->isChecked()){
        PAList->append("Yes");
    } else if (ui->radNoM->isChecked()) {
        PAList->append("No");
    } else {
        PAList->append("NULL");
    };

    //add values to NPAList
    QList<QString>* NPAList = new QList<QString>();
    //nothing yet

    //open database
    QSqlDatabase AnimalDB;

    //open connection to db
    AnimalDB = QSqlDatabase::database();
    AnimalDB.setDatabaseName("/home/student/Documents/comp3004/cuACS_db.db");
    if(!AnimalDB.open()) {
        qDebug()<<("Failed to open database");
    } else {
        qDebug()<<("Connected to database");
    }

    //set up query
    QSqlQuery qry;
    qry.prepare("INSERT INTO Animals ("
                "Name,"
                "Species,"
                "Breed,"
                "Sex,"
                "Age,"
                "Size,"
                "Color,"
                "Spayed,"
                "Declawed,"
                "Hypoallergenic,"
                "Moulting)"
                "VALUES (?,?,?,?,?,?,?,?,?,?,?);"
                );
    qry.addBindValue(Name);
    qry.addBindValue(PAList->value(0));
    qry.addBindValue(PAList->value(1));
    qry.addBindValue(PAList->value(2));
    qry.addBindValue(PAList->value(3));
    qry.addBindValue(PAList->value(4));
    qry.addBindValue(PAList->value(5));
    qry.addBindValue(PAList->value(6));
    qry.addBindValue(PAList->value(7));
    qry.addBindValue(PAList->value(8));
    qry.addBindValue(PAList->value(9));

    if(!qry.exec())
    {
        qDebug() <<("Error adding values to DB");
    }

    //close db
    AnimalDB.close();

    //create new animal
    Animal* newAnimal = new Animal(Name, PAList, NPAList);

    //show animals and add to dynamic animal list
    uiMain->updateAnimals(newAnimal);
    this->close();
}







