/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef LOGIN_H
#define LOGIN_H

#include <QMessageBox>
#include <QtSql>
#include <QSqlError>
#include <QtDebug>
#include <QFileInfo>
#include <QString>
#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_btnClient_clicked();
    void on_btnStaff_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase db;

};

#endif // LOGIN_H
