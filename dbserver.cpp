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
    loadAnimals();
    loadClients();
    AddNewAnimal(this);
    AddNewClient(this);
    EditAnimal(this);
    EditClient(this);
    Login(this);
    ManageAnimal(this);
    ManageClient(this);
}
DBServer::~DBServer()
{
    for(int i=0; i<animals.size(); i++){
        delete animals.at(i);
    }
    for(int i=0; i<clients.size(); i++){
        delete clients.at(i);
    }
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
        if(clients.at(i)->getName() == *name){
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
int DBServer::add_new_animal(Animal* newanimal)
{
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return 0;
    }
    animals.append(newanimal);

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
    return 1;
}
int DBServer::add_new_client(Client* newclient)
{
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return 0;
    }
    clients.append(newclient);
    //set up query
    QSqlQuery qry;
    qry.prepare("INSERT INTO Clients (Name, Phone, Email, "
                "Species, Breed, Sex, Age, "
                "NPA1, NPA2, NPA3, NPA4, NPA5, NPA6, NPA7, NPA8, NPA9, NPA10, NPA11, NPA12) "
                "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    qry.addBindValue(newclient->getName());
    qry.addBindValue(newclient->getPhone());
    qry.addBindValue(newclient->getEmail());
    for(int i=0; i<16; i++){qry.addBindValue(QVariant(QVariant::String));}
    qry.addBindValue(name);
    qry.addBindValue(phone);
    qry.addBindValue(email);
    for (int i=0; i<4; i++){qry.addBindValue(newclient->getInfo()->value(i));}
    for (int i=0;i<12;i++){qry.addBindValue(newclient->getPrefs()->value(i));}
    qry.finish();
    qry.exec();
    db.close();
    return 1;
}

void DBServer::editClientProfile(QString* name, QString* phone, QString* email, QList<QString>* PAList,QList<QString>* NPAList) {
    Client* newclient = new Client(name,phone,email,PAList,NPAList);
    if (DBServer::add_new_client(newclient)){
        //add profile to dynamic storage
        //remove old profile from db and dynamic
    }
}

void DBServer::editAnimalProfile(QString *, QList<QString> *, QList<QString> *) {
    Animal* newanimal = new Animal(name,PAList,NPAList);
    if(DBServer::add_new_animal(newanimal)) {
        //add profile to dynamic storage
        //remove old profile from db and dynamic
    }
}
<<<<<<< HEAD
void DBServer::get_client(int i, QString* name, QString* phone, QString* email)
{
    *name = clients.at(i)->getName();
    *phone = clients.at(i)->getPhone();
    *email = clients.at(i)->getEmail();
}
void DBServer::loadAnimals(){
    db.open();
}
=======
>>>>>>> b6aa78aeda228726d1751e47f8d6cebb49ac33ed

void DBServer::get_client(int i, QString* name, QString* phone, QString* email)
{
    name = &(clients.at(i)->getName());
    phone = &(clients.at(i)->getPhone());
    email = &(clients.at(i)->getEmail());
}

void DBServer::loadAnimals(){
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return;
    }
<<<<<<< HEAD
=======
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

void DBServer::get_client(int i, QString* name, QString* phone, QString* email)
{
    name = &(clients.at(i)->getName());
    phone = &(clients.at(i)->getPhone());
    email = &(clients.at(i)->getEmail());
}

QStringList* DBServer::get_breeds(QString species, QStringList* breeds)
{//run through dynamic animals list and grab the breed from PAttr[1] of each animal matching species
    for (int i=0; i<animals.size(); i++){
        if (animals.at(i)->getPAttr()->at(0) == species)
            breeds->append(animals.at(i)->getPAttr()->at(1));
    }
}

void DBServer::loadAnimals(){
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return;
    }
>>>>>>> b6aa78aeda228726d1751e47f8d6cebb49ac33ed

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
<<<<<<< HEAD
}

void DBServer::get_client(int i, QString* name, QString* phone, QString* email)
{
    name = &(clients.at(i)->getName());
    phone = &(clients.at(i)->getPhone());
    email = &(clients.at(i)->getEmail());
}

QStringList* DBServer::get_breeds(QString species, QStringList* breeds)
{//run through dynamic animals list and grab the breed from PAttr[1] of each animal matching species
    for (int i=0; i<animals.size(); i++){
        if (animals.at(i)->getPAttr()->at(0) == species)
            breeds->append(animals.at(i)->getPAttr()->at(1));
    }
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
void DBServer::loadClients(){
    db.open();
    QSqlQuery clientqry("select * from Clients");
    while(clientqry.next()){
        QString name = clientqry.value("Name").toString();
        QString phone = clientqry.value("Phone").toString();
        QString email = clientqry.value("Email").toString();
    //add personal info
        QList<QString>* info = new QList<QString>();
        QString species = clientqry.value("Species").toString();
        info->append(species);
        QString breed = clientqry.value("Breed").toString();
        info->append(breed);
        QString age = clientqry.value("Age").toString();
        info->append(age);
        QString sex = clientqry.value("Sex").toString();
        info->append(sex);
    //add preferences
        QList<QString>* prefs = new QList<QString>();
        QString NPA1 = clientqry.value("NPA1").toString();
        prefs->append(NPA1);
        QString NPA2 = clientqry.value("NPA2").toString();
        prefs->append(NPA2);
        QString NPA3 = clientqry.value("NPA3").toString();
        prefs->append(NPA3);
        QString NPA4 = clientqry.value("NPA4").toString();
        prefs->append(NPA4);
        QString NPA5 = clientqry.value("NPA5").toString();
        prefs->append(NPA5);
        QString NPA6 = clientqry.value("NPA6").toString();
        prefs->append(NPA6);
        QString NPA7 = clientqry.value("NPA7").toString();
        prefs->append(NPA7);
        QString NPA8 = clientqry.value("NPA8").toString();
        prefs->append(NPA8);
        QString NPA9 = clientqry.value("NPA9").toString();
        prefs->append(NPA9);
        QString NPA10 = clientqry.value("NPA10").toString();
        prefs->append(NPA10);
        QString NPA11 = clientqry.value("NPA11").toString();
        prefs->append(NPA11);
        QString NPA12 = clientqry.value("NPA12").toString();
        prefs->append(NPA12);
        Client* newClient = new Client(name,phone,email,info,prefs);
    //add client to dynamic storage
        clients.append(newClient);
    }
    db.close();
}
int DBServer::get_animal_size(){
    return animals.size();
}
int DBServer::get_client_size(){
    return clients.size();
}
void DBServer::get_animal(int i, QString* name, QList<QString>* PA, QList<QString>* NPA){
    *name = animals.at(i)->getAnimalName();
    *PA = *(animals.at(i)->getPAttr());
    *NPA = *(animals.at(i)->getNPAttr());
}
void DBServer::get_animal(int i, QString* name, QList<QString>* PA)
{
    *name = animals.at(i)->getAnimalName();
    *PA = *(animals.at(i)->getPAttr());
}
void DBServer::get_animal(QString* name, QList<QString>* PA, QList<QString>* NPA)
{
    for(int i=0; i<animals.size(); i++){
        if(animals.at(i)->getAnimalName() == *name){
            get_animal(i, name, PA, NPA);
            break;
        }
    }
}
void DBServer::get_client(int i, QString* name, QString* phone, QString* email, QList<QString>* PA, QList<QString>* NPA)
{
    *name = clients.at(i)->getName();
    *phone = clients.at(i)->getPhone();
    *email = clients.at(i)->getEmail();
    *PA = *(clients.at(i)->getPrefs());
    *NPA = *(clients.at(i)->getInfo());
}
void DBServer::get_client(QString* name, QString* phone, QString* email, QList<QString>* PA, QList<QString>* NPA)
{
    for(int i=0; i<clients.size(); i++){
        if(clients.at(i)->getName() == *name){
            get_client(i, name, phone, email, PA, NPA);
            break;
        }
    }
}
Animal* DBServer::get_Animal(int i){
    return animals.at(i);
=======
>>>>>>> b6aa78aeda228726d1751e47f8d6cebb49ac33ed
}
