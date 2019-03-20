/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "uiserver.h"
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

#include <QDebug>

UIServer::UIServer()
{
    UIServer::addnewanimalLogic = new AddNewAnimal(this);
    UIServer::addnewanimalUIC = new AddNewAnimalUI(this);
    UIServer::addnewclientLogic = new AddNewClient(this);
    UIServer::addnewclientUIC = new AddNewClientUI(this);
    UIServer::editanimalLogic = new EditAnimal(this);
    UIServer::editanimalUIC = new EditAnimalUI(this);
    UIServer::editclientLogic = new EditClient(this);
    UIServer::editclientUIC = new EditClientUI(this);
    UIServer::loginLogic = new Login(this);
    UIServer::loginUIC = new LoginUI(this);
    UIServer::manageanimalLogic = new ManageAnimal(this);
    UIServer::manageanimalUIC = new ManageAnimalUI(this);
    UIServer::manageclientLogic = new ManageClient(this);
    UIServer::manageclientUIC = new ManageClientUI(this);
    UIServer::clientportalLogic = new ClientPortal(this);
    UIServer::clientportalUIC = new ClientPortalUI(this);
    UIServer::staffportalLogic = new StaffPortal(this);
    UIServer::staffportalUIC = new StaffPortalUI(this);
}
UIServer::~UIServer()
{
    delete UIServer::addnewanimalUIC->addnewanimalUI;
    delete UIServer::addnewanimalUIC;
    delete UIServer::addnewanimalLogic;

    delete UIServer::addnewclientUIC->addnewclientUI;
    delete UIServer::addnewclientUIC;
    delete UIServer::addnewclientLogic;

    delete UIServer::editanimalUIC->editanimalUI;
    delete UIServer::editanimalUIC;
    delete UIServer::editanimalLogic;

    delete UIServer::editclientUIC->editclientUI;
    delete UIServer::editclientUIC;
    delete UIServer::editclientLogic;

    delete UIServer::loginUIC->loginUI;
    delete UIServer::loginUIC;
    delete UIServer::loginLogic;

    delete UIServer::manageanimalUIC->manageanimalUI;
    delete UIServer::manageanimalUIC;
    delete UIServer::manageanimalLogic;

    delete UIServer::manageclientUIC->manageclientUI;
    delete UIServer::manageclientUIC;
    delete UIServer::manageclientLogic;

    delete UIServer::clientportalUIC->clientportalUI;
    delete UIServer::clientportalUIC;
    delete UIServer::clientportalLogic;

    delete UIServer::staffportalUIC->staffportalUI;
    delete UIServer::staffportalUIC;
    delete UIServer::staffportalLogic;
}

void UIServer::init()
{
    UIServer::manageanimalUIC->load_animals();
    UIServer::manageclientUIC->load_clients();
    UIServer::loginUIC->show_window();
}
void UIServer::show_animals(bool isclient)
{
    if(isclient) {
        UIServer::manageanimalUIC->manageanimalUI->addAnimalbtn->hide();
    } else {
        UIServer::manageanimalUIC->manageanimalUI->addAnimalbtn->show();
    }
    UIServer::manageanimalUIC->show_window();
}
void UIServer::show_clients()
{
    UIServer::manageclientUIC->show_window();
}
void UIServer::show_login_error()
{
    UIServer::loginUIC->show_window();
    UIServer::loginUIC->invalid_cred();
}
void UIServer::logout()
{
    UIServer::addnewanimalUIC->hide_window();
    UIServer::addnewclientUIC->hide_window();
    UIServer::manageanimalUIC->hide_window();
    UIServer::manageclientUIC->hide_window();
    UIServer::clientportalUIC->hide_window();
    UIServer::staffportalUIC->hide_window();
    UIServer::loginUIC->show_window();
}
void UIServer::show_staff_portal()
{
    UIServer::staffportalUIC->show_window();
}
void UIServer::show_client_portal(QString* n)
{
    UIServer::clientportalUIC->show_window();
    UIServer::clientportalLogic->set_name(n);
}
void UIServer::edit_client_profile(QString* n)
{
    UIServer::clientportalUIC->hide_window();
    UIServer::editclientUIC->load_info(n);
    UIServer::editclientUIC->show_window();
}
void UIServer::on_comboBoxSpecies_currentIndexChanged(const QString &arg1)
{
    UIServer::editclientLogic->get_breeds(arg1);
}

///addnewanimal interface
/// ---------------------
AddNewAnimalUI::AddNewAnimalUI(UIServer* uis) : QDialog(), addnewanimalUI(new Ui::AddNewAnimal)
{
    uiserver = uis;
    addnewanimalUI->setupUi(this);
    this->setModal(true);
}
void AddNewAnimalUI::show_window()
{
    this->exec();
    this->show();
}
void AddNewAnimalUI::hide_window()
{
    this->hide();
}
void AddNewAnimalUI::on_cancelbtn_clicked()
{
    hide_window();
}
void AddNewAnimalUI::on_addAnimalbtn_clicked()
{
    QString name = addnewanimalUI->txtName->toPlainText();
    if(!uiserver->addnewanimalLogic->animal_exists(&name)){
        QList<QString>* PAList = new QList<QString>();
        QList<QString>* NPAList = new QList<QString>();
        //add values to PALIST
        //species
        if (addnewanimalUI->radDog->isChecked()){PAList->append("Dog");}
        else if (addnewanimalUI->radCat->isChecked()){PAList->append("Cat");}
        else if (addnewanimalUI->radRabbit->isChecked()){PAList->append("Rabbit");}
        else if (addnewanimalUI->radBird->isChecked()){PAList->append("Bird");}
        else if (addnewanimalUI->radFish->isChecked()){PAList->append("Fish");}
        else {PAList->append("NULL");};

        //breed
        PAList->append(addnewanimalUI->txtBreed->toPlainText());

        //sex
        if (addnewanimalUI->radMale->isChecked()){PAList->append("Male");}
        else if (addnewanimalUI->radFemale->isChecked()) {PAList->append("Female");}
        else {PAList->append("NULL");};

        //age
        PAList->append(addnewanimalUI->ageComboBox->currentText().toStdString().c_str());

        //add values to NPAList
        QString val;
        val = QString::number(addnewanimalUI->NPAttr1spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr2spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr3spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr4spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr5spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr6spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr7spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr8spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr9spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr10spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr11spinBox->value());
        NPAList->append(val);
        val = QString::number(addnewanimalUI->NPAttr12spinBox->value());
        NPAList->append(val);

        uiserver->addnewanimalLogic->add_new_animal(&name, PAList, NPAList);
        hide_window();
        uiserver->manageanimalUIC->show_window();
        uiserver->manageanimalUIC->update_animals(&name, PAList);
    }else{
        QMessageBox::warning(this, tr("Animal already exists"), tr("Error: Animal name already in use."));
    }
}

///addnewclient interface
///----------------------
AddNewClientUI::AddNewClientUI(UIServer* uis) : QDialog(), addnewclientUI(new Ui::AddNewClient)
{
    uiserver = uis;
    addnewclientUI->setupUi(this);
    this->setModal(true);
}
void AddNewClientUI::show_window()
{
    this->exec();
    this->show();
}
void AddNewClientUI::hide_window()
{
    this->hide();
}
void AddNewClientUI::on_cancel_button_clicked()
{
    hide_window();
}
void AddNewClientUI::on_add_button_clicked()
{
    QString name = addnewclientUI->name_txt->text();
    if(!uiserver->addnewclientLogic->client_exists(&name)){
        QString phone, email;
        phone = addnewclientUI->phone_txt->text();
        email = addnewclientUI->email_txt->text();
        uiserver->addnewclientLogic->add_new_client(&name, &phone, &email);
        hide_window();
        uiserver->manageclientUIC->show_window();
        uiserver->manageclientUIC->update_clients(&name, &phone, &email);
    } else {
        QMessageBox::warning(this, tr("Client already exists"), tr("Error: Client name already in use."));
    }
}

///edit animal interface
/// --------------------
EditAnimalUI::EditAnimalUI(UIServer* uis) : QDialog(), editanimalUI(new Ui::EditAnimal)
{
    uiserver = uis;
    editanimalUI->setupUi(this);
    this->setModal(true);
}
void EditAnimalUI::show_window()
{
    this->exec();
    this->show();
}
void EditAnimalUI::hide_window()
{
    this->hide();
}
void EditAnimalUI::load_info(QString* n)
{
    QList<QString>* PA=NULL;
    QList<QString>* NPA=NULL;
    uiserver->editanimalLogic->set_up(n, PA, NPA);

}
void EditAnimalUI::on_btnSave_clicked() {
    QString name = editanimalUI->txt_name->text();
    QList<QString>* PAList = new QList<QString>();
    QList<QString>* NPAList = new QList<QString>();
    //add values to PALIST
    //species
    if (editanimalUI->radDog->isChecked()){PAList->append("Dog");}
    else if (editanimalUI->radCat->isChecked()){PAList->append("Cat");}
    else if (editanimalUI->radRabbit->isChecked()){PAList->append("Rabbit");}
    else if (editanimalUI->radBird->isChecked()){PAList->append("Bird");}
    else if (editanimalUI->radFish->isChecked()){PAList->append("Fish");}
    else {PAList->append("NULL");};

    //breed
    PAList->append(editanimalUI->txtBreed->text());

    //sex
    if (editanimalUI->radMale->isChecked()){PAList->append("Male");}
    else if (editanimalUI->radFemale->isChecked()) {PAList->append("Female");}
    else {PAList->append("NULL");};

    //age
    PAList->append(editanimalUI->ageComboBox->currentText().toStdString().c_str());

    //add values to NPAList
    QString val;
    val = QString::number(editanimalUI->NPAttr1spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr2spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr3spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr4spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr5spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr6spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr7spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr8spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr9spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr10spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr11spinBox->value());
    NPAList->append(val);
    val = QString::number(editanimalUI->NPAttr12spinBox->value());
    NPAList->append(val);

    uiserver->editanimalLogic->editAnimal(&name,PAList,NPAList);
}
void EditAnimalUI::on_btnCancel_clicked()
{
    hide_window();
}

///edit client interface
/// --------------------
EditClientUI::EditClientUI(UIServer* uis) : QDialog(), editclientUI(new Ui::EditClient)
{
    uiserver = uis;
    editclientUI->setupUi(this);
    this->setModal(true);
}
void EditClientUI::show_window()
{
    this->exec();
    this->show();
}
void EditClientUI::hide_window()
{
    this->hide();
}
void EditClientUI::load_info(QString* n)
{
    QString phone, email;
    QList<QString>*PA=NULL;
    QList<QString>*NPA=NULL;
    uiserver->editclientLogic->set_up(n, &phone, &email, PA, NPA);
    editclientUI->txtName->setText(*n);
    editclientUI->phone_label->setText(phone);
    editclientUI->emai_label->setText(email);

    //do for loop for PA
    editclientUI->NPAttr1spinBox->setValue(NPA->at(0).toInt());
    editclientUI->NPAttr2spinBox->setValue(NPA->at(1).toInt());
    editclientUI->NPAttr3spinBox->setValue(NPA->at(2).toInt());
    editclientUI->NPAttr4spinBox->setValue(NPA->at(3).toInt());
    editclientUI->NPAttr5spinBox->setValue(NPA->at(4).toInt());
    editclientUI->NPAttr6spinBox->setValue(NPA->at(5).toInt());
    editclientUI->NPAttr7spinBox->setValue(NPA->at(6).toInt());
    editclientUI->NPAttr8spinBox->setValue(NPA->at(7).toInt());
    editclientUI->NPAttr9spinBox->setValue(NPA->at(8).toInt());
    editclientUI->NPAttr10spinBox->setValue(NPA->at(9).toInt());
    editclientUI->NPAttr11spinBox->setValue(NPA->at(10).toInt());
    editclientUI->NPAttr12spinBox->setValue(NPA->at(11).toInt());
}
void EditClientUI::on_btnSave_clicked() {
    QString name, phone, email;
    QList<QString>* PAList = new QList<QString>();
    QList<QString>* NPAList = new QList<QString>();

    //get client information
    name = editclientUI->txtName->text();
    phone = editclientUI->txtPhone->text();
    email = editclientUI->txtEmail->text();

    //add values to persInfo
    //species
    if (editclientUI->radDog->isChecked()){PAList->append("Dog");}
    else if (editclientUI->radCat->isChecked()){PAList->append("Cat");}
    else if (editclientUI->radRabbit->isChecked()){PAList->append("Rabbit");}
    else if (editclientUI->radBird->isChecked()){PAList->append("Bird");}
    else if (editclientUI->radFish->isChecked()){PAList->append("Fish");}
    else {PAList->append("NULL");};

    //breed
    PAList->append(editclientUI->txtBreed->text());

    //sex
    if (editclientUI->radMale->isChecked()){PAList->append("Male");}
    else if (editclientUI->radFemale->isChecked()) {PAList->append("Female");}
    else {PAList->append("NULL");};

    //age
    PAList->append(editclientUI->ageComboBox->currentText().toStdString().c_str());

    //add values to NPAList
    QString val;
    val = QString::number(editclientUI->NPAttr1spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr2spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr3spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr4spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr5spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr6spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr7spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr8spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr9spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr10spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr11spinBox->value());
    NPAList->append(val);
    val = QString::number(editclientUI->NPAttr12spinBox->value());
    NPAList->append(val);

    uiserver->editclientLogic->editClient(&name,&phone,&email,PAList,NPAList);
}
void EditClientUI::on_btnCancel_clicked()
{
    hide_window();
}

///Login interface
///---------------
LoginUI::LoginUI(UIServer* uis) : QDialog(), loginUI(new Ui::Login)
{
    uiserver = uis;
    loginUI->setupUi(this);
    this->setModal(true);
}
void LoginUI::invalid_cred()
{
    loginUI->txtName->clear();
    QMessageBox::information(this, tr("Credentials invalid"), tr("Username incorrect."));
}
void LoginUI::show_window()
{
    this->exec();
    this->show();
}
void LoginUI::hide_window()
{
    this->hide();
}
void LoginUI::on_btnClient_clicked()
{
    QString username = loginUI->txtName->toPlainText();
    uiserver->loginLogic->verify_client(username);
}
void LoginUI::on_btnStaff_clicked()
{
    QString username = loginUI->txtName->toPlainText();
    uiserver->loginLogic->verify_staff(username);
}

///client portal interface
///----------------------
ClientPortalUI::ClientPortalUI(UIServer* uis) : QDialog(), clientportalUI(new Ui::ClientPortal)
{
    uiserver = uis;
    clientportalUI->setupUi(this);
    this->setModal(true);
}
void ClientPortalUI::on_Viewanimals_clicked()
{
    uiserver->clientportalLogic->open_view_animal();
}
void ClientPortalUI::on_Editprofile_clicked()
{
    uiserver->clientportalLogic->open_edit_client();
}
void ClientPortalUI::on_client_logout_clicked()
{
    uiserver->clientportalLogic->logout();
}
void ClientPortalUI::show_window()
{
    this->exec();
    this->show();
}
void ClientPortalUI::hide_window()
{
    this->hide();
}

///manageanimal interface
///----------------------
ManageAnimalUI::ManageAnimalUI(UIServer* uis) : QDialog(), manageanimalUI(new Ui::ManageAnimal)
{
    uiserver = uis;
    manageanimalUI->setupUi(this);
    this->setModal(true);
}
void ManageAnimalUI::show_window()
{
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
    int newRow = manageanimalUI->animalView->rowCount();
    manageanimalUI->animalView->insertRow(newRow);

    QTableWidgetItem* table_cell = new QTableWidgetItem;
    manageanimalUI->animalView->setItem(newRow,0,table_cell);
    table_cell->setText(*name);
    table_cell->setFont(boldfont);
    //add click event to show detailed profile on name

    for(int col=0; col<PA->size();col++){
        table_cell = new QTableWidgetItem;
        manageanimalUI->animalView->setItem(newRow,col+1,table_cell);
        table_cell->setText(PA->at(col));
    }
}
void ManageAnimalUI::load_animals()
{
    QFont boldfont;
    boldfont.setBold(true);
    QString name;
    QList<QString> PA;
    int size = uiserver->manageanimalLogic->animal_size();
    for(int i=0; i<size; i++){
        uiserver->manageanimalLogic->get_animal(i,&name,&PA);
        manageanimalUI->animalView->insertRow(i);

        QTableWidgetItem* table_cell = new QTableWidgetItem;
        manageanimalUI->animalView->setItem(i,0,table_cell);
        table_cell->setText(name);
        table_cell->setFont(boldfont);

        for(int col=0; col<PA.size(); col++){
            table_cell = new QTableWidgetItem;
            manageanimalUI->animalView->setItem(i,col+1,table_cell);
            table_cell->setText(PA.at(col));
        }
    }
}

///manage client interface
/// ----------------------
ManageClientUI::ManageClientUI(UIServer* uis) : QDialog(), manageclientUI(new Ui::ManageClient)
{
    uiserver = uis;
    manageclientUI->setupUi(this);
    this->setModal(true);
}
void ManageClientUI::show_window()
{
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
    int newRow = manageclientUI->clientlist->rowCount();
    manageclientUI->clientlist->insertRow(newRow);

    QTableWidgetItem* table_cell = new QTableWidgetItem;
    manageclientUI->clientlist->setItem(newRow,0,table_cell);
    table_cell->setText(*name);
    table_cell->setFont(boldfont);

    table_cell = new QTableWidgetItem;
    manageclientUI->clientlist->setItem(newRow,1,table_cell);
    table_cell->setText(*phone);

    table_cell = new QTableWidgetItem;
    manageclientUI->clientlist->setItem(newRow,2,table_cell);
    table_cell->setText(*email);
}
void ManageClientUI::load_clients()
{
    int size = uiserver->manageclientLogic->client_size();
    QFont boldfont;
    boldfont.setBold(true);
    QString name, phone, email;
    for(int i=0; i<size; i++){
        uiserver->manageclientLogic->get_client(i, &name, &phone, &email);
        manageclientUI->clientlist->insertRow(i);

        QTableWidgetItem* table_cell = new QTableWidgetItem;
        manageclientUI->clientlist->setItem(i,0,table_cell);
        table_cell->setText(name);
        table_cell->setFont(boldfont);

        table_cell = new QTableWidgetItem;
        manageclientUI->clientlist->setItem(i,1,table_cell);
        table_cell->setText(phone);

        table_cell = new QTableWidgetItem;
        manageclientUI->clientlist->setItem(i,2,table_cell);
        table_cell->setText(email);
    }
}

///staff portal interface
///----------------------
StaffPortalUI::StaffPortalUI(UIServer* uis) : QDialog(), staffportalUI(new Ui::StaffPortal)
{
    uiserver = uis;
    staffportalUI->setupUi(this);
    this->setModal(true);
}
void StaffPortalUI::on_btnAnimals_clicked()
{
    uiserver->staffportalLogic->open_manage_animal();
}
void StaffPortalUI::on_btnClients_clicked()
{
    uiserver->staffportalLogic->open_manage_client();
}
void StaffPortalUI::on_staff_logout_clicked()
{
    uiserver->staffportalLogic->logout();
}
void StaffPortalUI::show_window()
{
    this->exec();
    this->show();
}
void StaffPortalUI::hide_window()
{
    this->hide();
}
