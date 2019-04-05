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
#include "acmdetails.h"

#include <QDebug>

UIServer::UIServer()
{
    UIServer::addnewanimalUIC = new AddNewAnimalUI(this);

    UIServer::addnewclientUIC = new AddNewClientUI(this);

    UIServer::editanimalUIC = new EditAnimalUI(this);

    UIServer::editclientUIC = new EditClientUI(this);

    UIServer::loginUIC = new LoginUI(this);

    UIServer::manageanimalUIC = new ManageAnimalUI(this);

    UIServer::manageclientUIC = new ManageClientUI(this);

    UIServer::clientportalUIC = new ClientPortalUI(this);

    UIServer::staffportalUIC = new StaffPortalUI(this);

    UIServer::acmdetailsUIC = new ACMDetailsUI(this);
}
UIServer::~UIServer()
{
    delete UIServer::addnewanimalUIC->addnewanimalUI;
    delete UIServer::addnewanimalUIC;

    delete UIServer::addnewclientUIC->addnewclientUI;
    delete UIServer::addnewclientUIC;

    delete UIServer::editanimalUIC->editanimalUI;
    delete UIServer::editanimalUIC;

    delete UIServer::editclientUIC->editclientUI;
    delete UIServer::editclientUIC;

    delete UIServer::loginUIC->loginUI;
    delete UIServer::loginUIC;

    delete UIServer::manageanimalUIC->manageanimalUI;
    delete UIServer::manageanimalUIC;

    delete UIServer::manageclientUIC->manageclientUI;
    delete UIServer::manageclientUIC;

    delete UIServer::clientportalUIC->clientportalUI;
    delete UIServer::clientportalUIC;

    delete UIServer::staffportalUIC->staffportalUI;
    delete UIServer::staffportalUIC;

    delete UIServer::acmdetailsUIC->acmdetailsUI;
    delete UIServer::acmdetailsUIC;
}
void UIServer::set_up_logic(AddNewAnimal* ana, AddNewClient* anc, EditAnimal* ea, EditClient* ec, Login* l, ManageAnimal* ma, ManageClient* mc, ClientPortal* cp, StaffPortal* sp, ACMDetails* acmd)
{
    addnewanimalLogic = ana;
    addnewclientLogic = anc;
    editanimalLogic = ea;
    editclientLogic = ec;
    loginLogic = l;
    manageanimalLogic = ma;
    manageclientLogic = mc;
    clientportalLogic = cp;
    staffportalLogic = sp;
    acmdetailsLogic = acmd;
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
        UIServer::manageanimalUIC->manageanimalUI->addNewAnimalbtn->hide();
        UIServer::manageanimalUIC->manageanimalUI->btnEditanimal->hide();
    } else {
        UIServer::manageanimalUIC->manageanimalUI->addNewAnimalbtn->show();
        UIServer::manageanimalUIC->manageanimalUI->btnEditanimal->show();
        UIServer::manageanimalUIC->manageanimalUI->btnEditanimal->setEnabled(false);
    }
    UIServer::manageanimalUIC->show_window();
}
void UIServer::show_clients()
{
    UIServer::manageclientUIC->show_window();
}
void UIServer::show_acmdetails()
{
    UIServer::acmdetailsUIC->show_window();
}
void UIServer::show_login_error()
{
    UIServer::loginUIC->show_window();
    UIServer::loginUIC->invalid_cred();
}
void UIServer::logout()
{
    UIServer::loginUIC->show_window();
}
void UIServer::staffback()
{
    UIServer::addnewanimalUIC->hide_window();
    UIServer::addnewclientUIC->hide_window();
    UIServer::manageanimalUIC->hide_window();
    UIServer::manageclientUIC->hide_window();
    UIServer::clientportalUIC->hide_window();
    UIServer::staffportalUIC->show_window();
    UIServer::loginUIC->hide_window();
}
void UIServer::clientback()
{
    UIServer::addnewanimalUIC->hide_window();
    UIServer::addnewclientUIC->hide_window();
    UIServer::manageanimalUIC->hide_window();
    UIServer::manageclientUIC->hide_window();
    UIServer::clientportalUIC->show_window();
    UIServer::staffportalUIC->hide_window();
    UIServer::loginUIC->hide_window();
}
void UIServer::show_staff_portal()
{
    UIServer::loginUIC->hide_window();
    UIServer::staffportalUIC->show_window();
}
void UIServer::show_client_portal(QString* n)
{
    UIServer::loginUIC->hide_window();
    UIServer::clientportalUIC->show_window();
    UIServer::clientportalLogic->set_name(n);
}
void UIServer::edit_client_profile(QString* n)
{
    UIServer::clientportalUIC->hide_window();
    UIServer::editclientUIC->load_info(n);
    UIServer::editclientUIC->show_window();
}
void UIServer::edit_animal_profile(QString* n)
{
    UIServer::staffportalUIC->hide_window();
    UIServer::editanimalUIC->load_info(n);
    UIServer::editanimalUIC->show_window();
}

///addnewanimal interface
/// ---------------------
AddNewAnimalUI::AddNewAnimalUI(UIServer* uis) : QDialog(), addnewanimalUI(new Ui::AddNewAnimal)
{
    uiserver = uis;
    addnewanimalUI->setupUi(this);
}
void AddNewAnimalUI::show_window()
{
    this->open();
}
void AddNewAnimalUI::hide_window()
{
    this->close();
    uiserver->manageanimalUIC->show_window();
}
void AddNewAnimalUI::on_cancelbtn_clicked()
{
    addnewanimalUI->txtName->clear();
    addnewanimalUI->txtBreed->clear();
    addnewanimalUI->NPAttr1spinBox->clear();
    addnewanimalUI->NPAttr2spinBox->clear();
    addnewanimalUI->NPAttr3spinBox->clear();
    addnewanimalUI->NPAttr4spinBox->clear();
    addnewanimalUI->NPAttr5spinBox->clear();
    addnewanimalUI->NPAttr6spinBox->clear();
    addnewanimalUI->NPAttr7spinBox->clear();
    addnewanimalUI->NPAttr8spinBox->clear();
    addnewanimalUI->NPAttr9spinBox->clear();
    addnewanimalUI->NPAttr10spinBox->clear();
    addnewanimalUI->NPAttr11spinBox->clear();
    addnewanimalUI->NPAttr12spinBox->clear();
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
}
void AddNewClientUI::show_window()
{
    this->open();
}
void AddNewClientUI::hide_window()
{
    this->close();
    uiserver->manageclientUIC->show_window();
}
void AddNewClientUI::on_cancel_button_clicked()
{
    addnewclientUI->name_txt->clear();
    addnewclientUI->phone_txt->clear();
    addnewclientUI->email_txt->clear();
    hide_window();
}
void AddNewClientUI::on_add_client_clicked()
{
    QString name = addnewclientUI->name_txt->text();
    if(!uiserver->addnewclientLogic->client_exists(&name)){
        QString phone, email;
        phone = addnewclientUI->phone_txt->text();
        email = addnewclientUI->email_txt->text();
        uiserver->addnewclientLogic->add_new_client(&name, &phone, &email);
        uiserver->manageclientUIC->update_clients(&name, &phone, &email);
        hide_window();
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
}
void EditAnimalUI::show_window()
{
    this->open();
}
void EditAnimalUI::hide_window()
{
    this->close();
}
void EditAnimalUI::load_info(QString* n)
{
    QList<QString> PA;
    QList<QString> NPA;
    uiserver->editanimalLogic->set_up(n, &PA, &NPA);

    editanimalUI->txt_name->setText(*n);
    editanimalUI->txt_species->setText(PA.at(0));
    editanimalUI->txtBreed->setText(PA.at(1));

    editanimalUI->NPAttr1spinBox->setValue(NPA.at(0).toInt());
    editanimalUI->NPAttr2spinBox->setValue(NPA.at(1).toInt());
    editanimalUI->NPAttr3spinBox->setValue(NPA.at(2).toInt());
    editanimalUI->NPAttr4spinBox->setValue(NPA.at(3).toInt());
    editanimalUI->NPAttr5spinBox->setValue(NPA.at(4).toInt());
    editanimalUI->NPAttr6spinBox->setValue(NPA.at(5).toInt());
    editanimalUI->NPAttr7spinBox->setValue(NPA.at(6).toInt());
    editanimalUI->NPAttr8spinBox->setValue(NPA.at(7).toInt());
    editanimalUI->NPAttr9spinBox->setValue(NPA.at(8).toInt());
    editanimalUI->NPAttr10spinBox->setValue(NPA.at(9).toInt());
    editanimalUI->NPAttr11spinBox->setValue(NPA.at(10).toInt());
    editanimalUI->NPAttr12spinBox->setValue(NPA.at(11).toInt());

    show_window();
}
void EditAnimalUI::on_btnSave_clicked() {
    QString name = editanimalUI->txt_name->text();
    QList<QString>* PAList = new QList<QString>();
    QList<QString>* NPAList = new QList<QString>();
    //add values to PALIST
    //species
    PAList->append(editanimalUI->txt_species->text());
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
    QMessageBox::information(this, tr("Information Updated"), tr("Save successful!"));
    hide_window();
    uiserver->manageanimalUIC->show_window();
}
void EditAnimalUI::on_btnCancel_clicked()
{
    editanimalUI->txtBreed->clear();
    hide_window();
    uiserver->manageanimalUIC->show_window();
}

///edit client interface
/// --------------------
EditClientUI::EditClientUI(UIServer* uis) : QDialog(), editclientUI(new Ui::EditClient)
{
    uiserver = uis;
    editclientUI->setupUi(this);
}
void EditClientUI::show_window()
{
    this->open();
}
void EditClientUI::hide_window()
{
    this->close();
    uiserver->clientportalUIC->show_window();
}
void EditClientUI::load_info(QString* n)
{
    QString phone;
    QString email;
    QList<QString> PA;
    QList<QString> NPA;
    uiserver->editclientLogic->set_up(n, &phone, &email, &PA, &NPA);
    editclientUI->txtName->setText(*n);
    editclientUI->txtPhone->setText(phone);
    editclientUI->txtEmail->setText(email);

    editclientUI->txtBreed->clear();

    editclientUI->NPAttr1spinBox->setValue(NPA.at(0).toInt());
    editclientUI->NPAttr2spinBox->setValue(NPA.at(1).toInt());
    editclientUI->NPAttr3spinBox->setValue(NPA.at(2).toInt());
    editclientUI->NPAttr4spinBox->setValue(NPA.at(3).toInt());
    editclientUI->NPAttr5spinBox->setValue(NPA.at(4).toInt());
    editclientUI->NPAttr6spinBox->setValue(NPA.at(5).toInt());
    editclientUI->NPAttr7spinBox->setValue(NPA.at(6).toInt());
    editclientUI->NPAttr8spinBox->setValue(NPA.at(7).toInt());
    editclientUI->NPAttr9spinBox->setValue(NPA.at(8).toInt());
    editclientUI->NPAttr10spinBox->setValue(NPA.at(9).toInt());
    editclientUI->NPAttr11spinBox->setValue(NPA.at(10).toInt());
    editclientUI->NPAttr12spinBox->setValue(NPA.at(11).toInt());
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
    QMessageBox::information(this, tr("Information Updated"), tr("Save successful!"));
    hide_window();
}
void EditClientUI::on_btnCancel_clicked()
{
    editclientUI->txtName->clear();
    editclientUI->txtPhone->clear();
    editclientUI->txtEmail->clear();
    editclientUI->txtBreed->clear();
    hide_window();
}

///Login interface
///---------------
LoginUI::LoginUI(UIServer* uis) : QDialog(), loginUI(new Ui::Login)
{
    uiserver = uis;
    loginUI->setupUi(this);
}
void LoginUI::invalid_cred()
{
    loginUI->txtName->clear();
    QMessageBox::information(this, tr("Credentials invalid"), tr("Username incorrect."));
}
void LoginUI::show_window()
{
    this->open();
}
void LoginUI::hide_window()
{
    loginUI->txtName->clear();
    this->close();
}
void LoginUI::on_btnClient_clicked()
{
    QString username = loginUI->txtName->toPlainText();
    uiserver->loginLogic->verify_client(username);
    loginUI->txtName->clear();
}
void LoginUI::on_btnStaff_clicked()
{
    QString username = loginUI->txtName->toPlainText();
    uiserver->loginLogic->verify_staff(username);
    loginUI->txtName->clear();
}

///client portal interface
///----------------------
ClientPortalUI::ClientPortalUI(UIServer* uis) : QDialog(), clientportalUI(new Ui::ClientPortal)
{
    uiserver = uis;
    clientportalUI->setupUi(this);
}
void ClientPortalUI::on_Viewanimals_clicked()
{
    hide_window();
    uiserver->clientportalLogic->open_view_animal();
}
void ClientPortalUI::on_Editprofile_clicked()
{
    hide_window();
    uiserver->clientportalLogic->open_edit_client();
}
void ClientPortalUI::on_client_logout_clicked()
{
    hide_window();
    uiserver->clientportalLogic->logout();
}
void ClientPortalUI::show_window()
{
    this->open();
}
void ClientPortalUI::hide_window()
{
    this->close();
}

///manageanimal interface
///----------------------
ManageAnimalUI::ManageAnimalUI(UIServer* uis) : QDialog(), manageanimalUI(new Ui::ManageAnimal)
{
    uiserver = uis;
    manageanimalUI->setupUi(this);
}
void ManageAnimalUI::show_window()
{
    this->open();
}
void ManageAnimalUI::hide_window()
{
    this->close();
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
void ManageAnimalUI::update_animal(QString* name, QList<QString>* PA)
{
    QFont boldfont;
    boldfont.setBold(true);
    for(int i=0; i<manageanimalUI->animalView->rowCount(); i++)
    {
        if(manageanimalUI->animalView->itemAt(0,i)->text() == *name){
            manageanimalUI->animalView->itemAt(0,i)->setText(PA->at(0));
            manageanimalUI->animalView->itemAt(1,i)->setText(PA->at(1));
            manageanimalUI->animalView->itemAt(2,i)->setText(PA->at(2));
            manageanimalUI->animalView->itemAt(3,i)->setText(PA->at(3));
            break;
        }
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
void ManageAnimalUI::on_animalView_activated(const QModelIndex &index)
{
    if (manageanimalUI->btnEditanimal->isVisible()){
        manageanimalUI->btnEditanimal->setEnabled(true);
    }
    QList<QString> PA;
    QList<QString> NPA;
    QString name;
    uiserver->manageanimalLogic->get_animal(index.row(),&name,&PA,&NPA);

    manageanimalUI->txt_Name->setText(name);
    manageanimalUI->txt_Species->setText(PA.at(0));
    manageanimalUI->txt_Breed->setText(PA.at(1));
    manageanimalUI->txt_Sex->setText(PA.at(2));
    manageanimalUI->txt_Age->setText(PA.at(3));

    manageanimalUI->txt_NPA1->setText(NPA.at(0));
    manageanimalUI->txt_NPA2->setText(NPA.at(1));
    manageanimalUI->txt_NPA3->setText(NPA.at(2));
    manageanimalUI->txt_NPA4->setText(NPA.at(3));
    manageanimalUI->txt_NPA5->setText(NPA.at(4));
    manageanimalUI->txt_NPA6->setText(NPA.at(5));
    manageanimalUI->txt_NPA7->setText(NPA.at(6));
    manageanimalUI->txt_NPA8->setText(NPA.at(7));
    manageanimalUI->txt_NPA9->setText(NPA.at(8));
    manageanimalUI->txt_NPA10->setText(NPA.at(9));
    manageanimalUI->txt_NPA11->setText(NPA.at(10));
    manageanimalUI->txt_NPA12->setText(NPA.at(11));

    manageanimalUI->btnEditanimal->setEnabled(true);

}
void ManageAnimalUI::on_btnEditanimal_clicked()
{
    hide_window();
    uiserver->manageanimalLogic->open_edit_animal();
}
void ManageAnimalUI::on_btnBack_clicked()
{
    hide_window();
    if (!manageanimalUI->btnEditanimal->isHidden()){
        uiserver->staffportalUIC->show_window();
    }else{
        //uiserver->manageanimalLogic->back();
        uiserver->loginLogic->verify_client(uiserver->clientportalLogic->get_name());

    }
}
void ManageAnimalUI::on_addNewAnimalbtn_clicked()
{
    hide_window();
    uiserver->addnewanimalUIC->show_window();
}

///manage client interface
/// ----------------------
ManageClientUI::ManageClientUI(UIServer* uis) : QDialog(), manageclientUI(new Ui::ManageClient)
{
    uiserver = uis;
    manageclientUI->setupUi(this);
}
void ManageClientUI::show_window()
{
    this->open();
}
void ManageClientUI::hide_window()
{
    this->close();
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
void ManageClientUI::on_addclientbutton_clicked()
{
    hide_window();
    uiserver->addnewclientUIC->show_window();
}
void ManageClientUI::on_clientlist_activated(const QModelIndex &index)
{
    //access dynamic memory and pull the client that at index of the row that was clicked
    QList<QString> PA;
    QList<QString> NPA;
    QString name;
    QString phone;
    QString email;
    uiserver->manageclientLogic->get_client(index.row(),&name,&phone,&email,&PA,&NPA);
    manageclientUI->clientname->setText(name);
    manageclientUI->clientphone->setText(phone);
    manageclientUI->clientemail->setText(email);
    if(PA.size() > 0 && NPA.size() > 0){
        QString prefs = PA.at(2) + " " + PA.at(3) + " " + PA.at(1) + " " + PA.at(0);
        manageclientUI->clientprefs->setText(prefs);
        manageclientUI->NPA1text->setText(NPA.at(0));
        manageclientUI->NPA2text->setText(NPA.at(1));
        manageclientUI->NPA3text->setText(NPA.at(2));
        manageclientUI->NPA4text->setText(NPA.at(3));
        manageclientUI->NPA5text->setText(NPA.at(4));
        manageclientUI->NPA6text->setText(NPA.at(5));
        manageclientUI->NPA7text->setText(NPA.at(6));
        manageclientUI->NPA8text->setText(NPA.at(7));
        manageclientUI->NPA9text->setText(NPA.at(8));
        manageclientUI->NPA10text->setText(NPA.at(9));
        manageclientUI->NPA11text->setText(NPA.at(10));
        manageclientUI->NPA12text->setText(NPA.at(11));
        //manageclientUI->btnEditclient->setEnabled(true);
    }else{
        QString prefs = "";
        manageclientUI->clientprefs->setText(prefs);
        manageclientUI->NPA1text->setText("");
        manageclientUI->NPA2text->setText("");
        manageclientUI->NPA3text->setText("");
        manageclientUI->NPA4text->setText("");
        manageclientUI->NPA5text->setText("");
        manageclientUI->NPA6text->setText("");
        manageclientUI->NPA7text->setText("");
        manageclientUI->NPA8text->setText("");
        manageclientUI->NPA9text->setText("");
        manageclientUI->NPA10text->setText("");
        manageclientUI->NPA11text->setText("");
        manageclientUI->NPA12text->setText("");
        //manageclientUI->btnEditclient->setEnabled(true);
    }
}
void ManageClientUI::on_btnBack_clicked()
{
    hide_window();
    uiserver->staffportalUIC->show_window();
}

///staff portal interface
///----------------------
StaffPortalUI::StaffPortalUI(UIServer* uis) : QDialog(), staffportalUI(new Ui::StaffPortal)
{
    uiserver = uis;
    staffportalUI->setupUi(this);
}
void StaffPortalUI::on_runACMButton_clicked()
{
    hide_window();
    uiserver->staffportalLogic->open_ACMDetails();
}
void StaffPortalUI::on_btnAnimals_clicked()
{
    hide_window();
    uiserver->staffportalLogic->open_manage_animal();
}
void StaffPortalUI::on_btnClients_clicked()
{
    hide_window();
    uiserver->staffportalLogic->open_manage_client();
}
void StaffPortalUI::on_staff_logout_clicked()
{
    hide_window();
    uiserver->staffportalLogic->logout();
}
void StaffPortalUI::show_window()
{
    this->open();
}
void StaffPortalUI::hide_window()
{
    this->close();
}


///ACMDetails interface
///----------------------
ACMDetailsUI::ACMDetailsUI(UIServer* uis) : QDialog(), acmdetailsUI(new Ui::ACMDetails)
{
    uiserver = uis;
    acmdetailsUI->setupUi(this);
}
void ACMDetailsUI::on_backButton_clicked()
{
    hide_window();
    uiserver->staffportalUIC->show_window();
}
void ACMDetailsUI::show_window()
{
    this->open();
}
void ACMDetailsUI::hide_window()
{
    this->close();
}
void ACMDetailsUI::on_ACMResultsTable_activated(const QModelIndex &index)
{
     //update detailed view showing client and animal profiles side-by-side with coloured fields
}
