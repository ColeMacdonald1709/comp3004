#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*conect to database*/
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("cuACS_db.db");
    /*show error if not open*/
    if (!db.open()){
        db.lastError();
    }

    db.close();
}

MainWindow::~MainWindow()
{
    delete ui;

}
