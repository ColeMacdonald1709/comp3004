#ifndef UISERVER_H
#define UISERVER_H

#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <QMessageBox>

#include "ui_addnewanimal.h"
#include "ui_addnewclient.h"
#include "ui_login.h"
#include "ui_manageanimal.h"
#include "ui_manageclient.h"
#include "ui_staffportal.h"

#include "addnewanimal.h"
#include "addnewclient.h"
#include "login.h"
#include "manageanimal.h"
#include "manageclient.h"
#include "staffportal.h"

namespace Ui {
class AddNewAnimal;
class AddNewClient;
class Login;
class ManageAnimal;
class ManageClient;
class StaffPortal;
}

class UIServer
{
public:
    UIServer();
    ~UIServer();
    void verify_user(bool,QString*);
    void show_animals(bool,QString*);
    void show_login_error();
    void show_staff_portal();
    void show_clients();
    void logout();
private:
    Ui::AddNewAnimal* addnewanimalUI;
    Ui::AddNewClient* addnewclientUI;
    Ui::Login* loginUI;
    Ui::ManageAnimal* manageanimalUI;
    Ui::ManageClient* manageclientUI;
    Ui::StaffPortal* staffportalUI;

    AddNewAnimal* addnewanimalLogic;
    AddNewClient* addnewclientLogic;
    Login* loginLogic;
    ManageAnimal* manageanimalLogic;
    ManageClient* manageclientLogic;
    StaffPortal* staffportalLogic;
};

class AddNewAnimalUI: public QDialog
{
public:

private:

};

class AddNewClientUI: public QDialog
{
public:

private:

};

class LoginUI: public QMainWindow
{
    Q_OBJECT
public:
    explicit LoginUI(QWidget *parent = 0);
private:
    void on_btnClient_clicked();
    void on_btnStaff_clicked();
    void show_window();
    void hide_window();
    void invalid_cred();
};

class ManageAnimalUI: public QDialog
{
public:

private:

};

class ManageClientUI: public QDialog
{
public:

private:

};

class StaffPortalUI: public QDialog
{
    Q_OBJECT
public:
    explicit StaffPortalUI(QWidget *parent=0);
private:
    void on_btnAnimals_clicked();
    void on_btnClients_clicked();
    void on_staff_logout_clicked();
};

#endif // UISERVER_H
