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
void EditClient::set_up(QString* name, QString* phone, QString* email, QList<QString>* PA, QList<QString>* NPA)
{
    db->get_client(name, phone, email, PA, NPA);
}
void EditClient::editClient(QString* name, QString* phone,QString* email,QList<QString>* PAList, QList<QString>* NPAList)
{
    db->editClientProfile(name, phone, email, PAList, NPAList);
}
void EditClient::get_breeds(const QString& species)
{
   QList<QString>* breeds = NULL;
   QString s = species;
   db->get_breeds(&s,breeds);
   UIServer::editclientUIC.editclientUI->comboBoxBreed->addItems(*breeds);
}
