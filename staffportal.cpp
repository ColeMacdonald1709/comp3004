/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "staffportal.h"
#include "ui_staffportal.h"

StaffPortal::StaffPortal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StaffPortal)
{
    ui->setupUi(this);
}

StaffPortal::~StaffPortal()
{
    delete ui;
}

//mange animals button event
void StaffPortal::on_btnAnimals_clicked()
{
    ManageAnimal mngAnimal(1);
    mngAnimal.uiMain = uiMain;
    mngAnimal.setModal(true);
    mngAnimal.exec();
    this->show();
}

//mange clients button event
void StaffPortal::on_btnClients_clicked()
{
    ManageClient mngClient(this);
    mngClient.setModal(true);
    mngClient.exec();
    this->show();
}


void StaffPortal::on_staff_logout_clicked()
{
    qDebug()<<"User logged out.";
    this->close();
}
