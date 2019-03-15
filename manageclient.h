/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef MANAGECLIENT_H
#define MANAGECLIENT_H

#include <QDialog>
#include <QList>
#include <QtSql>
#include <QSqlError>
#include <QDebug>
#include "client.h"

namespace Ui {
class ManageClient;
}

class ManageClient : public QDialog
{
    Q_OBJECT

public:
    explicit ManageClient(QWidget *parent = 0);
    ~ManageClient();
    void updateClients(Client*);

private slots:
    void loadClients();
    void showClients();
    void on_clientlist_doubleClicked(const QModelIndex &index);

    void on_addclientbutton_clicked();

    void on_btnLogout_clicked();

private:
    Ui::ManageClient *ui;
    QList<Client*> clients;
    QSqlDatabase db;
};

#endif // MANAGECLIENT_H
