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

    /*conect to database*/
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("cuACS_db.db");
    /*show error if not open*/
    if (!db.open()){
        qDebug()<<("Failed to open database");
    } else {
        qDebug()<<("Connected to database");
    }

    db.close();
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_addAnimalbtn_clicked()
{
    addNewAnimal addAnimal;
    addAnimal.setModal(true);
    addAnimal.exec();
}

void MainWindow::on_viewAnimalsbtn_clicked()
{
    //open database and load in contents into main list box
    QSqlDatabase animalDB;
    QSqlQueryModel * model = new QSqlQueryModel();

    //open connection to db
    animalDB = QSqlDatabase::database();
    animalDB.setDatabaseName("cuACS_db.db");
    if(!animalDB.open()) {
        qDebug()<<("Failed to open database");
    } else {
        qDebug()<<("Connected to database");
    }

    QSqlQuery * qry = new QSqlQuery();
    qry->prepare("select * from Animals");
    qry->exec();

    model->setQuery(*qry);
    ui->tblAnimals->setModel(model);

    //close connection
    animalDB.close();

    qDebug() <<(model->rowCount());


}
