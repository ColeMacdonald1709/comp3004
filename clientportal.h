/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef CLIENTPORTAL_H
#define CLIENTPORTAL_H

#include <QString>

#include "uiserver.h"

class UIServer;
class ClientPortal
{
public:
    ClientPortal(UIServer*);
    ~ClientPortal();
    void open_view_animal();
    void open_edit_client();
    void logout();
    void set_name(QString*);
private:
    UIServer* ui;
    QString* name;
};

#endif // ClientPortal_H
