/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "addnewclient.h"
#include "ui_addnewclient.h"

AddNewClient::AddNewClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewClient)
{
    ui->setupUi(this);
}

AddNewClient::~AddNewClient()
{
    delete ui;
}

void AddNewClient::on_cancel_button_clicked()
{
    this->close();
}

void AddNewClient::on_pushButton_2_clicked()
{
    QString name, phone, email;
    name = ui->name_txt->text();
    phone = ui->phone_txt->text();
    email = ui->email_txt->text();

    //get NPA's when implemented

    //open connection to db
    ClientDB = QSqlDatabase::database();
    ClientDB.setDatabaseName("./cuACS_db.db");
    if(!ClientDB.open()) {
        qDebug()<<("Failed to open database");
    } else {
        qDebug()<<("Connected to database");
    }

    //set up query
    QSqlQuery qry;
    qry.prepare("INSERT INTO Clients (Name, Phone, Email, Species, Breed, Sex, Age, NPA1, NPA2, NPA3, NPA4, NPA5, NPA6, NPA7, NPA8, NPA9, NPA10, NPA11, NPA12) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    //name
    qry.addBindValue(name);
    qry.addBindValue(phone);
    qry.addBindValue(email);
    for(int i=0; i<16; i++){
        //update this once we need NPA's
        qry.addBindValue(QVariant(QVariant::String));
    }
    qry.finish();
    if(!qry.exec())
    {
        qDebug() <<("Error adding values to DB");
        qDebug() << qry.lastError();
    }

    ClientDB.close();

    Client* newClient = new Client(name,phone,email);
    uiMain->updateClients(newClient);
    this->close();
}
