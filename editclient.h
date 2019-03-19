/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef EDITCLIENT_H
#define EDITCLIENT_H

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class EditClient
{
public:
    EditClient(UIServer*);
    EditClient(DBServer*);
    ~EditClient();
    void editClient(QString* ,QString* ,QString* ,QList<QString>*, QList<QString>*);
private:
    DBServer* db;
    UIServer* ui;
};


#endif // EDITCLIENT_H
