#include <QtSql>
#include "addnewanimal.h"
#include "ui_addnewanimal.h"

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
    qry->prepare("select Attribute from NP-Attr-List");
    qry->exec();

    model->setQuery(*qry);
    ui->NPABox->setModel(model);

    //close connection
    NPADB.close();

    qDebug() <<(model->rowCount());

}

addNewAnimal::~addNewAnimal()
{
    delete ui;
}

void addNewAnimal::on_cancelbtn_clicked()
{
    this->close();
}
