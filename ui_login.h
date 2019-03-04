/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QPushButton *btnClient;
    QPushButton *btnStaff;
    QPlainTextEdit *txtName;
    QLabel *lblName;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(500, 500);
        Login->setMinimumSize(QSize(500, 500));
        Login->setMaximumSize(QSize(500, 500));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btnClient = new QPushButton(centralwidget);
        btnClient->setObjectName(QStringLiteral("btnClient"));
        btnClient->setGeometry(QRect(210, 170, 81, 51));
        btnStaff = new QPushButton(centralwidget);
        btnStaff->setObjectName(QStringLiteral("btnStaff"));
        btnStaff->setGeometry(QRect(210, 240, 81, 51));
        txtName = new QPlainTextEdit(centralwidget);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setEnabled(true);
        txtName->setGeometry(QRect(180, 120, 141, 31));
        lblName = new QLabel(centralwidget);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(210, 90, 91, 17));
        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        btnClient->setText(QApplication::translate("Login", "Client", Q_NULLPTR));
        btnStaff->setText(QApplication::translate("Login", "Staff", Q_NULLPTR));
        lblName->setText(QApplication::translate("Login", "Enter Name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
