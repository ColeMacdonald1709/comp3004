/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef ADDNEWCLIENT_H
#define ADDNEWCLIENT_H

#include <QString>
#include <QList>
<<<<<<< HEAD
#include <QtSql>

#include "uiserver.h"
#include "dbserver.h"
=======

#include "uiserver.h"
#include "dbserver.h"

>>>>>>> 9b432a2ae24f343885a345ca1efbcd16b5ac7d28
class UIServer;
class DBServer;
class AddNewClient
{
public:
    AddNewClient(UIServer*);
    AddNewClient(DBServer*);
<<<<<<< HEAD
    ~AddNewClient();

private:
    DBServer* db;
    UIServer* ui;
=======
    bool client_exists(QString*);
    void add_new_client(QString*,QString*,QString*);
private:
    UIServer* ui;
    DBServer* db;
>>>>>>> 9b432a2ae24f343885a345ca1efbcd16b5ac7d28
};

#endif // ADDNEWCLIENT_H
