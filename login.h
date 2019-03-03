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
