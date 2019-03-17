#include "uiserver.h"

UIServer::UIServer()
{
    UIServer::addnewanimalUI();
    UIServer::addnewanimalLogic = new AddNewAnimal(this);

    UIServer::addnewclientUI();
    UIServer::addnewclientLogic = new AddNewClient(this);

    UIServer::loginUI();
    UIServer::loginLogic = new Login(this);

    UIServer::manageanimalUI();
    UIServer::manageanimalLogic = new ManageAnimal(this);

    UIServer::manageclientUI();
    UIServer::manageclientLogic = new ManageClient(this);

    UIServer::staffportalUI();
    UIServer::staffportalLogic = new StaffPortal(this);
}
UIServer::~UIServer()
{
    delete UIServer::addnewanimalUI;
    delete UIServer::addnewanimalLogic;

    delete UIServer::addnewclientUI;
    delete UIServer::addnewclientLogic;

    delete UIServer::loginUI;
    delete UIServer::loginLogic;

    delete UIServer::manageanimalUI;
    delete UIServer::manageanimalLogic;

    delete UIServer::manageclientUI;
    delete UIServer::manageclientLogic;

    delete UIServer::staffportalUI;
    delete UIServer::staffportalLogic;
}
void UIServer::verify_user(bool isclient, QString* n)
{
/////
/// TODO: change loginUI to QDialog
/////
    //hide window then proceed
    /////UIServer::loginUI->hide()
    if(isclient)
        UIServer::loginLogic->verify_client(n);
    else{
        UIServer::loginLogic->verify_staff(n);
    }
}
void UIServer::show_animals(bool isclient, QString* n)
{
    //if(isclient)
        //UIServer::manageanimalUI->set_client_view(n);
    //else
        //UIServer::manageanimalUI->set_staff_view(n);
    //UIServer::manageanimalUI->show_window();
}
void UIServer::show_login_error()
{
    UIServer::loginUI->show_window();
    UIServer::loginUI->invalid_cred();
}
void UIServer::show_staff_portal()
{
    UIServer::staffportalUI->show_window();
}
void UIServer::show_clients()
{
    UIServer::manageclientUI->show_window();
}
void UIServer::logout()
{
    UIServer::addnewanimalUI->close_window();
    UIServer::addnewclientUI->close_window();
    UIServer::manageanimalUI->close_window();
    UIServer::manageclientUI->close_window();
    UIServer::staffportalUI->close_window();
    /////UIServer::loginUI->show_window();
}

LoginUI::Login(QWidget *parent=0) : QMainWindow(parent), UIServer::loginUI(new Ui::Login)
{
    UIServer::loginUI->setupUi(this);
}
void LoginUI::on_btnClient_clicked()
{
    QString username = UIServer::loginUI->txtName->toPlainText();
    UIServer::verify_user(true, &username);
}
void LoginUI::on_btnStaff_clicked()
{
    QString username = UIServer::loginUI->txtName->toPlainText();
    UIServer::verify_user(false, &username);
}
void LoginUI::show_window()
{
    /////this->setModal(true);
    /// this->exec();
    /////this->show();
}
void LoginUI::hide_window()
{
    this->close();
}
void LoginUI::invalid_cred()
{
    UIServer::loginUI->txtName = "";
    QMessageBox::information(this, tr("Credentials invalid"), tr("Username incorrect."));
}

StaffPortalUI::StaffPortalUI(QWidget *parent=0) : QDialog(parent), UIServer::staffportalUI(new Ui::StaffPortal)
{
    UIServer::staffportalUI->setupUi(this);
}
void StaffPortal::on_btnAnimals_clicked()
{
    UIServer::staffportalLogic->open_manage_animal();
}
void StaffPortal::on_btnClients_clicked()
{
    UIServer::staffportalLogic->open_manage_client();
}
void StaffPortal::on_staff_logout_clicked()
{
    UIServer::staffportalLogic->logout();
}
