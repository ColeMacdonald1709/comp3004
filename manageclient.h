#ifndef MANAGECLIENT_H
#define MANAGECLIENT_H

#include <QDialog>
#include <QList>
#include <QtSql>
#include <QSqlError>
#include <QDebug>
#include "client.h"

namespace Ui {
class manageclient;
}

class manageclient : public QDialog
{
    Q_OBJECT

public:
    explicit manageclient(QWidget *parent = 0);
    ~manageclient();
    void updateClients(Client*);

private slots:
    void loadClients();
    void showClients();
    void on_clientlist_doubleClicked(const QModelIndex &index);

    void on_addclientbutton_clicked();

private:
    Ui::manageclient *ui;
    QList<Client*> clients;
    QSqlDatabase db;
};

#endif // MANAGECLIENT_H
