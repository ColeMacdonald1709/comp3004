/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "clientportal.h"
#include "ui_clientportal.h"

ClientPortal::ClientPortal(UIServer* uiserver)
{
    ui = uiserver;
}
ClientPortal::~ClientPortal(){}

void ClientPortal::open_view_animal()
{
    QString username = ui->loginUI->txtName->text();
    ui->show_animals(true,&username);
}
void ClientPortal::open_edit_client()
{
    ui->edit_profile();
}
void ClientPortal::logout()
{
    ui->logout();
}
