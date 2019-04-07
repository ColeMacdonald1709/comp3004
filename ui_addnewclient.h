/********************************************************************************
** Form generated from reading UI file 'addnewclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWCLIENT_H
#define UI_ADDNEWCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewClient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *name_layout;
    QLabel *name_label;
    QLineEdit *name_txt;
    QHBoxLayout *phone_layout;
    QLabel *phone_label;
    QLineEdit *phone_txt;
    QHBoxLayout *email_layout;
    QLabel *emai_label;
    QLineEdit *email_txt;
    QHBoxLayout *nav_lalyout;
    QPushButton *add_client;
    QPushButton *cancel_button;
    QLabel *label;

    void setupUi(QDialog *AddNewClient)
    {
        if (AddNewClient->objectName().isEmpty())
            AddNewClient->setObjectName(QStringLiteral("AddNewClient"));
        AddNewClient->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddNewClient->sizePolicy().hasHeightForWidth());
        AddNewClient->setSizePolicy(sizePolicy);
        AddNewClient->setMinimumSize(QSize(500, 500));
        AddNewClient->setMaximumSize(QSize(500, 500));
        verticalLayoutWidget = new QWidget(AddNewClient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(29, 90, 431, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        name_layout = new QHBoxLayout();
        name_layout->setObjectName(QStringLiteral("name_layout"));
        name_layout->setContentsMargins(10, -1, 10, -1);
        name_label = new QLabel(verticalLayoutWidget);
        name_label->setObjectName(QStringLiteral("name_label"));

        name_layout->addWidget(name_label);

        name_txt = new QLineEdit(verticalLayoutWidget);
        name_txt->setObjectName(QStringLiteral("name_txt"));

        name_layout->addWidget(name_txt);


        verticalLayout->addLayout(name_layout);

        phone_layout = new QHBoxLayout();
        phone_layout->setObjectName(QStringLiteral("phone_layout"));
        phone_layout->setContentsMargins(10, -1, 10, -1);
        phone_label = new QLabel(verticalLayoutWidget);
        phone_label->setObjectName(QStringLiteral("phone_label"));

        phone_layout->addWidget(phone_label);

        phone_txt = new QLineEdit(verticalLayoutWidget);
        phone_txt->setObjectName(QStringLiteral("phone_txt"));

        phone_layout->addWidget(phone_txt);


        verticalLayout->addLayout(phone_layout);

        email_layout = new QHBoxLayout();
        email_layout->setObjectName(QStringLiteral("email_layout"));
        email_layout->setContentsMargins(10, -1, 10, -1);
        emai_label = new QLabel(verticalLayoutWidget);
        emai_label->setObjectName(QStringLiteral("emai_label"));

        email_layout->addWidget(emai_label);

        email_txt = new QLineEdit(verticalLayoutWidget);
        email_txt->setObjectName(QStringLiteral("email_txt"));

        email_layout->addWidget(email_txt);


        verticalLayout->addLayout(email_layout);

        nav_lalyout = new QHBoxLayout();
        nav_lalyout->setObjectName(QStringLiteral("nav_lalyout"));
        add_client = new QPushButton(verticalLayoutWidget);
        add_client->setObjectName(QStringLiteral("add_client"));
        sizePolicy.setHeightForWidth(add_client->sizePolicy().hasHeightForWidth());
        add_client->setSizePolicy(sizePolicy);
        add_client->setMinimumSize(QSize(100, 25));
        add_client->setMaximumSize(QSize(100, 25));

        nav_lalyout->addWidget(add_client);

        cancel_button = new QPushButton(verticalLayoutWidget);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        sizePolicy.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
        cancel_button->setSizePolicy(sizePolicy);
        cancel_button->setMinimumSize(QSize(100, 25));
        cancel_button->setMaximumSize(QSize(100, 25));

        nav_lalyout->addWidget(cancel_button);


        verticalLayout->addLayout(nav_lalyout);

        label = new QLabel(AddNewClient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 201, 91));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(AddNewClient);

        QMetaObject::connectSlotsByName(AddNewClient);
    } // setupUi

    void retranslateUi(QDialog *AddNewClient)
    {
        AddNewClient->setWindowTitle(QApplication::translate("AddNewClient", "Dialog", Q_NULLPTR));
        name_label->setText(QApplication::translate("AddNewClient", "Name", Q_NULLPTR));
        phone_label->setText(QApplication::translate("AddNewClient", "Phone number", Q_NULLPTR));
        emai_label->setText(QApplication::translate("AddNewClient", "E-Mail", Q_NULLPTR));
        add_client->setText(QApplication::translate("AddNewClient", "Add Client", Q_NULLPTR));
        cancel_button->setText(QApplication::translate("AddNewClient", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("AddNewClient", "Add new Client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNewClient: public Ui_AddNewClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCLIENT_H
