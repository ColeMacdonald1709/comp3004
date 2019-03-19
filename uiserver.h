/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef UISERVER_H
#define UISERVER_H

#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <QMessageBox>

#include "addnewanimal.h"
#include "addnewclient.h"
#include "login.h"
#include "manageanimal.h"
#include "manageclient.h"
#include "clientportal.h"
#include "staffportal.h"
#include "editclient.h"
#include "editanimal.h"

#include "ui_addnewanimal.h"
#include "ui_addnewclient.h"
#include "ui_login.h"
#include "ui_manageanimal.h"
#include "ui_manageclient.h"
#include "ui_clientportal.h"
#include "ui_staffportal.h"
#include "ui_editclient.h"
#include "ui_editanimal.h"

namespace Ui {
class AddNewAnimal;
class AddNewClient;
class Login;
class ManageAnimal;
class ManageClient;
class ClientPortal;
class StaffPortal;
class EditClient;
class EditAnimal;
}
class AddNewAnimal;
class AddNewClient;
class Login;
class ManageAnimal;
class ManageClient;
class ClientPortal;
class StaffPortal;
class EditClient;
class EditAnimal;


class UIServer
{
public:
    UIServer();
    ~UIServer();
    void show_animals(bool,QString*);
    void show_login_error();
    void show_client_portal();
    void show_staff_portal();
    void show_clients();
    void logout();
private:
    Ui::AddNewAnimal* addnewanimalUI;
    Ui::AddNewClient* addnewclientUI;
    Ui::Login* loginUI;
    Ui::ManageAnimal* manageanimalUI;
    Ui::ManageClient* manageclientUI;
    Ui::ClientPortal* clientportalUI;
    Ui::StaffPortal* staffportalUI;
    Ui::EditClient* editclientUI;
    Ui::EditAnimal* editanimalUI;

    AddNewAnimal* addnewanimalLogic;
    AddNewClient* addnewclientLogic;
    Login* loginLogic;
    ManageAnimal* manageanimalLogic;
    ManageClient* manageclientLogic;
    ClientPortal* clientportalLogic;
    StaffPortal* staffportalLogic;
    EditClient* editclientLogic;
    EditAnimal* editanimalLogic;
};

class AddNewAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit AddNewAnimalUI(QWidget *parent = 0);
    void show_window();
    void hide_window();
private:
    void on_cancelbtn_clicked();
    void on_addAnimalbtn_clicked();
    void update_animals(QString*,QList<QString>*);
};

class AddNewClientUI: public QDialog
{
    Q_OBJECT
public:
    explicit AddNewClientUI(QWidget *parent = 0);
    void show_window();
    void hide_window();
private:
    void on_cancel_button_clicked();
    void on_pushButton_2_clicked();
};

class LoginUI: public QDialog
{
    Q_OBJECT
public:
    explicit LoginUI(QWidget *parent = 0);
    void show_window();
    void hide_window();
private:
    void on_btnClient_clicked();
    void on_btnStaff_clicked();
    void invalid_cred();
};

class ManageAnimalUI: public QDialog
{
    Q_OBJECT
public:
    void show_window();
    void hide_window();
    void set_client_view(QString*);
    void set_staff_view(QString*);
private:
    void update_animals(QString*,QList<QString>*);
    void on_btnEditanimal_clicked();
};

class ManageClientUI: public QDialog
{
   Q_OBJECT
public:
    void show_window();
    void hide_window();
private:
    void load_clients();
    void update_clients(QString*,QString*,QString*);
};

class ClientPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit ClientPortalUI(QWidget *parent=0);
    void show_window();
    void hide_window();
private:
    void on_btnViewnimals_clicked();
    void on_btnEditprofile_clicked();
    void on_client_logout_clicked();
};

class StaffPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit StaffPortalUI(QWidget *parent=0);
    void show_window();
    void hide_window();
private:
    void on_btnAnimals_clicked();
    void on_btnClients_clicked();
    void on_staff_logout_clicked();
};

class EditAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit EditAnimalUI(QWidget *parent = 0);
    void show_window();
    void hide_window();
private:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();
};

class EditClientUI: public QDialog
{
    Q_OBJECT
public:
    explicit EditClientUI(QWidget *parent = 0);
    void show_window();
    void hide_window();
private:
    void on_btnSave_clicked();
    void on_btnClient_clicked();
};

#endif // UISERVER_H
