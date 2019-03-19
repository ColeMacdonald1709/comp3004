/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "manageclient.h"

ManageClient::ManageClient(UIServer* uiserver) {ui = uiserver;}
ManageClient::ManageClient(DBServer* dbserver) {db = dbserver;}

ManageClient::~ManageClient(){}

void ManageClient::get_client(int i, QString* name, QString* phone, QString* email)
{
    db->get_client(i, &name, &phone, &email);
}
