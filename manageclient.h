/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef MANAGECLIENT_H
#define MANAGECLIENT_H

#include <QList>
#include <QString>

#include "client.h"
#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class ManageClient
{
public:
    ManageClient(UIServer*);
    ManageClient(DBServer*);
    int client_size();
    void get_client(int,QString*,QString*,QString*);
    void get_client(int, QString*, QString*, QString*,QList<QString>*,QList<QString>*);
private:
    DBServer* db;
    UIServer* ui;
};

#endif // MANAGECLIENT_H
