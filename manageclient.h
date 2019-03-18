/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef MANAGECLIENT_H
#define MANAGECLIENT_H

#include <QList>
#include <QtSql>
#include <QSqlError>
#include <QDebug>

#include "client.h"

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;

class ManageClient : public QDialog
{
public:
    ManageClient(UIServer*);
    ManageClient(DBServer*);
    ~ManageClient();
    void updateClients(Client*);
    void showClients();
    void loadClients();

private:
    DBServer* db;
    UIServer* ui;
};

#endif // MANAGECLIENT_H
