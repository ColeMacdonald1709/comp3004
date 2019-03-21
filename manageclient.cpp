/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "manageclient.h"

ManageClient::ManageClient(DBServer* dbserver, UIServer* uiserver)
{
    ui = uiserver;
    db = dbserver;
}

int ManageClient::client_size(){return db->get_client_size();}
void ManageClient::get_client(int i, QString* name, QString* phone, QString* email)
{
    db->get_client(i, name, phone, email);
}
void ManageClient::get_client(int i, QString* name, QString* phone, QString* email, QList<QString>* PA, QList<QString>* NPA)
{
    db->get_client(i, name, phone, email, PA, NPA);
}
void ManageClient::open_edit_client()
{
    //temporary
    QString name = "Paul";
    ui->edit_client_profile(&name);
}
void ManageClient::logout()
{
    ui->logout();
}
void ManageClient::back()
{
    ui->clientback();
}
