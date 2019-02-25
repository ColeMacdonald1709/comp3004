/********************************************************************************
** Form generated from reading UI file 'manageclients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECLIENTS_H
#define UI_MANAGECLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_manageClients
{
public:

    void setupUi(QDialog *manageClients)
    {
        if (manageClients->objectName().isEmpty())
            manageClients->setObjectName(QStringLiteral("manageClients"));
        manageClients->resize(400, 300);

        retranslateUi(manageClients);

        QMetaObject::connectSlotsByName(manageClients);
    } // setupUi

    void retranslateUi(QDialog *manageClients)
    {
        manageClients->setWindowTitle(QApplication::translate("manageClients", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manageClients: public Ui_manageClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECLIENTS_H
