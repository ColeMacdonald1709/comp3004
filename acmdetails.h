#ifndef ACMDETAILS_H
#define ACMDETAILS_H

#include <QDialog>
#include <QString>

#include "animal.h"
#include "client.h"
#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;

class ACMDetails
{
public:
    ACMDetails(DBServer*,UIServer*);

private:
    DBServer* db;
    UIServer* ui;
};

#endif // ACMDETAILS_H
