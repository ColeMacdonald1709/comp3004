/********************************************************************************
** Form generated from reading UI file 'manageclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECLIENT_H
#define UI_MANAGECLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageclient
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *clientlist;
    QGroupBox *clientdetails;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *namelayout;
    QLabel *name;
    QLabel *clientname;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *phonelayout;
    QLabel *phone;
    QLabel *clientphone;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *emaillayout;
    QLabel *email;
    QLabel *clientemail;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *preferenceslayout;
    QLabel *prefs;
    QLabel *clientprefs;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *NPAlayout;
    QVBoxLayout *NPAleftlayout;
    QHBoxLayout *NPA1;
    QLabel *NPA1label;
    QLabel *NPA1text;
    QHBoxLayout *NPA2;
    QLabel *NPA2label;
    QLabel *NPA2text;
    QHBoxLayout *NPA3;
    QLabel *NPA3label;
    QLabel *NPA3text;
    QHBoxLayout *NPA4;
    QLabel *NPA4label;
    QLabel *NPA4text;
    QHBoxLayout *NPA5;
    QLabel *NPA5label;
    QLabel *NPA5text;
    QHBoxLayout *NPA6;
    QLabel *NPA6label;
    QLabel *NPA6text;
    QVBoxLayout *NPArightlayout;
    QHBoxLayout *NPA7;
    QLabel *NPA7label;
    QLabel *NPA7text;
    QHBoxLayout *NPA8;
    QLabel *NPA8label;
    QLabel *NPA8text;
    QHBoxLayout *NPA9;
    QLabel *NPA9label;
    QLabel *NPA9text;
    QHBoxLayout *NPA10;
    QLabel *NPA10label;
    QLabel *NPA10text;
    QHBoxLayout *NPA11;
    QLabel *NPA11label;
    QLabel *NPA11text;
    QHBoxLayout *NPA12;
    QLabel *NPA12label;
    QLabel *NPA12text;
    QPushButton *addclientbutton;
    QPushButton *btnLogout;

    void setupUi(QDialog *manageclient)
    {
        if (manageclient->objectName().isEmpty())
            manageclient->setObjectName(QStringLiteral("manageclient"));
        manageclient->resize(800, 500);
        manageclient->setMinimumSize(QSize(800, 500));
        manageclient->setMaximumSize(QSize(800, 500));
        horizontalLayoutWidget = new QWidget(manageclient);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 781, 381));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clientlist = new QTableWidget(horizontalLayoutWidget);
        if (clientlist->columnCount() < 3)
            clientlist->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        clientlist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        clientlist->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        clientlist->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        clientlist->setObjectName(QStringLiteral("clientlist"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clientlist->sizePolicy().hasHeightForWidth());
        clientlist->setSizePolicy(sizePolicy);
        clientlist->setBaseSize(QSize(0, 0));
        clientlist->setEditTriggers(QAbstractItemView::NoEditTriggers);
        clientlist->setTabKeyNavigation(true);
        clientlist->setProperty("showDropIndicator", QVariant(true));
        clientlist->setDragDropOverwriteMode(false);
        clientlist->horizontalHeader()->setCascadingSectionResizes(true);
        clientlist->horizontalHeader()->setDefaultSectionSize(120);
        clientlist->horizontalHeader()->setMinimumSectionSize(28);

        horizontalLayout->addWidget(clientlist);

        clientdetails = new QGroupBox(horizontalLayoutWidget);
        clientdetails->setObjectName(QStringLiteral("clientdetails"));
        horizontalLayoutWidget_2 = new QWidget(clientdetails);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 30, 371, 31));
        namelayout = new QHBoxLayout(horizontalLayoutWidget_2);
        namelayout->setObjectName(QStringLiteral("namelayout"));
        namelayout->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(horizontalLayoutWidget_2);
        name->setObjectName(QStringLiteral("name"));

        namelayout->addWidget(name);

        clientname = new QLabel(horizontalLayoutWidget_2);
        clientname->setObjectName(QStringLiteral("clientname"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clientname->sizePolicy().hasHeightForWidth());
        clientname->setSizePolicy(sizePolicy1);

        namelayout->addWidget(clientname);

        horizontalLayoutWidget_3 = new QWidget(clientdetails);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 60, 371, 31));
        phonelayout = new QHBoxLayout(horizontalLayoutWidget_3);
        phonelayout->setObjectName(QStringLiteral("phonelayout"));
        phonelayout->setContentsMargins(0, 0, 0, 0);
        phone = new QLabel(horizontalLayoutWidget_3);
        phone->setObjectName(QStringLiteral("phone"));

        phonelayout->addWidget(phone);

        clientphone = new QLabel(horizontalLayoutWidget_3);
        clientphone->setObjectName(QStringLiteral("clientphone"));
        sizePolicy1.setHeightForWidth(clientphone->sizePolicy().hasHeightForWidth());
        clientphone->setSizePolicy(sizePolicy1);

        phonelayout->addWidget(clientphone);

        horizontalLayoutWidget_4 = new QWidget(clientdetails);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 90, 371, 31));
        emaillayout = new QHBoxLayout(horizontalLayoutWidget_4);
        emaillayout->setObjectName(QStringLiteral("emaillayout"));
        emaillayout->setContentsMargins(0, 0, 0, 0);
        email = new QLabel(horizontalLayoutWidget_4);
        email->setObjectName(QStringLiteral("email"));

        emaillayout->addWidget(email);

        clientemail = new QLabel(horizontalLayoutWidget_4);
        clientemail->setObjectName(QStringLiteral("clientemail"));
        sizePolicy1.setHeightForWidth(clientemail->sizePolicy().hasHeightForWidth());
        clientemail->setSizePolicy(sizePolicy1);

        emaillayout->addWidget(clientemail);

        horizontalLayoutWidget_5 = new QWidget(clientdetails);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 120, 371, 31));
        preferenceslayout = new QHBoxLayout(horizontalLayoutWidget_5);
        preferenceslayout->setObjectName(QStringLiteral("preferenceslayout"));
        preferenceslayout->setContentsMargins(0, 0, 0, 0);
        prefs = new QLabel(horizontalLayoutWidget_5);
        prefs->setObjectName(QStringLiteral("prefs"));

        preferenceslayout->addWidget(prefs);

        clientprefs = new QLabel(horizontalLayoutWidget_5);
        clientprefs->setObjectName(QStringLiteral("clientprefs"));
        sizePolicy1.setHeightForWidth(clientprefs->sizePolicy().hasHeightForWidth());
        clientprefs->setSizePolicy(sizePolicy1);

        preferenceslayout->addWidget(clientprefs);

        horizontalLayoutWidget_6 = new QWidget(clientdetails);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 150, 371, 221));
        NPAlayout = new QHBoxLayout(horizontalLayoutWidget_6);
        NPAlayout->setObjectName(QStringLiteral("NPAlayout"));
        NPAlayout->setContentsMargins(0, 0, 0, 0);
        NPAleftlayout = new QVBoxLayout();
        NPAleftlayout->setObjectName(QStringLiteral("NPAleftlayout"));
        NPAleftlayout->setContentsMargins(5, -1, -1, -1);
        NPA1 = new QHBoxLayout();
        NPA1->setObjectName(QStringLiteral("NPA1"));
        NPA1label = new QLabel(horizontalLayoutWidget_6);
        NPA1label->setObjectName(QStringLiteral("NPA1label"));

        NPA1->addWidget(NPA1label);

        NPA1text = new QLabel(horizontalLayoutWidget_6);
        NPA1text->setObjectName(QStringLiteral("NPA1text"));

        NPA1->addWidget(NPA1text);


        NPAleftlayout->addLayout(NPA1);

        NPA2 = new QHBoxLayout();
        NPA2->setObjectName(QStringLiteral("NPA2"));
        NPA2label = new QLabel(horizontalLayoutWidget_6);
        NPA2label->setObjectName(QStringLiteral("NPA2label"));

        NPA2->addWidget(NPA2label);

        NPA2text = new QLabel(horizontalLayoutWidget_6);
        NPA2text->setObjectName(QStringLiteral("NPA2text"));

        NPA2->addWidget(NPA2text);


        NPAleftlayout->addLayout(NPA2);

        NPA3 = new QHBoxLayout();
        NPA3->setObjectName(QStringLiteral("NPA3"));
        NPA3label = new QLabel(horizontalLayoutWidget_6);
        NPA3label->setObjectName(QStringLiteral("NPA3label"));

        NPA3->addWidget(NPA3label);

        NPA3text = new QLabel(horizontalLayoutWidget_6);
        NPA3text->setObjectName(QStringLiteral("NPA3text"));

        NPA3->addWidget(NPA3text);


        NPAleftlayout->addLayout(NPA3);

        NPA4 = new QHBoxLayout();
        NPA4->setObjectName(QStringLiteral("NPA4"));
        NPA4label = new QLabel(horizontalLayoutWidget_6);
        NPA4label->setObjectName(QStringLiteral("NPA4label"));

        NPA4->addWidget(NPA4label);

        NPA4text = new QLabel(horizontalLayoutWidget_6);
        NPA4text->setObjectName(QStringLiteral("NPA4text"));

        NPA4->addWidget(NPA4text);


        NPAleftlayout->addLayout(NPA4);

        NPA5 = new QHBoxLayout();
        NPA5->setObjectName(QStringLiteral("NPA5"));
        NPA5label = new QLabel(horizontalLayoutWidget_6);
        NPA5label->setObjectName(QStringLiteral("NPA5label"));

        NPA5->addWidget(NPA5label);

        NPA5text = new QLabel(horizontalLayoutWidget_6);
        NPA5text->setObjectName(QStringLiteral("NPA5text"));

        NPA5->addWidget(NPA5text);


        NPAleftlayout->addLayout(NPA5);

        NPA6 = new QHBoxLayout();
        NPA6->setObjectName(QStringLiteral("NPA6"));
        NPA6label = new QLabel(horizontalLayoutWidget_6);
        NPA6label->setObjectName(QStringLiteral("NPA6label"));

        NPA6->addWidget(NPA6label);

        NPA6text = new QLabel(horizontalLayoutWidget_6);
        NPA6text->setObjectName(QStringLiteral("NPA6text"));

        NPA6->addWidget(NPA6text);


        NPAleftlayout->addLayout(NPA6);


        NPAlayout->addLayout(NPAleftlayout);

        NPArightlayout = new QVBoxLayout();
        NPArightlayout->setObjectName(QStringLiteral("NPArightlayout"));
        NPArightlayout->setContentsMargins(5, -1, -1, -1);
        NPA7 = new QHBoxLayout();
        NPA7->setObjectName(QStringLiteral("NPA7"));
        NPA7label = new QLabel(horizontalLayoutWidget_6);
        NPA7label->setObjectName(QStringLiteral("NPA7label"));

        NPA7->addWidget(NPA7label);

        NPA7text = new QLabel(horizontalLayoutWidget_6);
        NPA7text->setObjectName(QStringLiteral("NPA7text"));

        NPA7->addWidget(NPA7text);


        NPArightlayout->addLayout(NPA7);

        NPA8 = new QHBoxLayout();
        NPA8->setObjectName(QStringLiteral("NPA8"));
        NPA8label = new QLabel(horizontalLayoutWidget_6);
        NPA8label->setObjectName(QStringLiteral("NPA8label"));

        NPA8->addWidget(NPA8label);

        NPA8text = new QLabel(horizontalLayoutWidget_6);
        NPA8text->setObjectName(QStringLiteral("NPA8text"));

        NPA8->addWidget(NPA8text);


        NPArightlayout->addLayout(NPA8);

        NPA9 = new QHBoxLayout();
        NPA9->setObjectName(QStringLiteral("NPA9"));
        NPA9label = new QLabel(horizontalLayoutWidget_6);
        NPA9label->setObjectName(QStringLiteral("NPA9label"));

        NPA9->addWidget(NPA9label);

        NPA9text = new QLabel(horizontalLayoutWidget_6);
        NPA9text->setObjectName(QStringLiteral("NPA9text"));

        NPA9->addWidget(NPA9text);


        NPArightlayout->addLayout(NPA9);

        NPA10 = new QHBoxLayout();
        NPA10->setObjectName(QStringLiteral("NPA10"));
        NPA10label = new QLabel(horizontalLayoutWidget_6);
        NPA10label->setObjectName(QStringLiteral("NPA10label"));

        NPA10->addWidget(NPA10label);

        NPA10text = new QLabel(horizontalLayoutWidget_6);
        NPA10text->setObjectName(QStringLiteral("NPA10text"));

        NPA10->addWidget(NPA10text);


        NPArightlayout->addLayout(NPA10);

        NPA11 = new QHBoxLayout();
        NPA11->setObjectName(QStringLiteral("NPA11"));
        NPA11label = new QLabel(horizontalLayoutWidget_6);
        NPA11label->setObjectName(QStringLiteral("NPA11label"));

        NPA11->addWidget(NPA11label);

        NPA11text = new QLabel(horizontalLayoutWidget_6);
        NPA11text->setObjectName(QStringLiteral("NPA11text"));

        NPA11->addWidget(NPA11text);


        NPArightlayout->addLayout(NPA11);

        NPA12 = new QHBoxLayout();
        NPA12->setObjectName(QStringLiteral("NPA12"));
        NPA12label = new QLabel(horizontalLayoutWidget_6);
        NPA12label->setObjectName(QStringLiteral("NPA12label"));

        NPA12->addWidget(NPA12label);

        NPA12text = new QLabel(horizontalLayoutWidget_6);
        NPA12text->setObjectName(QStringLiteral("NPA12text"));

        NPA12->addWidget(NPA12text);


        NPArightlayout->addLayout(NPA12);


        NPAlayout->addLayout(NPArightlayout);


        horizontalLayout->addWidget(clientdetails);

        addclientbutton = new QPushButton(manageclient);
        addclientbutton->setObjectName(QStringLiteral("addclientbutton"));
        addclientbutton->setGeometry(QRect(250, 20, 150, 50));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addclientbutton->sizePolicy().hasHeightForWidth());
        addclientbutton->setSizePolicy(sizePolicy2);
        addclientbutton->setMinimumSize(QSize(150, 50));
        addclientbutton->setMaximumSize(QSize(150, 50));
        btnLogout = new QPushButton(manageclient);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));
        btnLogout->setGeometry(QRect(140, 30, 83, 31));

        retranslateUi(manageclient);

        QMetaObject::connectSlotsByName(manageclient);
    } // setupUi

    void retranslateUi(QDialog *manageclient)
    {
        manageclient->setWindowTitle(QApplication::translate("manageclient", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = clientlist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manageclient", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = clientlist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("manageclient", "Phone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = clientlist->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("manageclient", "Email", Q_NULLPTR));
        clientdetails->setTitle(QApplication::translate("manageclient", "Client details", Q_NULLPTR));
        name->setText(QApplication::translate("manageclient", "Name", Q_NULLPTR));
        clientname->setText(QString());
        phone->setText(QApplication::translate("manageclient", "Phone", Q_NULLPTR));
        clientphone->setText(QString());
        email->setText(QApplication::translate("manageclient", "Email", Q_NULLPTR));
        clientemail->setText(QString());
        prefs->setText(QApplication::translate("manageclient", "Preferences", Q_NULLPTR));
        clientprefs->setText(QString());
        NPA1label->setText(QApplication::translate("manageclient", "charisma", Q_NULLPTR));
        NPA1text->setText(QString());
        NPA2label->setText(QApplication::translate("manageclient", "curiosity", Q_NULLPTR));
        NPA2text->setText(QString());
        NPA3label->setText(QApplication::translate("manageclient", "energetic", Q_NULLPTR));
        NPA3text->setText(QString());
        NPA4label->setText(QApplication::translate("manageclient", "hygiene", Q_NULLPTR));
        NPA4text->setText(QString());
        NPA5label->setText(QApplication::translate("manageclient", "independance", Q_NULLPTR));
        NPA5text->setText(QString());
        NPA6label->setText(QApplication::translate("manageclient", "intelligence", Q_NULLPTR));
        NPA6text->setText(QString());
        NPA7label->setText(QApplication::translate("manageclient", "obidience", Q_NULLPTR));
        NPA7text->setText(QString());
        NPA8label->setText(QApplication::translate("manageclient", "palate", Q_NULLPTR));
        NPA8text->setText(QString());
        NPA9label->setText(QApplication::translate("manageclient", "patience", Q_NULLPTR));
        NPA9text->setText(QString());
        NPA10label->setText(QApplication::translate("manageclient", "playful", Q_NULLPTR));
        NPA10text->setText(QString());
        NPA11label->setText(QApplication::translate("manageclient", "social", Q_NULLPTR));
        NPA11text->setText(QString());
        NPA12label->setText(QApplication::translate("manageclient", "vocal", Q_NULLPTR));
        NPA12text->setText(QString());
        addclientbutton->setText(QApplication::translate("manageclient", "Add Client", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("manageclient", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manageclient: public Ui_manageclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECLIENT_H
