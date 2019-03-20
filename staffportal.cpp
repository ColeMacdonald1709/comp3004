/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "staffportal.h"

StaffPortal::StaffPortal(UIServer* uiserver)
{
    ui = uiserver;
}
StaffPortal::~StaffPortal(){}

void StaffPortal::open_manage_animal()
{
    ui->show_animals(false);
}
void StaffPortal::open_manage_client()
{
    ui->show_clients();
}
void StaffPortal::logout()
{
    ui->logout();
}
