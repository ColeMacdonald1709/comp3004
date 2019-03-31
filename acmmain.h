#ifndef ACMMAIN_H
#define ACMMAIN_H

#include <QDialog>
#include <QString>

#include "animal.h"
#include "client.h"
#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;

class ACMmain
{
public:
    ACMmain(DBServer*, UIServer*);

private:
    DBServer* db;
    UIServer* ui;
};

#endif // ACMMAIN_H
