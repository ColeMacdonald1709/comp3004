/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "dbserver.h"

DBServer::DBServer()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./cuACS_db.db");
}
DBServer::~DBServer()
{
    delete animals;
    delete clients;
    db.close();
}
bool DBServer::verify_animal(QString* name)
{
    bool verified = false;
    for(int i=0; i<animals.size(); i++){
        if(animals.at(i)->getAnimalName() == *name){
            verified = true;
            break;
        }
    }
    return verified;
}
bool DBServer::verify_client(QString* name)
{
    bool verified = false;
    for(int i=0; i<clients.size(); i++){
        if(clients.at(i)->name == *name){
            verified = true;
            break;
        }
    }
    return verified;
}
bool DBServer::verify_staff(QString* name){
    if(*name == "admin")
        return true;
    else
        return false;
}
void DBServer::add_new_animal(Animal* newanimal)
{
    animals.append(newanimal);
    db.open();
    //set up query
    QSqlQuery qry;
    qry.prepare("INSERT INTO Animals (Name, Species, Breed, Sex, Age, "
                "NPA1, NPA2, NPA3, NPA4, NPA5, NPA6, NPA7, NPA8, NPA9, NPA10, NPA11, NPA12)"
                "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    qry.addBindValue(newanimal->getAnimalName());
    for (int i=0; i<4; i++){qry.addBindValue(newanimal->getPAttr()->value(i));}
    for (int i=0;i<12;i++){qry.addBindValue(newanimal->getNPAttr()->value(i));}
    qry.finish();
    qry.exec();
    db.close();
}
void DBServer::add_new_client(Client* newclient)
{
    clients.append(newclient);
    db.open();
    //set up query
    QSqlQuery qry;
    qry.prepare("INSERT INTO Clients (Name, Phone, Email, "
                "Species, Breed, Sex, Age, "
                "NPA1, NPA2, NPA3, NPA4, NPA5, NPA6, NPA7, NPA8, NPA9, NPA10, NPA11, NPA12) "
                "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    qry.addBindValue(name);
    qry.addBindValue(phone);
    qry.addBindValue(email);
    for(int i=0; i<16; i++){qry.addBindValue(QVariant(QVariant::String));}
    qry.finish();
    qry.exec();
    db.close();
}
void DBServer::get_client(int i, QString* name, QString* phone, QString* email)
{
    name = &(clients.at(i)->getName());
    phone = &(clients.at(i)->getPhone());
    email = &(clients.at(i)->getEmail());
}
