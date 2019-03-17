/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "login.h"

Login::Login(UIServer* uiserver){ui = uiserver;}
Login::Login(DBServer* dbserver){db = dbserver;}

Login::~Login(){}

void Login::verify_client(QString* name){
    if(db->verify_client(name))
        ui->show_animals(true, name);
    else
        ui->show_login_error();
}

void Login::verify_staff(QString* name){
    if(db->verify_staff(name))
        ui->show_staff_portal();
    else
        ui->show_login_error();
}
