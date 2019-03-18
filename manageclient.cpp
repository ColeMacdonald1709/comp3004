/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "manageclient.h"

ManageClient::ManageClient(UIServer* uiserver) {ui = uiserver;}
ManageClient::ManageClient(DBServer* dbserver) {db = dbserver;}

ManageClient::~ManageClient(){}

void ManageClient::loadClients(){
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

void ManageClient::showClients(){
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

void ManageClient::updateClients(Client* newClient){
    clients.append(newClient);
    QFont boldfont;
    boldfont.setBold(true);
    int newRow = ui->clientlist->rowCount();
    ui->clientlist->insertRow(newRow);

    QTableWidgetItem* table_cell = new QTableWidgetItem;
    ui->clientlist->setItem(newRow,0,table_cell);
    table_cell->setText(newClient->getName());
    table_cell->setFont(boldfont);

    table_cell = new QTableWidgetItem;
    ui->clientlist->setItem(newRow,1,table_cell);
    table_cell->setText(newClient->getPhone());

    table_cell = new QTableWidgetItem;
    ui->clientlist->setItem(newRow,2,table_cell);
    table_cell->setText(newClient->getEmail());
}

