/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include <QApplication>
#include "uiserver.h"
#include "dbserver.h"

#include "addnewanimal.h"
#include "addnewclient.h"
#include "clientportal.h"
#include "editanimal.h"
#include "editclient.h"
#include "login.h"
#include "manageanimal.h"
#include "manageclient.h"
#include "staffportal.h"
#include "editclient.h"
#include "editanimal.h"
#include "acmdetails.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DBServer* dbserver = new DBServer();

    UIServer* uiserver = new UIServer();

    AddNewAnimal* addnewanimalLogic = new AddNewAnimal(dbserver,uiserver);

    AddNewClient* addnewclientLogic = new AddNewClient(dbserver,uiserver);

    EditAnimal* editanimalLogic = new EditAnimal(dbserver,uiserver);

    EditClient* editclientLogic = new EditClient(dbserver,uiserver);

    Login* loginLogic = new Login(dbserver,uiserver);

    ManageAnimal* manageanimalLogic = new ManageAnimal(dbserver,uiserver);

    ManageClient* manageclientLogic = new ManageClient(dbserver,uiserver);

    ClientPortal* clientportalLogic = new ClientPortal(uiserver);

    StaffPortal* staffportalLogic = new StaffPortal(uiserver);

    ACMDetails* acmdetailsLogic = new ACMDetails(dbserver, uiserver);

    uiserver->set_up_logic(addnewanimalLogic,
                           addnewclientLogic,
                           editanimalLogic,
                           editclientLogic,
                           loginLogic,
                           manageanimalLogic,
                           manageclientLogic,
                           clientportalLogic,
                           staffportalLogic,
                           acmdetailsLogic);
    dbserver->init();
    uiserver->init();

    if(a.exec() == 0){
        qDebug() << "cleaning up";
        delete dbserver;
        delete uiserver;
        delete addnewanimalLogic;
        delete addnewclientLogic;
        delete editanimalLogic;
        delete editclientLogic;
        delete loginLogic;
        delete manageanimalLogic;
        delete manageclientLogic;
        delete clientportalLogic;
        delete staffportalLogic;
        delete acmdetailsLogic;
    }
    return 0;
}
