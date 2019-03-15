#ifndef UISERVER_H
#define UISERVER_H

#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <QMessageBox>

#include "ui_login.h"

#include "login.h"

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
private:
    Ui::Login* loginUI;
    Login* loginLogic;
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
public:

private:

};

#endif // UISERVER_H
