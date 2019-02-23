#include <QString>
#include "login.h"
#include "ui_login.h"
#include "manageanimal.h"
#include "ui_manageanimal.h"
#include "addnewanimal.h"
#include "ui_addnewanimal.h"

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
    QString username = ui->txtName->toPlainText();
    manageAnimal mngAnimal(0,username);
    mngAnimal.uiMain = this;
    mngAnimal.setModal(true);
    mngAnimal.exec();
}

void Login::on_btnStaff_clicked()
{
    manageAnimal mngAnimal(1);
    mngAnimal.uiMain = this;
    mngAnimal.setModal(true);
    mngAnimal.exec();
}
