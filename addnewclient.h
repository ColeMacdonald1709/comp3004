/**
COMP3004A/B W19 - Project Deliverable 4 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef ADDNEWCLIENT_H
#define ADDNEWCLIENT_H

#include <QString>
#include <QList>
#include <QtSql>

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class AddNewClient
{
public:
    AddNewClient(DBServer*,UIServer*);
    bool client_exists(QString*);
    void add_new_client(QString*,QString*,QString*);
private:
    DBServer* db;
    UIServer* ui;
};

#endif // ADDNEWCLIENT_H
