/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#include "staffportal.h"
#include "ui_staffportal.h"

staffPortal::staffPortal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::staffPortal)
{
    ui->setupUi(this);
}

staffPortal::~staffPortal()
{
    delete ui;
}

//mange animals button event
void staffPortal::on_btnAnimals_clicked()
{
    manageAnimal mngAnimal(1);
    mngAnimal.uiMain = uiMain;
    mngAnimal.setModal(true);
    mngAnimal.exec();
    this->show();
}

//mange clients button event
void staffPortal::on_btnClients_clicked()
{
    manageclient mngClient(this);
    mngClient.setModal(true);
    mngClient.exec();
    this->show();
}


void staffPortal::on_staff_logout_clicked()
{
    qDebug()<<"User logged out.";
    this->close();
}
