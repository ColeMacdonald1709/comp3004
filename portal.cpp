#include "portal.h"
#include "ui_portal.h"

Portal::Portal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Portal)
{
    ui->setupUi(this);
}

Portal::~Portal()
{
    delete ui;
}
