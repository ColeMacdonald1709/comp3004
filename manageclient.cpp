#include "manageclient.h"
#include "ui_manageclient.h"

manageclient::manageclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageclient)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./cuACS_db.db");
    loadClients();
    showClients();

}

manageclient::~manageclient()
{
    delete ui;
    for(int i=0;i<clients.size();i++){
        delete clients.at(i);
    }
}

void manageclient::loadClients(){
    if (!db.open())
    {
        qDebug()<<"Failed to open cuACS database";
        return;
    }
    QSqlQuery clientqry("select * from Clients");
    while(clientqry.next()){
        QString name = clientqry.value("Name").toString();
        QString phone = clientqry.value("Phone").toString();
        QString email = clientqry.value("Email").toString();
//add personal info
        QList<QString>* info = new QList<QString>();
        QString species = clientqry.value("Species").toString();
        info->append(species);
        QString breed = clientqry.value("Breed").toString();
        info->append(breed);
        QString age = clientqry.value("Age").toString();
        info->append(age);
        QString sex = clientqry.value("Sex").toString();
        info->append(sex);
//add preferences
        QList<QString>* prefs = new QList<QString>();
        QString NPA1 = clientqry.value("NPA1").toString();
        prefs->append(NPA1);
        QString NPA2 = clientqry.value("NPA2").toString();
        prefs->append(NPA2);
        QString NPA3 = clientqry.value("NPA3").toString();
        prefs->append(NPA3);
        QString NPA4 = clientqry.value("NPA4").toString();
        prefs->append(NPA4);
        QString NPA5 = clientqry.value("NPA5").toString();
        prefs->append(NPA5);
        QString NPA6 = clientqry.value("NPA6").toString();
        prefs->append(NPA6);
        QString NPA7 = clientqry.value("NPA7").toString();
        prefs->append(NPA7);
        QString NPA8 = clientqry.value("NPA8").toString();
        prefs->append(NPA8);
        QString NPA9 = clientqry.value("NPA9").toString();
        prefs->append(NPA9);
        QString NPA10 = clientqry.value("NPA10").toString();
        prefs->append(NPA10);
        QString NPA11 = clientqry.value("NPA11").toString();
        prefs->append(NPA11);
        QString NPA12 = clientqry.value("NPA12").toString();
        prefs->append(NPA12);

        Client* newClient = new Client(name,phone,email,info,prefs);
//add client to dynamic storage
        clients.append(newClient);
    }
    db.close();
}

void manageclient::showClients(){
    //show all clients
        QFont boldfont;
        boldfont.setBold(true);
        for(int i=0;i<clients.size();i++){
            ui->clientlist->insertRow(i);
            Client* curr = clients.at(i);

            QTableWidgetItem* table_cell = new QTableWidgetItem;
            ui->clientlist->setItem(i,0,table_cell);
            table_cell->setText(curr->getName());
            table_cell->setFont(boldfont);

            table_cell = new QTableWidgetItem;
            ui->clientlist->setItem(i,1,table_cell);
            table_cell->setText(curr->getPhone());

            table_cell = new QTableWidgetItem;
            ui->clientlist->setItem(i,2,table_cell);
            table_cell->setText(curr->getEmail());
        }
}

void manageclient::updateClients(Client* newClient){

}
//show detailed profile
void manageclient::on_clientlist_doubleClicked(const QModelIndex &index)
{
    QString name = ui->clientlist->model()->data(index).toString();
    for(int i=0;i<clients.size();i++){
        if(clients.at(i)->getName() == name){
            ui->clientname->setText(clients.at(i)->getName());
            ui->clientphone->setText(clients.at(i)->getPhone());
            ui->clientemail->setText(clients.at(i)->getEmail());

            QString species = clients.at(i)->getInfo()->at(0);
            QString breed = clients.at(i)->getInfo()->at(1);;
            QString age = clients.at(i)->getInfo()->at(2);;
            QString sex = clients.at(i)->getInfo()->at(3);;
            ui->clientprefs->setText(age + " " + sex + " " + breed + " " + species);

            ui->NPA1text->setText(clients.at(i)->getPrefs()->at(0));
            ui->NPA2text->setText(clients.at(i)->getPrefs()->at(1));
            ui->NPA3text->setText(clients.at(i)->getPrefs()->at(2));
            ui->NPA4text->setText(clients.at(i)->getPrefs()->at(3));
            ui->NPA5text->setText(clients.at(i)->getPrefs()->at(4));
            ui->NPA6text->setText(clients.at(i)->getPrefs()->at(5));
            ui->NPA7text->setText(clients.at(i)->getPrefs()->at(6));
            ui->NPA8text->setText(clients.at(i)->getPrefs()->at(7));
            ui->NPA9text->setText(clients.at(i)->getPrefs()->at(8));
            ui->NPA10text->setText(clients.at(i)->getPrefs()->at(9));
            ui->NPA11text->setText(clients.at(i)->getPrefs()->at(10));
            ui->NPA12text->setText(clients.at(i)->getPrefs()->at(11));
        }
    }
}
