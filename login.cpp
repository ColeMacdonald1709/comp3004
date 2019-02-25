#include <QString>
#include "login.h"
#include "ui_login.h"
#include "manageanimal.h"
#include "ui_manageanimal.h"
#include "addnewanimal.h"
#include "ui_addnewanimal.h"
#include "ui_portal.h"
#include "staffportal.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnClient_clicked()
{
    //TODO: verify client in db
    QString username = ui->txtName->toPlainText();
    manageAnimal mngAnimal(0,username);
    mngAnimal.uiMain = this;
    mngAnimal.setModal(true);
    mngAnimal.exec();
}

void Login::on_btnStaff_clicked()
{
    //TODO: verify staff in db
    //TODO: bring staff to portal to manage clients or manage animals
    staffPortal portal(this);
    portal.uiMain = this;
    portal.setModal(true);
    portal.exec();
}
