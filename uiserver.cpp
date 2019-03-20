/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "uiserver.h"

UIServer::UIServer()
{
    AddNewAnimal(this);
    AddNewAnimalUI();

    AddNewClient(this);
    AddNewClientUI();

    EditAnimal(this);
    EditAnimalUI();

    EditClient(this);
    EditClientUI();

    Login(this);
    LoginUI();

    ManageAnimal(this);
    ManageAnimalUI();

    ManageClient(this);
    ManageClientUI();

    ClientPortal(this);
    ClientPortalUI();

    StaffPortal(this);
    StaffPortalUI();
}
UIServer::~UIServer()
{
    delete UIServer::addnewanimalUIC.addnewanimalUI;
    //delete UIServer::addnewanimalUIC;
    //delete UIServer::addnewanimalLogic;

    delete UIServer::addnewclientUIC.addnewclientUI;
    //delete UIServer::addnewclientUIC;
    //delete UIServer::addnewclientLogic;

    delete UIServer::editanimalUIC.editanimalUI;
    //delete UIServer::editanimalUIC;
    //delete UIServer::editanimalLogic;

    delete UIServer::editclientUIC.editclientUI;
    //delete UIServer::editclientUIC;
    //delete UIServer::editclientLogic;

    delete UIServer::loginUIC.loginUI;
    //delete UIServer::loginUIC;
    //delete UIServer::loginLogic;

    delete UIServer::manageanimalUIC.manageanimalUI;
    //delete UIServer::manageanimalUIC;
    //delete UIServer::manageanimalLogic;

    delete UIServer::manageclientUIC.manageclientUI;
    //delete UIServer::manageclientUIC;
    //delete UIServer::manageclientLogic;

    delete UIServer::clientportalUIC.clientportalUI;
    //delete UIServer::clientportalUIC;
    //delete UIServer::clientportalLogic;

    delete UIServer::staffportalUIC.staffportalUI;
    //delete UIServer::staffportalUIC;
    //delete UIServer::staffportalLogic;
}

void UIServer::init()
{
    UIServer::loginUIC.show_window();
}
void UIServer::show_animals(bool isclient)
{
    if(isclient) {
        UIServer::manageanimalUIC.manageanimalUI->addAnimalbtn->hide();
    } else {
        UIServer::manageanimalUIC.manageanimalUI->addAnimalbtn->show();
    }
    UIServer::manageanimalUIC.show_window();
}
void UIServer::show_login_error()
{
    UIServer::loginUIC.show_window();
    UIServer::loginUIC.invalid_cred();
}
void UIServer::logout()
{
    UIServer::addnewanimalUIC.hide_window();
    UIServer::addnewclientUIC.hide_window();
    UIServer::manageanimalUIC.hide_window();
    UIServer::manageclientUIC.hide_window();
    UIServer::clientportalUIC.hide_window();
    UIServer::staffportalUIC.hide_window();
    UIServer::loginUIC.show_window();
}
void UIServer::show_staff_portal()
{
    UIServer::staffportalUIC.show_window();
}
void UIServer::show_client_portal(QString* n)
{
    UIServer::clientportalUIC.show_window();
    UIServer::clientportalLogic.set_name(n);
}
void UIServer::edit_client_profile(QString* n)
{
    UIServer::clientportalUIC.hide_window();
    UIServer::editclientUIC.load_info(n);
    UIServer::editclientUIC.show_window();
}
void UIServer::on_comboBoxSpecies_currentIndexChanged(const QString &arg1)
{
    UIServer::editclientLogic.get_breeds(arg1);
}

///addnewanimal interface
/// ---------------------
AddNewAnimalUI::AddNewAnimalUI() : QDialog(), addnewanimalUI(new Ui::AddNewAnimal)
{
    addnewanimalUI->setupUi(this);
}
void AddNewAnimalUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void AddNewAnimalUI::hide_window()
{
    this->hide();
}
void AddNewAnimalUI::on_cancelbtn_clicked()
{
    AddNewAnimalUI::hide_window();
}
void AddNewAnimalUI::on_addAnimalbtn_clicked()
{
    QString name = addnewanimalUI->txtName->toPlainText();
    if(!UIServer::addnewanimalLogic.animal_exists(&name)){
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

        UIServer::addnewanimalLogic.add_new_animal(&name, PAList, NPAList);
        hide_window();
        UIServer::manageanimalUIC.show_window();
        UIServer::manageanimalUIC.update_animals(&name, PAList);
    }else{
        QMessageBox::warning(this, tr("Animal already exists"), tr("Error: Animal name already in use."));
    }
}

///addnewclient interface
///----------------------
AddNewClientUI::AddNewClientUI() : QDialog(), addnewclientUI(new Ui::AddNewClient)
{
    addnewclientUI->setupUi(this);
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
void AddNewClientUI::on_cancel_button_clicked()
{
    AddNewClientUI::hide_window();
}
void AddNewClientUI::on_add_button_clicked()
{
    QString name = addnewclientUI->name_txt->text();
    if(!UIServer::addnewclientLogic.client_exists(&name)){
        QString phone, email;
        phone = addnewclientUI->phone_txt->text();
        email = addnewclientUI->email_txt->text();
        UIServer::addnewclientLogic.add_new_client(&name, &phone, &email);
        hide_window();
        UIServer::manageclientUIC.show_window();
        UIServer::manageclientUIC.update_clients(&name, &phone, &email);
        phone = UIServer::addnewclientUIC.addnewclientUI->phone_txt->text();
        email = UIServer::addnewclientUIC.addnewclientUI->email_txt->text();

        UIServer::addnewclientLogic.add_new_client(&name, &phone, &email);
        UIServer::addnewanimalUIC.hide_window();
        UIServer::manageclientUIC.show_window();
        UIServer::manageclientUIC.update_clients(&name, &phone, &email);
    } else {
        QMessageBox::warning(this, tr("Client already exists"), tr("Error: Client name already in use."));
    }
}

///edit animal interface
/// --------------------
EditAnimalUI::EditAnimalUI() : QDialog(), editanimalUI(new Ui::EditAnimal)
{
    editanimalUI->setupUi(this);
}
void EditAnimalUI::show_window()
{
    this->setModal(true);
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
    UIServer::editanimalLogic.set_up(n, PA, NPA);

}
void EditAnimalUI::on_btnSave_clicked() {
    QString name = UIServer::editanimalUIC.editanimalUI->txt_name->text();
    QList<QString>* PAList = new QList<QString>();
    QList<QString>* NPAList = new QList<QString>();
    //add values to PALIST
    //species
    if (UIServer::editanimalUIC.editanimalUI->radDog->isChecked()){PAList->append("Dog");}
    else if (UIServer::editanimalUIC.editanimalUI->radCat->isChecked()){PAList->append("Cat");}
    else if (UIServer::editanimalUIC.editanimalUI->radRabbit->isChecked()){PAList->append("Rabbit");}
    else if (UIServer::editanimalUIC.editanimalUI->radBird->isChecked()){PAList->append("Bird");}
    else if (UIServer::editanimalUIC.editanimalUI->radFish->isChecked()){PAList->append("Fish");}
    else {PAList->append("NULL");};

    //breed
    PAList->append(UIServer::editanimalUIC.editanimalUI->txtBreed->text());

    //sex
    if (UIServer::editanimalUIC.editanimalUI->radMale->isChecked()){PAList->append("Male");}
    else if (UIServer::editanimalUIC.editanimalUI->radFemale->isChecked()) {PAList->append("Female");}
    else {PAList->append("NULL");};

    //age
    PAList->append(UIServer::editanimalUIC.editanimalUI->ageComboBox->currentText().toStdString().c_str());

    //add values to NPAList
    QString val;
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr1spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr2spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr3spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr4spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr5spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr6spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr7spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr8spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr9spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr10spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr11spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editanimalUIC.editanimalUI->NPAttr12spinBox->value());
    NPAList->append(val);

    UIServer::editanimalLogic.editAnimal(&name,PAList,NPAList);
}
void EditAnimalUI::on_btnCancel_clicked()
{
    EditAnimalUI::hide_window();
}

///edit client interface
/// --------------------
EditClientUI::EditClientUI() : QDialog(), editclientUI(new Ui::EditClient)
{
    editclientUI->setupUi(this);
}
void EditClientUI::show_window()
{
    this->setModal(true);
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
    UIServer::editclientLogic.set_up(n, &phone, &email, PA, NPA);
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
    name = UIServer::editclientUIC.editclientUI->txtName->text();
    phone = UIServer::editclientUIC.editclientUI->txtPhone->text();
    email = UIServer::editclientUIC.editclientUI->txtEmail->text();

    //add values to persInfo
    //species
    if (UIServer::editclientUIC.editclientUI->radDog->isChecked()){PAList->append("Dog");}
    else if (UIServer::editclientUIC.editclientUI->radCat->isChecked()){PAList->append("Cat");}
    else if (UIServer::editclientUIC.editclientUI->radRabbit->isChecked()){PAList->append("Rabbit");}
    else if (UIServer::editclientUIC.editclientUI->radBird->isChecked()){PAList->append("Bird");}
    else if (UIServer::editclientUIC.editclientUI->radFish->isChecked()){PAList->append("Fish");}
    else {PAList->append("NULL");};

    //breed
    PAList->append(UIServer::editclientUIC.editclientUI->txtBreed->text());

    //sex
    if (UIServer::editclientUIC.editclientUI->radMale->isChecked()){PAList->append("Male");}
    else if (UIServer::editclientUIC.editclientUI->radFemale->isChecked()) {PAList->append("Female");}
    else {PAList->append("NULL");};

    //age
    PAList->append(UIServer::editclientUIC.editclientUI->ageComboBox->currentText().toStdString().c_str());

    //add values to NPAList
    QString val;
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr1spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr2spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr3spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr4spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr5spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr6spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr7spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr8spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr9spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr10spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr11spinBox->value());
    NPAList->append(val);
    val = QString::number(UIServer::editclientUIC.editclientUI->NPAttr12spinBox->value());
    NPAList->append(val);

    UIServer::editclientLogic.editClient(&name,&phone,&email,PAList,NPAList);
}
void EditClientUI::on_btnCancel_clicked()
{
    EditClientUI::hide_window();
}

///Login interface
///---------------
LoginUI::LoginUI() : QDialog(), loginUI(new Ui::Login)
{
    loginUI->setupUi(this);
}
void LoginUI::invalid_cred()
{
    loginUI->txtName->clear();
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
void LoginUI::on_btnClient_clicked()
{
    QString username = loginUI->txtName->toPlainText();
    UIServer::loginLogic.verify_client(username);
}
void LoginUI::on_btnStaff_clicked()
{
    QString username = loginUI->txtName->toPlainText();
    UIServer::loginLogic.verify_staff(username);
}

///client portal interface
///----------------------
ClientPortalUI::ClientPortalUI() : QDialog(), clientportalUI(new Ui::ClientPortal)
{
    clientportalUI->setupUi(this);
}
void ClientPortalUI::on_Viewanimals_clicked()
{
    UIServer::clientportalLogic.open_view_animal();
}
void ClientPortalUI::on_Editprofile_clicked()
{
    UIServer::clientportalLogic.open_edit_client();
}
void ClientPortalUI::on_client_logout_clicked()
{
    UIServer::clientportalLogic.logout();
}
void ClientPortalUI::show_window()
{
    this->setModal(true);
    this->exec();
    this->show();
}
void ClientPortalUI::hide_window()
{
    this->hide();
}

///manageanimal interface
///----------------------
ManageAnimalUI::ManageAnimalUI() : QDialog(), manageanimalUI(new Ui::ManageAnimal)
{
    manageanimalUI->setupUi(this);
    load_animals();
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
    int size = UIServer::manageanimalLogic.animal_size();
    for(int i=0; i<size; i++){
        UIServer::manageanimalLogic.get_animal(i,&name,&PA);
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
ManageClientUI::ManageClientUI() : QDialog(), manageclientUI(new Ui::ManageClient)
{
    manageclientUI->setupUi(this);
    load_clients();
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
    int size = UIServer::manageclientLogic.client_size();
    QFont boldfont;
    boldfont.setBold(true);
    QString name, phone, email;
    for(int i=0; i<size; i++){
        UIServer::manageclientLogic.get_client(i, &name, &phone, &email);
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
StaffPortalUI::StaffPortalUI() : QDialog(), staffportalUI(new Ui::StaffPortal)
{
    staffportalUI->setupUi(this);
}
void StaffPortalUI::on_btnAnimals_clicked()
{
    UIServer::staffportalLogic.open_manage_animal();
}
void StaffPortalUI::on_btnClients_clicked()
{
    UIServer::staffportalLogic.open_manage_client();
}
void StaffPortalUI::on_staff_logout_clicked()
{
    UIServer::staffportalLogic.logout();
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
