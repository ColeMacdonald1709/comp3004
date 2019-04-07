/********************************************************************************
** Form generated from reading UI file 'clientportal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTPORTAL_H
#define UI_CLIENTPORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientPortal
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Viewanimals;
    QPushButton *Editprofile;
    QPushButton *client_logout;

    void setupUi(QDialog *ClientPortal)
    {
        if (ClientPortal->objectName().isEmpty())
            ClientPortal->setObjectName(QStringLiteral("ClientPortal"));
        ClientPortal->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientPortal->sizePolicy().hasHeightForWidth());
        ClientPortal->setSizePolicy(sizePolicy);
        ClientPortal->setMinimumSize(QSize(500, 500));
        ClientPortal->setMaximumSize(QSize(500, 500));
        horizontalLayoutWidget = new QWidget(ClientPortal);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 200, 501, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Viewanimals = new QPushButton(horizontalLayoutWidget);
        Viewanimals->setObjectName(QStringLiteral("Viewanimals"));

        horizontalLayout->addWidget(Viewanimals);

        Editprofile = new QPushButton(horizontalLayoutWidget);
        Editprofile->setObjectName(QStringLiteral("Editprofile"));

        horizontalLayout->addWidget(Editprofile);

        client_logout = new QPushButton(ClientPortal);
        client_logout->setObjectName(QStringLiteral("client_logout"));
        client_logout->setGeometry(QRect(170, 390, 161, 51));

        retranslateUi(ClientPortal);

        QMetaObject::connectSlotsByName(ClientPortal);
    } // setupUi

    void retranslateUi(QDialog *ClientPortal)
    {
        ClientPortal->setWindowTitle(QApplication::translate("ClientPortal", "Dialog", Q_NULLPTR));
        Viewanimals->setText(QApplication::translate("ClientPortal", "View Animals", Q_NULLPTR));
        Editprofile->setText(QApplication::translate("ClientPortal", "Edit Profile", Q_NULLPTR));
        client_logout->setText(QApplication::translate("ClientPortal", "Logout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientPortal: public Ui_ClientPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTPORTAL_H
