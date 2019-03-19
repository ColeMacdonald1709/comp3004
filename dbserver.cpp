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
void DBServer::loadAnimals(){
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return;
    }
        QSqlQuery animalqry("SELECT * FROM Animals");
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

int DBServer::get_size(){
    return animals.size();
}

Animal* DBServer::get_Animal(int i){
    return animals.at(i);
}
