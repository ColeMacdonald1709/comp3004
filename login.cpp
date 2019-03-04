/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
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

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./cuACS_db.db");

}

Login::~Login()
{
    delete ui;
}

void Login::on_btnClient_clicked()
{
    QString username = ui->txtName->toPlainText();
    bool verified=false;

    //load up client list
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return;
    }
    db.open();

    //check if name is in database
    QSqlQuery clientqry("select * from Clients");
    while(clientqry.next()){
        QString name = clientqry.value("Name").toString();
        if (name==username) {
            verified=true;
        }
    }
    db.close();
    db.removeDatabase("QSQLITE");
    if (verified) {
        qDebug()<<"Client user logged in.";
        manageAnimal mngAnimal(0,username);
        mngAnimal.uiMain = this;
        mngAnimal.setModal(true);
        this->hide();
        mngAnimal.exec();
        this->show();
        ui->txtName->clear();
    } else {
        qDebug()<<"Client name not in db.";
        QMessageBox::information(
            this,
            tr("Client not found"),
            tr("Username incorrect.") );
    }

}

void Login::on_btnStaff_clicked()
{
    //check if login credentials are correct
    QString username = ui->txtName->toPlainText();

    if (username=="admin") {
        qDebug()<<"Staff user logged in.";
        staffPortal portal(this);
        portal.uiMain = this;
        portal.setModal(true);
        portal.exec();
        ui->txtName->clear();
    } else {
        qDebug()<<"Staff login incorrect.";
        QMessageBox::information(
            this,
            tr("Staff not found"),
            tr("Staff name incorrect.") );
    }
}
