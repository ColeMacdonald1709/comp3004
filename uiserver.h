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

#include "ui_addnewanimal.h"
#include "ui_addnewclient.h"
#include "ui_clientportal.h"
#include "ui_editanimal.h"
#include "ui_editclient.h"
#include "ui_login.h"
#include "ui_manageanimal.h"
#include "ui_manageclient.h"
#include "ui_staffportal.h"
#include "ui_editclient.h"
#include "ui_editanimal.h"

namespace Ui {
class AddNewAnimal;
class AddNewClient;
class EditClient;
class EditAnimal;
class Login;
class ManageAnimal;
class ManageClient;
class ClientPortal;
class StaffPortal;
class EditClient;
class EditAnimal;
}

class UIServer;

class AddNewAnimal;
class AddNewClient;
class EditClient;
class EditAnimal;
class Login;
class ManageAnimal;
class ManageClient;
class ClientPortal;
class StaffPortal;
class EditClient;
class EditAnimal;

class AddNewAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit AddNewAnimalUI(UIServer*);
    void show_window();
    void hide_window();
    void update_animals(QString*,QList<QString>*);
    Ui::AddNewAnimal* addnewanimalUI;
private:
    void on_cancelbtn_clicked();
    void on_addAnimalbtn_clicked();
    UIServer* uiserver;
};
class AddNewClientUI: public QDialog
{
    Q_OBJECT
public:
    explicit AddNewClientUI(UIServer*);
    void show_window();
    void hide_window();
    Ui::AddNewClient* addnewclientUI;
private:
    void on_cancel_button_clicked();
    void on_add_button_clicked();
    UIServer* uiserver;
};
class EditAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit EditAnimalUI(UIServer*);
    void show_window();
    void hide_window();
    void load_info(QString*);
    Ui::EditAnimal* editanimalUI;
private:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();
    UIServer* uiserver;
};
class EditClientUI: public QDialog
{
    Q_OBJECT
public:
    explicit EditClientUI(UIServer*);
    void show_window();
    void hide_window();
    void load_info(QString*);
    Ui::EditClient* editclientUI;

private:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();
    UIServer* uiserver;
};
class LoginUI: public QDialog
{
    Q_OBJECT
public:
    explicit LoginUI(UIServer*);
    void show_window();
    void hide_window();
    void invalid_cred();
    Ui::Login* loginUI;
private:
    void on_btnClient_clicked();
    void on_btnStaff_clicked();
    UIServer* uiserver;
};
class ManageAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit ManageAnimalUI(UIServer*);
    void show_window();
    void hide_window();
    void update_animals(QString*,QList<QString>*);
    void set_client_view();
    void set_staff_view();
    void load_animals();
    Ui::ManageAnimal* manageanimalUI;
private:
    void on_btnEditanimal_clicked();
    UIServer* uiserver;
};
class ManageClientUI: public QDialog
{
   Q_OBJECT
public:
    explicit ManageClientUI(UIServer*);
    void show_window();
    void hide_window();
    void update_clients(QString*,QString*,QString*);
    void load_clients();
    Ui::ManageClient* manageclientUI;
private:
    UIServer* uiserver;
};
class ClientPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit ClientPortalUI(UIServer*);
    void show_window();
    void hide_window();
    Ui::ClientPortal* clientportalUI;
private:
    void on_Viewanimals_clicked();
    void on_Editprofile_clicked();
    void on_client_logout_clicked();
    UIServer* uiserver;
};
class StaffPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit StaffPortalUI(UIServer*);
    void show_window();
    void hide_window();
    Ui::StaffPortal* staffportalUI;
private:
    void on_btnAnimals_clicked();
    void on_btnClients_clicked();
    void on_staff_logout_clicked();
    UIServer* uiserver;
};

class UIServer
{
public:
    UIServer();
    ~UIServer();
    void init();
    void show_animals(bool);
    void show_clients();
    void show_login_error();
    void show_staff_portal();
    void show_client_portal(QString*);
    void logout();
    void edit_client_profile(QString*);
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_comboBoxSpecies_currentIndexChanged(const QString &arg1);

    AddNewAnimalUI *addnewanimalUIC;
    AddNewClientUI *addnewclientUIC;
    EditAnimalUI *editanimalUIC;
    EditClientUI *editclientUIC;
    LoginUI *loginUIC;
    ManageAnimalUI *manageanimalUIC;
    ManageClientUI *manageclientUIC;
    ClientPortalUI *clientportalUIC;
    StaffPortalUI *staffportalUIC;

    AddNewAnimal *addnewanimalLogic;
    AddNewClient *addnewclientLogic;
    EditAnimal *editanimalLogic;
    EditClient *editclientLogic;
    Login *loginLogic;
    ManageAnimal *manageanimalLogic;
    ManageClient *manageclientLogic;
    ClientPortal *clientportalLogic;
    StaffPortal *staffportalLogic;
};


#endif // UISERVER_H
