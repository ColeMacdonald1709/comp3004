/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include <QApplication>
#include "uiserver.h"
#include "dbserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBServer dbserver;
    UIServer uiserver;
    uiserver.init();

    return a.exec();
}
