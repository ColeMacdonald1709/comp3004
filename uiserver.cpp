#include "uiserver.h"

UIServer::UIServer()
{
    UIServer::loginUI->Login();
    UIServer::loginLogic = new Logic::Login(this);
}
UIServer::~UIServer()
{
    delete UIServer::loginUI;
    delete UIServer::loginLogic;
}
UIServer::verify_user(bool isclient, QString* n){
    //hide window then proceed
    if(isclient)
        UIServer::loginLogic->verify_client(n);
    else{
        UIServer::loginLogic->verify_staff(n);
    }
}
UIServer::show_animals(bool isclient, QString* n){
/*    if(isclient)
        //show manageanimalUI with name and client set
    else{
        //show staffportalUI
    }
*/
}
UIServer::show_login_error(){
    //open loginUI
    //show login credentials invalid
    //reset text
}

LoginUI::Login(QWidget *parent=0) :
    QMainWindow(parent),
    UIServer::loginUI(new Ui::Login)
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
