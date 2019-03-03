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

    //load up animals and clients
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
        qDebug()<<"Name:"+name;

        if (name==username) {
            verified=true;
        }
    }
    db.close();
    db.removeDatabase("QSQLITE");
    if (verified) {
        manageAnimal mngAnimal(0,username);
        mngAnimal.uiMain = this;
        mngAnimal.setModal(true);
        mngAnimal.exec();
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
    QString username = ui->txtName->toPlainText();

    if (username=="admin") {
    staffPortal portal(this);
    portal.uiMain = this;
    portal.setModal(true);
    portal.exec();
    } else {
        qDebug()<<"Staff login incorrect.";
        QMessageBox::information(
            this,
            tr("Staff not found"),
            tr("Staff name incorrect.") );
    }
}
