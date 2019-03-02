#ifndef ADDNEWCLIENT_H
#define ADDNEWCLIENT_H

#include <QDialog>
#include <QString>
#include <QList>
#include <QtSql>
#include "manageclient.h"

namespace Ui {
class addnewclient;
}

class addnewclient : public QDialog
{
    Q_OBJECT

public:
    explicit addnewclient(QWidget *parent = 0);
    ~addnewclient();
    manageclient *uiMain;

private slots:
    void on_cancel_button_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::addnewclient *ui;
    QSqlDatabase ClientDB;
};

#endif // ADDNEWCLIENT_H
