/********************************************************************************
** Form generated from reading UI file 'editclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLIENT_H
#define UI_EDITCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditClient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *persInfoLayout;
    QHBoxLayout *name_layout;
    QLabel *name_label;
    QLabel *txtName;
    QHBoxLayout *phone_layout;
    QLabel *phone_label;
    QLineEdit *txtPhone;
    QHBoxLayout *email_layout;
    QLabel *emai_label;
    QLineEdit *txtEmail;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *nav_lalyout;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QWidget *gridLayoutWidget;
    QGridLayout *NPAttributeLayout;
    QHBoxLayout *NPA11;
    QLabel *NPAttr11;
    QSpinBox *NPAttr11spinBox;
    QHBoxLayout *NPA3;
    QLabel *NPAttr3;
    QSpinBox *NPAttr3spinBox;
    QHBoxLayout *NPA1;
    QLabel *NPAttr1;
    QSpinBox *NPAttr1spinBox;
    QHBoxLayout *NPA7;
    QLabel *NPAttr7;
    QSpinBox *NPAttr7spinBox;
    QHBoxLayout *NPA10;
    QLabel *NPAttr10;
    QSpinBox *NPAttr10spinBox;
    QHBoxLayout *NPA5;
    QLabel *NPAttr5;
    QSpinBox *NPAttr5spinBox;
    QHBoxLayout *NPA2;
    QLabel *NPAttr2;
    QSpinBox *NPAttr2spinBox;
    QHBoxLayout *NPA4;
    QLabel *NPAttr4;
    QSpinBox *NPAttr4spinBox;
    QHBoxLayout *NPA6;
    QLabel *NPAttr6;
    QSpinBox *NPAttr6spinBox;
    QHBoxLayout *NPA9;
    QLabel *NPAttr9;
    QSpinBox *NPAttr9spinBox;
    QHBoxLayout *NPA8;
    QLabel *NPAttr8;
    QSpinBox *NPAttr8spinBox;
    QHBoxLayout *NPA12;
    QLabel *NPAttr12;
    QSpinBox *NPAttr12spinBox;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *ageLayout;
    QLabel *name_label_6;
    QComboBox *ageComboBox;
    QWidget *layoutWidget2;
    QHBoxLayout *sexLayout;
    QLabel *name_label_5;
    QRadioButton *radMale;
    QRadioButton *radFemale;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *speciesLayout;
    QLabel *name_label_3;
    QRadioButton *radDog;
    QRadioButton *radCat;
    QRadioButton *radBird;
    QRadioButton *radFish;
    QRadioButton *radRabbit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *breedLayout;
    QLabel *name_label_4;
    QLineEdit *txtBreed;

    void setupUi(QDialog *EditClient)
    {
        if (EditClient->objectName().isEmpty())
            EditClient->setObjectName(QStringLiteral("EditClient"));
        EditClient->resize(500, 671);
        verticalLayoutWidget = new QWidget(EditClient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(29, 100, 441, 101));
        persInfoLayout = new QVBoxLayout(verticalLayoutWidget);
        persInfoLayout->setObjectName(QStringLiteral("persInfoLayout"));
        persInfoLayout->setContentsMargins(0, 0, 0, 0);
        name_layout = new QHBoxLayout();
        name_layout->setObjectName(QStringLiteral("name_layout"));
        name_layout->setContentsMargins(10, -1, 10, -1);
        name_label = new QLabel(verticalLayoutWidget);
        name_label->setObjectName(QStringLiteral("name_label"));

        name_layout->addWidget(name_label);

        txtName = new QLabel(verticalLayoutWidget);
        txtName->setObjectName(QStringLiteral("txtName"));

        name_layout->addWidget(txtName);


        persInfoLayout->addLayout(name_layout);

        phone_layout = new QHBoxLayout();
        phone_layout->setObjectName(QStringLiteral("phone_layout"));
        phone_layout->setContentsMargins(10, -1, 10, -1);
        phone_label = new QLabel(verticalLayoutWidget);
        phone_label->setObjectName(QStringLiteral("phone_label"));

        phone_layout->addWidget(phone_label);

        txtPhone = new QLineEdit(verticalLayoutWidget);
        txtPhone->setObjectName(QStringLiteral("txtPhone"));

        phone_layout->addWidget(txtPhone);


        persInfoLayout->addLayout(phone_layout);

        email_layout = new QHBoxLayout();
        email_layout->setObjectName(QStringLiteral("email_layout"));
        email_layout->setContentsMargins(10, -1, 10, -1);
        emai_label = new QLabel(verticalLayoutWidget);
        emai_label->setObjectName(QStringLiteral("emai_label"));

        email_layout->addWidget(emai_label);

        txtEmail = new QLineEdit(verticalLayoutWidget);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));

        email_layout->addWidget(txtEmail);


        persInfoLayout->addLayout(email_layout);

        label = new QLabel(EditClient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 221, 51));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget = new QWidget(EditClient);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 620, 441, 31));
        nav_lalyout = new QHBoxLayout(layoutWidget);
        nav_lalyout->setObjectName(QStringLiteral("nav_lalyout"));
        nav_lalyout->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy);
        btnSave->setMinimumSize(QSize(100, 25));
        btnSave->setMaximumSize(QSize(100, 25));

        nav_lalyout->addWidget(btnSave);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setMinimumSize(QSize(100, 25));
        btnCancel->setMaximumSize(QSize(100, 25));

        nav_lalyout->addWidget(btnCancel);

        gridLayoutWidget = new QWidget(EditClient);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 410, 441, 198));
        NPAttributeLayout = new QGridLayout(gridLayoutWidget);
        NPAttributeLayout->setSpacing(0);
        NPAttributeLayout->setObjectName(QStringLiteral("NPAttributeLayout"));
        NPAttributeLayout->setSizeConstraint(QLayout::SetFixedSize);
        NPAttributeLayout->setContentsMargins(0, 0, 0, 0);
        NPA11 = new QHBoxLayout();
        NPA11->setSpacing(50);
        NPA11->setObjectName(QStringLiteral("NPA11"));
        NPA11->setContentsMargins(26, -1, -1, -1);
        NPAttr11 = new QLabel(gridLayoutWidget);
        NPAttr11->setObjectName(QStringLiteral("NPAttr11"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NPAttr11->sizePolicy().hasHeightForWidth());
        NPAttr11->setSizePolicy(sizePolicy1);

        NPA11->addWidget(NPAttr11);

        NPAttr11spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr11spinBox->setObjectName(QStringLiteral("NPAttr11spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr11spinBox->sizePolicy().hasHeightForWidth());
        NPAttr11spinBox->setSizePolicy(sizePolicy1);
        NPAttr11spinBox->setMaximum(5);

        NPA11->addWidget(NPAttr11spinBox);


        NPAttributeLayout->addLayout(NPA11, 4, 1, 1, 1);

        NPA3 = new QHBoxLayout();
        NPA3->setSpacing(50);
        NPA3->setObjectName(QStringLiteral("NPA3"));
        NPA3->setContentsMargins(31, -1, -1, -1);
        NPAttr3 = new QLabel(gridLayoutWidget);
        NPAttr3->setObjectName(QStringLiteral("NPAttr3"));
        sizePolicy1.setHeightForWidth(NPAttr3->sizePolicy().hasHeightForWidth());
        NPAttr3->setSizePolicy(sizePolicy1);

        NPA3->addWidget(NPAttr3);

        NPAttr3spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr3spinBox->setObjectName(QStringLiteral("NPAttr3spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr3spinBox->sizePolicy().hasHeightForWidth());
        NPAttr3spinBox->setSizePolicy(sizePolicy1);
        NPAttr3spinBox->setMaximum(5);

        NPA3->addWidget(NPAttr3spinBox);


        NPAttributeLayout->addLayout(NPA3, 2, 0, 1, 1);

        NPA1 = new QHBoxLayout();
        NPA1->setSpacing(50);
        NPA1->setObjectName(QStringLiteral("NPA1"));
        NPA1->setSizeConstraint(QLayout::SetMinimumSize);
        NPA1->setContentsMargins(35, -1, -1, -1);
        NPAttr1 = new QLabel(gridLayoutWidget);
        NPAttr1->setObjectName(QStringLiteral("NPAttr1"));
        sizePolicy1.setHeightForWidth(NPAttr1->sizePolicy().hasHeightForWidth());
        NPAttr1->setSizePolicy(sizePolicy1);

        NPA1->addWidget(NPAttr1);

        NPAttr1spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr1spinBox->setObjectName(QStringLiteral("NPAttr1spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr1spinBox->sizePolicy().hasHeightForWidth());
        NPAttr1spinBox->setSizePolicy(sizePolicy1);
        NPAttr1spinBox->setMaximum(5);

        NPA1->addWidget(NPAttr1spinBox);


        NPAttributeLayout->addLayout(NPA1, 0, 0, 1, 1);

        NPA7 = new QHBoxLayout();
        NPA7->setSpacing(50);
        NPA7->setObjectName(QStringLiteral("NPA7"));
        NPAttr7 = new QLabel(gridLayoutWidget);
        NPAttr7->setObjectName(QStringLiteral("NPAttr7"));
        sizePolicy1.setHeightForWidth(NPAttr7->sizePolicy().hasHeightForWidth());
        NPAttr7->setSizePolicy(sizePolicy1);

        NPA7->addWidget(NPAttr7);

        NPAttr7spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr7spinBox->setObjectName(QStringLiteral("NPAttr7spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr7spinBox->sizePolicy().hasHeightForWidth());
        NPAttr7spinBox->setSizePolicy(sizePolicy1);
        NPAttr7spinBox->setMaximum(5);

        NPA7->addWidget(NPAttr7spinBox);


        NPAttributeLayout->addLayout(NPA7, 0, 1, 1, 1);

        NPA10 = new QHBoxLayout();
        NPA10->setSpacing(50);
        NPA10->setObjectName(QStringLiteral("NPA10"));
        NPA10->setContentsMargins(20, -1, -1, -1);
        NPAttr10 = new QLabel(gridLayoutWidget);
        NPAttr10->setObjectName(QStringLiteral("NPAttr10"));
        sizePolicy1.setHeightForWidth(NPAttr10->sizePolicy().hasHeightForWidth());
        NPAttr10->setSizePolicy(sizePolicy1);

        NPA10->addWidget(NPAttr10);

        NPAttr10spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr10spinBox->setObjectName(QStringLiteral("NPAttr10spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr10spinBox->sizePolicy().hasHeightForWidth());
        NPAttr10spinBox->setSizePolicy(sizePolicy1);
        NPAttr10spinBox->setMaximum(5);

        NPA10->addWidget(NPAttr10spinBox);


        NPAttributeLayout->addLayout(NPA10, 3, 1, 1, 1);

        NPA5 = new QHBoxLayout();
        NPA5->setSpacing(51);
        NPA5->setObjectName(QStringLiteral("NPA5"));
        NPAttr5 = new QLabel(gridLayoutWidget);
        NPAttr5->setObjectName(QStringLiteral("NPAttr5"));
        sizePolicy1.setHeightForWidth(NPAttr5->sizePolicy().hasHeightForWidth());
        NPAttr5->setSizePolicy(sizePolicy1);

        NPA5->addWidget(NPAttr5);

        NPAttr5spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr5spinBox->setObjectName(QStringLiteral("NPAttr5spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr5spinBox->sizePolicy().hasHeightForWidth());
        NPAttr5spinBox->setSizePolicy(sizePolicy1);
        NPAttr5spinBox->setMaximum(5);

        NPA5->addWidget(NPAttr5spinBox);


        NPAttributeLayout->addLayout(NPA5, 4, 0, 1, 1);

        NPA2 = new QHBoxLayout();
        NPA2->setSpacing(50);
        NPA2->setObjectName(QStringLiteral("NPA2"));
        NPA2->setContentsMargins(37, -1, -1, -1);
        NPAttr2 = new QLabel(gridLayoutWidget);
        NPAttr2->setObjectName(QStringLiteral("NPAttr2"));
        sizePolicy1.setHeightForWidth(NPAttr2->sizePolicy().hasHeightForWidth());
        NPAttr2->setSizePolicy(sizePolicy1);

        NPA2->addWidget(NPAttr2);

        NPAttr2spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr2spinBox->setObjectName(QStringLiteral("NPAttr2spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr2spinBox->sizePolicy().hasHeightForWidth());
        NPAttr2spinBox->setSizePolicy(sizePolicy1);
        NPAttr2spinBox->setMaximum(5);

        NPA2->addWidget(NPAttr2spinBox);


        NPAttributeLayout->addLayout(NPA2, 1, 0, 1, 1);

        NPA4 = new QHBoxLayout();
        NPA4->setSpacing(50);
        NPA4->setObjectName(QStringLiteral("NPA4"));
        NPA4->setContentsMargins(40, -1, -1, -1);
        NPAttr4 = new QLabel(gridLayoutWidget);
        NPAttr4->setObjectName(QStringLiteral("NPAttr4"));
        sizePolicy1.setHeightForWidth(NPAttr4->sizePolicy().hasHeightForWidth());
        NPAttr4->setSizePolicy(sizePolicy1);

        NPA4->addWidget(NPAttr4);

        NPAttr4spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr4spinBox->setObjectName(QStringLiteral("NPAttr4spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr4spinBox->sizePolicy().hasHeightForWidth());
        NPAttr4spinBox->setSizePolicy(sizePolicy1);
        NPAttr4spinBox->setMaximum(5);

        NPA4->addWidget(NPAttr4spinBox);


        NPAttributeLayout->addLayout(NPA4, 3, 0, 1, 1);

        NPA6 = new QHBoxLayout();
        NPA6->setSpacing(50);
        NPA6->setObjectName(QStringLiteral("NPA6"));
        NPA6->setContentsMargins(16, -1, -1, -1);
        NPAttr6 = new QLabel(gridLayoutWidget);
        NPAttr6->setObjectName(QStringLiteral("NPAttr6"));
        sizePolicy1.setHeightForWidth(NPAttr6->sizePolicy().hasHeightForWidth());
        NPAttr6->setSizePolicy(sizePolicy1);

        NPA6->addWidget(NPAttr6);

        NPAttr6spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr6spinBox->setObjectName(QStringLiteral("NPAttr6spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr6spinBox->sizePolicy().hasHeightForWidth());
        NPAttr6spinBox->setSizePolicy(sizePolicy1);
        NPAttr6spinBox->setMaximum(5);

        NPA6->addWidget(NPAttr6spinBox);


        NPAttributeLayout->addLayout(NPA6, 5, 0, 1, 1);

        NPA9 = new QHBoxLayout();
        NPA9->setSpacing(50);
        NPA9->setObjectName(QStringLiteral("NPA9"));
        NPA9->setContentsMargins(10, -1, -1, -1);
        NPAttr9 = new QLabel(gridLayoutWidget);
        NPAttr9->setObjectName(QStringLiteral("NPAttr9"));
        sizePolicy1.setHeightForWidth(NPAttr9->sizePolicy().hasHeightForWidth());
        NPAttr9->setSizePolicy(sizePolicy1);

        NPA9->addWidget(NPAttr9);

        NPAttr9spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr9spinBox->setObjectName(QStringLiteral("NPAttr9spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr9spinBox->sizePolicy().hasHeightForWidth());
        NPAttr9spinBox->setSizePolicy(sizePolicy1);
        NPAttr9spinBox->setMaximum(5);

        NPA9->addWidget(NPAttr9spinBox);


        NPAttributeLayout->addLayout(NPA9, 2, 1, 1, 1);

        NPA8 = new QHBoxLayout();
        NPA8->setSpacing(50);
        NPA8->setObjectName(QStringLiteral("NPA8"));
        NPA8->setContentsMargins(24, -1, 0, -1);
        NPAttr8 = new QLabel(gridLayoutWidget);
        NPAttr8->setObjectName(QStringLiteral("NPAttr8"));
        sizePolicy1.setHeightForWidth(NPAttr8->sizePolicy().hasHeightForWidth());
        NPAttr8->setSizePolicy(sizePolicy1);

        NPA8->addWidget(NPAttr8);

        NPAttr8spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr8spinBox->setObjectName(QStringLiteral("NPAttr8spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr8spinBox->sizePolicy().hasHeightForWidth());
        NPAttr8spinBox->setSizePolicy(sizePolicy1);
        NPAttr8spinBox->setMaximum(5);

        NPA8->addWidget(NPAttr8spinBox);


        NPAttributeLayout->addLayout(NPA8, 1, 1, 1, 1);

        NPA12 = new QHBoxLayout();
        NPA12->setSpacing(52);
        NPA12->setObjectName(QStringLiteral("NPA12"));
        NPA12->setContentsMargins(27, -1, -1, -1);
        NPAttr12 = new QLabel(gridLayoutWidget);
        NPAttr12->setObjectName(QStringLiteral("NPAttr12"));
        sizePolicy1.setHeightForWidth(NPAttr12->sizePolicy().hasHeightForWidth());
        NPAttr12->setSizePolicy(sizePolicy1);

        NPA12->addWidget(NPAttr12);

        NPAttr12spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr12spinBox->setObjectName(QStringLiteral("NPAttr12spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr12spinBox->sizePolicy().hasHeightForWidth());
        NPAttr12spinBox->setSizePolicy(sizePolicy1);
        NPAttr12spinBox->setMaximum(5);

        NPA12->addWidget(NPAttr12spinBox);


        NPAttributeLayout->addLayout(NPA12, 5, 1, 1, 1);

        label_2 = new QLabel(EditClient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 220, 161, 17));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(EditClient);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 171, 17));
        label_3->setFont(font1);
        layoutWidget1 = new QWidget(EditClient);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 360, 141, 31));
        ageLayout = new QHBoxLayout(layoutWidget1);
        ageLayout->setObjectName(QStringLiteral("ageLayout"));
        ageLayout->setContentsMargins(10, 0, 10, 0);
        name_label_6 = new QLabel(layoutWidget1);
        name_label_6->setObjectName(QStringLiteral("name_label_6"));

        ageLayout->addWidget(name_label_6);

        ageComboBox = new QComboBox(layoutWidget1);
        ageComboBox->setObjectName(QStringLiteral("ageComboBox"));
        ageComboBox->setEnabled(true);
        sizePolicy.setHeightForWidth(ageComboBox->sizePolicy().hasHeightForWidth());
        ageComboBox->setSizePolicy(sizePolicy);

        ageLayout->addWidget(ageComboBox);

        layoutWidget2 = new QWidget(EditClient);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 320, 181, 31));
        sexLayout = new QHBoxLayout(layoutWidget2);
        sexLayout->setObjectName(QStringLiteral("sexLayout"));
        sexLayout->setContentsMargins(10, 0, 10, 0);
        name_label_5 = new QLabel(layoutWidget2);
        name_label_5->setObjectName(QStringLiteral("name_label_5"));

        sexLayout->addWidget(name_label_5);

        radMale = new QRadioButton(layoutWidget2);
        radMale->setObjectName(QStringLiteral("radMale"));

        sexLayout->addWidget(radMale);

        radFemale = new QRadioButton(layoutWidget2);
        radFemale->setObjectName(QStringLiteral("radFemale"));

        sexLayout->addWidget(radFemale);

        horizontalLayoutWidget = new QWidget(EditClient);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 240, 441, 31));
        speciesLayout = new QHBoxLayout(horizontalLayoutWidget);
        speciesLayout->setObjectName(QStringLiteral("speciesLayout"));
        speciesLayout->setContentsMargins(0, 0, 0, 0);
        name_label_3 = new QLabel(horizontalLayoutWidget);
        name_label_3->setObjectName(QStringLiteral("name_label_3"));

        speciesLayout->addWidget(name_label_3);

        radDog = new QRadioButton(horizontalLayoutWidget);
        radDog->setObjectName(QStringLiteral("radDog"));

        speciesLayout->addWidget(radDog);

        radCat = new QRadioButton(horizontalLayoutWidget);
        radCat->setObjectName(QStringLiteral("radCat"));

        speciesLayout->addWidget(radCat);

        radBird = new QRadioButton(horizontalLayoutWidget);
        radBird->setObjectName(QStringLiteral("radBird"));

        speciesLayout->addWidget(radBird);

        radFish = new QRadioButton(horizontalLayoutWidget);
        radFish->setObjectName(QStringLiteral("radFish"));

        speciesLayout->addWidget(radFish);

        radRabbit = new QRadioButton(horizontalLayoutWidget);
        radRabbit->setObjectName(QStringLiteral("radRabbit"));

        speciesLayout->addWidget(radRabbit);

        horizontalLayoutWidget_2 = new QWidget(EditClient);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 280, 251, 31));
        breedLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        breedLayout->setObjectName(QStringLiteral("breedLayout"));
        breedLayout->setContentsMargins(0, 0, 0, 0);
        name_label_4 = new QLabel(horizontalLayoutWidget_2);
        name_label_4->setObjectName(QStringLiteral("name_label_4"));

        breedLayout->addWidget(name_label_4);

        txtBreed = new QLineEdit(horizontalLayoutWidget_2);
        txtBreed->setObjectName(QStringLiteral("txtBreed"));

        breedLayout->addWidget(txtBreed);


        retranslateUi(EditClient);

        QMetaObject::connectSlotsByName(EditClient);
    } // setupUi

    void retranslateUi(QDialog *EditClient)
    {
        EditClient->setWindowTitle(QApplication::translate("EditClient", "Dialog", Q_NULLPTR));
        name_label->setText(QApplication::translate("EditClient", "Name", Q_NULLPTR));
        txtName->setText(QString());
        phone_label->setText(QApplication::translate("EditClient", "Phone number", Q_NULLPTR));
        emai_label->setText(QApplication::translate("EditClient", "E-Mail", Q_NULLPTR));
        label->setText(QApplication::translate("EditClient", "Edit Your Client Profile", Q_NULLPTR));
        btnSave->setText(QApplication::translate("EditClient", "Save Changes", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("EditClient", "Cancel", Q_NULLPTR));
        NPAttr11->setText(QApplication::translate("EditClient", "Social", Q_NULLPTR));
        NPAttr3->setText(QApplication::translate("EditClient", "Energetic", Q_NULLPTR));
        NPAttr1->setText(QApplication::translate("EditClient", "Charisma", Q_NULLPTR));
        NPAttr7->setText(QApplication::translate("EditClient", "Obidience", Q_NULLPTR));
        NPAttr10->setText(QApplication::translate("EditClient", "Playful", Q_NULLPTR));
        NPAttr5->setText(QApplication::translate("EditClient", "Independance", Q_NULLPTR));
        NPAttr2->setText(QApplication::translate("EditClient", "Curiosity", Q_NULLPTR));
        NPAttr4->setText(QApplication::translate("EditClient", "Hygiene", Q_NULLPTR));
        NPAttr6->setText(QApplication::translate("EditClient", "Intelligence", Q_NULLPTR));
        NPAttr9->setText(QApplication::translate("EditClient", "Patience", Q_NULLPTR));
        NPAttr8->setText(QApplication::translate("EditClient", "Palate", Q_NULLPTR));
        NPAttr12->setText(QApplication::translate("EditClient", "Vocal", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditClient", "Animal Preferences", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditClient", "Personal Information", Q_NULLPTR));
        name_label_6->setText(QApplication::translate("EditClient", "Age", Q_NULLPTR));
        ageComboBox->clear();
        ageComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditClient", "Baby", Q_NULLPTR)
         << QApplication::translate("EditClient", "Teenage", Q_NULLPTR)
         << QApplication::translate("EditClient", "Adult", Q_NULLPTR)
         << QApplication::translate("EditClient", "Mature", Q_NULLPTR)
        );
        name_label_5->setText(QApplication::translate("EditClient", "Sex", Q_NULLPTR));
        radMale->setText(QApplication::translate("EditClient", "Male", Q_NULLPTR));
        radFemale->setText(QApplication::translate("EditClient", "Female", Q_NULLPTR));
        name_label_3->setText(QApplication::translate("EditClient", "Species", Q_NULLPTR));
        radDog->setText(QApplication::translate("EditClient", "Dog", Q_NULLPTR));
        radCat->setText(QApplication::translate("EditClient", "Cat", Q_NULLPTR));
        radBird->setText(QApplication::translate("EditClient", "Bird", Q_NULLPTR));
        radFish->setText(QApplication::translate("EditClient", "Fish", Q_NULLPTR));
        radRabbit->setText(QApplication::translate("EditClient", "Rabbit", Q_NULLPTR));
        name_label_4->setText(QApplication::translate("EditClient", "Breed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditClient: public Ui_EditClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCLIENT_H
