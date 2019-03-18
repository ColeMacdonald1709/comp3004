/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "addnewclient.h"

AddNewClient::AddNewClient(UIServer* uiserver){ui = uiserver;}
AddNewClient::AddNewClient(DBServer* dbserver){db = dbserver;}

bool AddNewClient::client_exists(QString* name)
{
    return db->verify_client(name);
}
void AddNewClient::add_new_client(QString* name, QString* phone, QString* email)
{
    Client* newclient = new Client(name,phone,email);
    db->add_new_client(newclient);
}
