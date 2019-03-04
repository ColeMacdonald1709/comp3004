/********************************************************************************
** Form generated from reading UI file 'staffportal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFPORTAL_H
#define UI_STAFFPORTAL_H

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

class Ui_staffPortal
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAnimals;
    QPushButton *btnClients;
    QPushButton *staff_logout;

    void setupUi(QDialog *staffPortal)
    {
        if (staffPortal->objectName().isEmpty())
            staffPortal->setObjectName(QStringLiteral("staffPortal"));
        staffPortal->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(staffPortal->sizePolicy().hasHeightForWidth());
        staffPortal->setSizePolicy(sizePolicy);
        staffPortal->setMinimumSize(QSize(500, 500));
        staffPortal->setMaximumSize(QSize(500, 500));
        horizontalLayoutWidget = new QWidget(staffPortal);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 200, 501, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAnimals = new QPushButton(horizontalLayoutWidget);
        btnAnimals->setObjectName(QStringLiteral("btnAnimals"));

        horizontalLayout->addWidget(btnAnimals);

        btnClients = new QPushButton(horizontalLayoutWidget);
        btnClients->setObjectName(QStringLiteral("btnClients"));

        horizontalLayout->addWidget(btnClients);

        staff_logout = new QPushButton(staffPortal);
        staff_logout->setObjectName(QStringLiteral("staff_logout"));
        staff_logout->setGeometry(QRect(170, 390, 161, 51));

        retranslateUi(staffPortal);

        QMetaObject::connectSlotsByName(staffPortal);
    } // setupUi

    void retranslateUi(QDialog *staffPortal)
    {
        staffPortal->setWindowTitle(QApplication::translate("staffPortal", "Dialog", Q_NULLPTR));
        btnAnimals->setText(QApplication::translate("staffPortal", "Manage Animals", Q_NULLPTR));
        btnClients->setText(QApplication::translate("staffPortal", "Mange Clients", Q_NULLPTR));
        staff_logout->setText(QApplication::translate("staffPortal", "Logout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staffPortal: public Ui_staffPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFPORTAL_H
