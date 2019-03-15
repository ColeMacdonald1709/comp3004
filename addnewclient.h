/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef ADDNEWCLIENT_H
#define ADDNEWCLIENT_H

#include <QDialog>
#include <QString>
#include <QList>
#include <QtSql>
#include "manageclient.h"

namespace Ui {
class AddNewClient;
}

class AddNewClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewClient(QWidget *parent = 0);
    ~AddNewClient();
    ManageClient *uiMain;

private slots:
    void on_cancel_button_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::AddNewClient *ui;
    QSqlDatabase ClientDB;
};

#endif // ADDNEWCLIENT_H
