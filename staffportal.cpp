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
void staffPortal::on_pushButton_clicked()
{
    manageAnimal mngAnimal(1);
    mngAnimal.uiMain = uiMain;
    mngAnimal.setModal(true);
    mngAnimal.exec();
    this->show();
}

//mange clients button event
void staffPortal::on_pushButton_2_clicked()
{
    manageclient mngClient(this);
    mngClient.setModal(true);
    mngClient.exec();
    this->show();
}


void staffPortal::on_staff_logout_clicked()
{
    this->close();
}
