/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef STAFFPORTAL_H
#define STAFFPORTAL_H

#include "uiserver.h"

class UIServer;
class StaffPortal
{
public:
    StaffPortal(UIServer*);
    void open_manage_animal();
    void open_manage_client();
    void open_ACM();
    void logout();
private:
    UIServer* ui;
};

#endif // STAFFPORTAL_H

