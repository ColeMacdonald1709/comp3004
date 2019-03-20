/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "editclient.h"

EditClient::EditClient(UIServer* uiserver){ui = uiserver;}
EditClient::EditClient(DBServer* dbserver){db = dbserver;}

EditClient::~EditClient(){}

void editClient(QString* name, QString* phone,QString* email,QList<QString>* PAList, QList<QString>* NPAList)
{
    db->editClientProfile(name, phone, email, PAList, NPAList);
}

void get_breeds(QString* species)
{
   QList<QString>* breeds = new QList<QString>();
   db->get_breeds(species,breeds);
   UIServer::editclientUI->comboBoxBreed->additems(breeds);
}
