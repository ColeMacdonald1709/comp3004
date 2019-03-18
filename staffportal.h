/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef STAFFPORTAL_H
#define STAFFPORTAL_H

#include "uiserver.h"
#include "dbserver.h"

class UIServer;
class DBServer;
class StaffPortal
{
public:
    StaffPortal(UIServer*);
    ~StaffPortal();
    void open_manage_animal();
    void open_manage_client();
    void logout();
private:
    UIServer* ui;
};

#endif // STAFFPORTAL_H
