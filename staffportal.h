/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef STAFFPORTAL_H
#define STAFFPORTAL_H

#include <QDialog>
#include "manageanimal.h"
#include "manageclient.h"
#include "ui_manageanimal.h"
#include "login.h"

namespace Ui {
class staffPortal;
}

class staffPortal : public QDialog
{
    Q_OBJECT

public:
    explicit staffPortal(QWidget *parent = 0);
    ~staffPortal();
    Login *uiMain;

private slots:
    void on_btnAnimals_clicked();

    void on_btnClients_clicked();

    void on_staff_logout_clicked();

private:
    Ui::staffPortal *ui;
};

#endif // STAFFPORTAL_H
