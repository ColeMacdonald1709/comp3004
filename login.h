/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef LOGIN_H
#define LOGIN_H
#include <QString>
#include "uiserver.h"
//#include "dbserver.h"

class Login
{
public:
    //gotta include DatabaseServer* in Login creation
    Login(UIServer*);
    ~Login();
    void verify_client(QString*);
    void verify_staff(QString*);
private:
    //DatabaseServer* db;
    UIServer* ui;
};

#endif // LOGIN_H
