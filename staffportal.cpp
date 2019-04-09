/**
COMP3004A/B W19 - Project Deliverable 4 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "staffportal.h"

StaffPortal::StaffPortal(UIServer* uiserver)
{
    ui = uiserver;
}

void StaffPortal::open_manage_animal()
{
    ui->show_animals(false);
}
void StaffPortal::open_manage_client()
{
    ui->show_clients();
}
void StaffPortal::open_ACM()
{
    ui->show_acm();
}
void StaffPortal::logout()
{
    ui->logout();
}
