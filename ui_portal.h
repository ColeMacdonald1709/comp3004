/********************************************************************************
** Form generated from reading UI file 'portal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTAL_H
#define UI_PORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Portal
{
public:

    void setupUi(QDialog *Portal)
    {
        if (Portal->objectName().isEmpty())
            Portal->setObjectName(QStringLiteral("Portal"));
        Portal->resize(400, 300);

        retranslateUi(Portal);

        QMetaObject::connectSlotsByName(Portal);
    } // setupUi

    void retranslateUi(QDialog *Portal)
    {
        Portal->setWindowTitle(QApplication::translate("Portal", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Portal: public Ui_Portal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTAL_H
