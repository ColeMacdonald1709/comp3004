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
