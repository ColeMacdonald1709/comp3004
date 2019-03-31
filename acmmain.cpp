#include "acmmain.h"
#include "ui_acmmain.h"

ACMmain::ACMmain(DBServer* dbserver, UIServer* uiserver)
{
    ui = uiserver;
    db = dbserver;
}


