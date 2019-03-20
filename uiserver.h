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

#include "addnewanimal.h"
#include "addnewclient.h"
#include "clientportal.h"
#include "editanimal.h"
#include "editclient.h"
#include "login.h"
#include "manageanimal.h"
#include "manageclient.h"
#include "staffportal.h"
#include "editclient.h"
#include "editanimal.h"

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
    explicit AddNewAnimalUI();
    void show_window();
    void hide_window();
    void update_animals(QString*,QList<QString>*);
    Ui::AddNewAnimal* addnewanimalUI;
private:
    void on_cancelbtn_clicked();
    void on_addAnimalbtn_clicked();
};
class AddNewClientUI: public QDialog
{
    Q_OBJECT
public:
    explicit AddNewClientUI();
    void show_window();
    void hide_window();
    Ui::AddNewClient* addnewclientUI;
private:
    void on_cancel_button_clicked();
    void on_add_button_clicked();
};
class EditAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit EditAnimalUI();
    void show_window();
    void hide_window();
    void load_info(QString*);
    Ui::EditAnimal* editanimalUI;
private:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();
};
class EditClientUI: public QDialog
{
    Q_OBJECT
public:
    explicit EditClientUI();
    void show_window();
    void hide_window();
    void load_info(QString*);
    Ui::EditClient* editclientUI;

private:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();
};
class LoginUI: public QDialog
{
    Q_OBJECT
public:
    explicit LoginUI();
    void show_window();
    void hide_window();
    void invalid_cred();
    Ui::Login* loginUI;
private:
    void on_btnClient_clicked();
    void on_btnStaff_clicked();
};
class ManageAnimalUI: public QDialog
{
    Q_OBJECT
public:
    explicit ManageAnimalUI();
    void show_window();
    void hide_window();
    void update_animals(QString*,QList<QString>*);
    void set_client_view();
    void set_staff_view();
    void load_animals();
    Ui::ManageAnimal* manageanimalUI;
private:
    void on_btnEditanimal_clicked();
};
class ManageClientUI: public QDialog
{
   Q_OBJECT
public:
    explicit ManageClientUI();
    void show_window();
    void hide_window();
    void update_clients(QString*,QString*,QString*);
    void load_clients();
    Ui::ManageClient* manageclientUI;
private:
};
class ClientPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit ClientPortalUI();
    void show_window();
    void hide_window();
    Ui::ClientPortal* clientportalUI;
private:
    void on_Viewanimals_clicked();
    void on_Editprofile_clicked();
    void on_client_logout_clicked();
};
class StaffPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit StaffPortalUI();
    void show_window();
    void hide_window();
    Ui::StaffPortal* staffportalUI;
private:
    void on_btnAnimals_clicked();
    void on_btnClients_clicked();
    void on_staff_logout_clicked();
};

class UIServer
{
public:
    UIServer();
    ~UIServer();
    void init();
    void show_animals(bool);
    void show_login_error();
    void show_staff_portal();
    void show_client_portal(QString*);
    void show_clients();
    void logout();
    void edit_client_profile(QString*);
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_comboBoxSpecies_currentIndexChanged(const QString &arg1);

    static AddNewAnimalUI addnewanimalUIC;
    static AddNewClientUI addnewclientUIC;
    static EditAnimalUI editanimalUIC;
    static EditClientUI editclientUIC;
    static LoginUI loginUIC;
    static ManageAnimalUI manageanimalUIC;
    static ManageClientUI manageclientUIC;
    static ClientPortalUI clientportalUIC;
    static StaffPortalUI staffportalUIC;

    static AddNewAnimal addnewanimalLogic;
    static AddNewClient addnewclientLogic;
    static EditAnimal editanimalLogic;
    static EditClient editclientLogic;
    static Login loginLogic;
    static ManageAnimal manageanimalLogic;
    static ManageClient manageclientLogic;
    static ClientPortal clientportalLogic;
    static StaffPortal staffportalLogic;
};


#endif // UISERVER_H
