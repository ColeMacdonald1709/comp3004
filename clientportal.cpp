/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "clientportal.h"

ClientPortal::ClientPortal(UIServer* uiserver)
{
    ui = uiserver;
}
ClientPortal::~ClientPortal(){}
void ClientPortal::set_name(QString* n)
{
    name = n;
}
void ClientPortal::open_view_animal()
{
    ui->show_animals(true);
}
void ClientPortal::open_edit_client()
{
    ui->edit_client_profile(name);
}
void ClientPortal::logout()
{
    ui->logout();
}
