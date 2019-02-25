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
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::staffPortal *ui;
};

#endif // STAFFPORTAL_H
