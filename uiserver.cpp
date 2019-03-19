/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

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

    UIServer::clientportalUI();
    UIServer::clientportalLogic = new ClientPortal(this);

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

    delete UIServer::clientportalUI;
    delete UIServer::clientportalLogic;

    delete UIServer::staffportalUI;
    delete UIServer::staffportalLogic;
}

void UIServer::show_animals(bool isclient, QString* n)
{
    if(isclient) {
        UIServer::manageanimalLogic->set_client_view(n);
    } else {
        UIServer::manageanimalLogic->set_staff_view(n);
    }
    ManageAnimalUI::show_window();
}
void UIServer::show_login_error()
{
    LoginUI::show_window();
    LoginUI::invalid_cred();
}
void UIServer::show_client_portal()
{
    ClientPortalUI::show_window();
}
void UIServer::show_staff_portal()
{
    StaffPortalUI::show_window();
}
void UIServer::show_clients()
{
    ManageClientUI::show_window();
}
void UIServer::logout()
{
    AddNewAnimalUI::hide_window();
    AddNewClientUI::hide_window();
    ManageAnimalUI::hide_window();
    ManageClientUI::hide_window();
    ClientPortalUI::hide_window();
    StaffPortalUI::hide_window();
    LoginUI::show_window();
}

///addnewanimal interface
/// ---------------------
AddNewAnimalUI::AddNewAnimalUI(QWidget *parent=0) : QDialog(parent), UIServer::addnewanimalUI(new Ui::AddNewAnimal)
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
    AddNewAnimalUI::hide_window();
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
        AddNewAnimalUI::hide_window();
        ManageAnimalUI::show_window();
        ManageAnimalUI::update_animals(&name, PAList);

    }else{
        QMessageBox::warning(this, tr("Animal already exists"), tr("Error: Animal name already in use."));
    }
}

///addnewclient interface
///----------------------
AddNewClientUI::AddNewClient(QWidget *parent=0) : QDialog(parent), UIServer::addnewclientUI(new Ui::AddNewClient)
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
    AddNewClientUI::hide_window();
}
void AddNewClientUI::on_add_button_clicked()
{
    QString name = UIServer::addnewclientUI->name_txt->text();
    if(!UIServer::addnewclientLogic->client_exists(name)){
        QString phone, email;
        phone = UIServer::addnewclientUI->phone_txt->text();
        email = UIServer::addnewclientUI->email_txt->text();
        for(i=0;i=12;i++)
            NPAList->append(0);
        
        UIServer::addnewclientLogic->add_new_client(&name, &phone, &email);
        UIServer::addnewanimalUI->hide_window();
        UIServer::manageclientUI->show_window();
        UIServer::manageclientUI->update_clients(&name, &phone, &email);
    } else {
        QMessageBox::warning(this, tr("Client already exists"), tr("Error: Client name already in use."));
    }
}

///Login interface
///---------------
void LoginUI::Login(QWidget *parent=0) : QDialog(parent), UIServer::loginUI(new Ui::Login)
{
    UIServer::loginUI->setupUi(this);
}
void LoginUI::invalid_cred()
{
    UIServer::loginUI->txtName = "";
    QMessageBox::information(this, tr("Credentials invalid"), tr("Username incorrect."));
}
void LoginUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void LoginUI::hide_window()
{
    this->hide();
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

///client portal interface
///----------------------
ClientPortalUI::ClientPortalUI(QWidget *parent=0) : QDialog(parent), UIServer::staffportalUI(new Ui::StaffPortal)
{
    UIServer::clientportalUI->setupUi(this);
}
void ClientPortalUI::on_btnViewanimals_clicked()
{
    UIServer::clientportalLogic->open_view_animal();
}
void ClientPortalUI::on_btnEditprofile_clicked()
{
    UIServer::clientportalLogic->open_edit_client();
}
void ClientPortalUI::on_client_logout_clicked()
{
    UIServer::clientportalLogic->logout();
}
void ClientPortalUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void StaffPortalUI::hide_window()
{
    this->hide();
}

///manage client interface
/// ----------------------
ManageClientUI::ManageClientUI(QWidget *parent=0) : QDialog(parent), UIServer::manageclientUI(new Ui::ManageClient)
{
    UIServer::manageclientUI->setupUi(this);
}
void ManageClientUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void ManageClientUI::hide_window()
{
    this->hide();
}
void ManageClientUI::update_clients(QString* name, QString* phone, QString* email)
{
    QFont boldfont;
    boldfont.setBold(true);
    int newRow = UIServer::manageclientUI->clientlist->rowCount();
    UIServer::manageclientUI->clientlist->insertRow(newRow);

    QTableWidgetItem* table_cell = new QTableWidgetItem;
    UIServer::manageclientUI->clientlist->setItem(newRow,0,table_cell);
    table_cell->setText(name);
    table_cell->setFont(boldfont);

    table_cell = new QTableWidgetItem;
    UIServer::manageclientUI->clientlist->setItem(newRow,1,table_cell);
    table_cell->setText(phone);

    table_cell = new QTableWidgetItem;
    UIServer::manageclientUI->clientlist->setItem(newRow,2,table_cell);
    table_cell->setText(email);
}
void ManageClientUI::load_clients()
{
    int size = UIServer::manageclientLogic->client_size();
    QString name, phone, email;
    QFont boldfont;
    boldfont.setBold(true);
    for(int i=0; i<size; i++){
        UIServer::manageclientLogic->get_client(i, &name, &phone, &email);
        UIServer::manageclientUI->clientlist->insertRow(i);

        QTableWidgetItem* table_cell = new QTableWidgetItem;
        UIServer::manageclientUI->clientlist->setItem(i,0,table_cell);
        table_cell->setText(name);
        table_cell->setFont(boldfont);

        table_cell = new QTableWidgetItem;
        UIServer::manageclientUI->clientlist->setItem(i,1,table_cell);
        table_cell->setText(phone);

        table_cell = new QTableWidgetItem;
        UIServer::manageclientUI->clientlist->setItem(i,2,table_cell);
        table_cell->setText(email);
    }
}

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
///manageanimal interface
///
ManageAnimalUI::ManageAnimalUI(QWidget *parent=0) : QDialog(parent), UIServer::manageanimalUI(new Ui::ManageAnimal)
{
    UIServer::manageanimalUI->setupUi(this);
}
void ManageAnimalUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void ManageAnimalUI::hide_window()
{
    this->hide();
}

void ManageAnimalUI::update_animals(QString* name, QList<QString>* PA)
{
    QFont boldfont;
    boldfont.setBold(true);
    int newRow = UIServer::manageanimalUI->animalView->rowCount();
    UIServer::manageanimalUI->animalView->insertRow(newRow);

    QTableWidgetItem* table_cell = new QTableWidgetItem;
    UIServer::manageanimalUI->animalView->setItem(newRow,0,table_cell);
    table_cell->setText(name);
    table_cell->setFont(boldfont);
    //add click event to show detailed profile on name

    for(int col=0; col<PA->size();col++){
        table_cell = new QTableWidgetItem;
        UIServer::manageanimalUI->animalView->setItem(newRow,col+1,table_cell);
        table_cell->setText(PA->at(col));
    }

}


