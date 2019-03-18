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

void UIServer::show_animals(bool isclient, QString* n)
{
    /*if(isclient) {
        UIServer::manageanimalUI->set_client_view(n);
    }else{
        UIServer::manageanimalUI->set_staff_view(n);
    }
    UIServer::manageanimalUI->show_window();*/
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
    UIServer::addnewanimalUI->hide_window();
    UIServer::addnewclientUI->hide_window();
    UIServer::manageanimalUI->hide_window();
    UIServer::manageclientUI->hide_window();
    UIServer::staffportalUI->hide_window();
    UIServer::loginUI->show_window();
}

///addnewanimal interface
/// ---------------------
AddNewAnimalUI::AddNewAnimalUI(QWidget* parent=0) : QDialog(parent), UIServer::addnewanimalUI(new Ui::AddNewClient)
{
    UIServer::addnewanimalUI->setupUi(this);
}
void AddNewAnimalUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
    QString username = UIServer::loginUI->txtName->toPlainText();
    UIServer::loginLogic->verify_client(username);
}
void AddNewAnimalUI::hide_window()
{
    this->hide();
}
///addnewanimals forms
void AddNewAnimalUI::on_cancelbtn_clicked()
{
    UIServer::addnewanimalUI->hide_window();
}
void AddNewAnimalUI::on_addAnimalbtn_clicked()
{
    QString name = UIServer::addnewanimalUI->txtName->toPlainText();
    if(!UIServer::addnewanimalLogic->animal_exists(&name)){
        QList<QString>* PAList = new QList<QString>();
        QList<QString>* NPAList = new QList<QString>();
        //add values to PALIST
        //species
        if (UIServer::addnewanimalUI->radDog->isChecked()){PAList->append("Dog");}
        else if (UIServer::addnewanimalUI->radCat->isChecked()){PAList->append("Cat");}
        else if (UIServer::addnewanimalUI->radRabbit->isChecked()){PAList->append("Rabbit");}
        else if (UIServer::addnewanimalUI->radBird->isChecked()){PAList->append("Bird");}
        else if (UIServer::addnewanimalUI->radFish->isChecked()){PAList->append("Fish");}
        else {PAList->append("NULL");};

        //breed
        PAList->append(UIServer::addnewanimalUI->txtBreed->toPlainText());

        //sex
        if (UIServer::addnewanimalUI->radMale->isChecked()){PAList->append("Male");}
        else if (UIServer::addnewanimalUI->radFemale->isChecked()) {PAList->append("Female");}
        else {PAList->append("NULL");};

        //age
        PAList->append(UIServer::addnewanimalUI->ageComboBox->currentText().toStdString().c_str());

        //add values to NPAList
        QString val;
        val = QString::number(UIServer::addnewanimalUI->NPAttr1spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr2spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr3spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr4spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr5spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr6spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr7spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr8spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr9spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr10spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr11spinBox->value());
        NPAList->append(val);
        val = QString::number(UIServer::addnewanimalUI->NPAttr12spinBox->value());
        NPAList->append(val);

        UIServer::addnewanimalLogic->add_new_animal(name, PAList, NPAList);
        UIServer::addnewanimalUI->hide_window();
        UIServer::manageanimalUI->show_window();
        UIServer::manageanimalUI->update_animals(&name, PAList, NPAList);
    }else{
        //show animal already exists popup
    }
}

///addnewclient interface
///----------------------
AddNewClientUI::AddNewClient(QWidget* parent=0) : QDialog(parent), UIServer::addnewclientUI(new Ui::AddNewClient)
{
    UIServer::addnewclientUI->setupUi(this);
}
void AddNewClientUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void AddNewClientUI::hide_window()
{
    this->hide();
}
///addnewclient forms
void AddNewClientUI::on_cancel_button_clicked()
{
    UIServer::addnewclientUI->hide_window();
}
void AddNewClientUI::on_add_button_clicked()
{
    QString name = IServer::addnewclientUI->name_txt->text();
    if(!UIServer::addnewclientLogic->client_exists(name)){
        QString phone, email;
        phone = UIServer::addnewclientUI->phone_txt->text();
        email = UIServer::addnewclientUI->email_txt->text();

        UIServer::addnewclientLogic->add_new_client(&name, &phone, &email);
        UIServer::addnewclientUI->hide_window();
        UIServer::manageclientUI->show_window();
        UIServer::manageclientUI->update_clients(&name, &phone, &email);
    }else{
        //show client already exists popup
    }
}
///

///Login interface
///---------------
void LoginUI::Login(QWidget *parent=0) : QMainWindow(parent), UIServer::loginUI(new Ui::Login)
{
    UIServer::loginUI->setupUi(this);
=======
    QString username = UIServer::loginUI->txtName->toPlainText();
    UIServer::loginLogic->verify_staff(username);
}
void LoginUI::invalid_cred()
{
    UIServer::loginUI->txtName = "";
    QMessageBox::information(this, tr("Credentials invalid"), tr("Username incorrect."));
>>>>>>> 9b432a2ae24f343885a345ca1efbcd16b5ac7d28
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
///login forms
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
///

///staff portal interface
///----------------------
StaffPortalUI::StaffPortalUI(QWidget *parent=0) : QDialog(parent), UIServer::staffportalUI(new Ui::StaffPortal)
{
    UIServer::staffportalUI->setupUi(this);
}
void StaffPortalUI::on_btnAnimals_clicked()
{
    UIServer::staffportalLogic->open_manage_animal();
}
void StaffPortalUI::on_btnClients_clicked()
{
    UIServer::staffportalLogic->open_manage_client();
}
void StaffPortalUI::on_staff_logout_clicked()
{
    UIServer::staffportalLogic->logout();
}
void StaffPortalUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void StaffPortalUI::hide_window()
{
    this->hide();
}
