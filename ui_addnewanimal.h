/********************************************************************************
** Form generated from reading UI file 'addnewanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWANIMAL_H
#define UI_ADDNEWANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewAnimal
{
public:
    QGroupBox *animalGB;
    QVBoxLayout *verticalLayout;
    QRadioButton *radBird;
    QRadioButton *radCat;
    QRadioButton *radFish;
    QRadioButton *radRabbit;
    QRadioButton *radDog;
    QGroupBox *physAttrGB;
    QWidget *layoutWidget;
    QHBoxLayout *name_layout;
    QLabel *name_label;
    QPlainTextEdit *txtName;
    QWidget *layoutWidget1;
    QHBoxLayout *age_layout;
    QLabel *age_label;
    QComboBox *ageComboBox;
    QWidget *layoutWidget2;
    QHBoxLayout *sex_layout;
    QLabel *sex_label;
    QRadioButton *radMale;
    QRadioButton *radFemale;
    QWidget *layoutWidget3;
    QHBoxLayout *breed_layout;
    QLabel *label_6;
    QTextEdit *txtBreed;
    QWidget *layoutWidget4;
    QHBoxLayout *WindowControl;
    QPushButton *addAnimalbtn;
    QPushButton *cancelbtn;
    QWidget *gridLayoutWidget;
    QGridLayout *NPAttributes;
    QHBoxLayout *NPA6;
    QLabel *NPAttr6;
    QSpinBox *NPAttr6spinBox;
    QHBoxLayout *NPA2;
    QLabel *NPAttr2;
    QSpinBox *NPAttr2spinBox;
    QHBoxLayout *NPA1;
    QLabel *NPAttr1;
    QSpinBox *NPAttr1spinBox;
    QHBoxLayout *NPA4;
    QLabel *NPAttr4;
    QSpinBox *NPAttr4spinBox;
    QHBoxLayout *NPA8;
    QLabel *NPAttr8;
    QSpinBox *NPAttr8spinBox;
    QHBoxLayout *NPA3;
    QLabel *NPAttr3;
    QSpinBox *NPAttr3spinBox;
    QHBoxLayout *NPA5;
    QLabel *NPAttr5;
    QSpinBox *NPAttr5spinBox;
    QHBoxLayout *NPA7;
    QLabel *NPAttr7;
    QSpinBox *NPAttr7spinBox;
    QHBoxLayout *NPA9;
    QLabel *NPAttr9;
    QSpinBox *NPAttr9spinBox;
    QHBoxLayout *NPA10;
    QLabel *NPAttr10;
    QSpinBox *NPAttr10spinBox;
    QHBoxLayout *NPA12;
    QLabel *NPAttr12;
    QSpinBox *NPAttr12spinBox;
    QHBoxLayout *NPA11;
    QLabel *NPAttr11;
    QSpinBox *NPAttr11spinBox;

    void setupUi(QDialog *AddNewAnimal)
    {
        if (AddNewAnimal->objectName().isEmpty())
            AddNewAnimal->setObjectName(QStringLiteral("AddNewAnimal"));
        AddNewAnimal->setEnabled(true);
        AddNewAnimal->resize(600, 500);
        animalGB = new QGroupBox(AddNewAnimal);
        animalGB->setObjectName(QStringLiteral("animalGB"));
        animalGB->setGeometry(QRect(5, 0, 100, 161));
        verticalLayout = new QVBoxLayout(animalGB);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radBird = new QRadioButton(animalGB);
        radBird->setObjectName(QStringLiteral("radBird"));

        verticalLayout->addWidget(radBird);

        radCat = new QRadioButton(animalGB);
        radCat->setObjectName(QStringLiteral("radCat"));

        verticalLayout->addWidget(radCat);

        radFish = new QRadioButton(animalGB);
        radFish->setObjectName(QStringLiteral("radFish"));

        verticalLayout->addWidget(radFish);

        radRabbit = new QRadioButton(animalGB);
        radRabbit->setObjectName(QStringLiteral("radRabbit"));

        verticalLayout->addWidget(radRabbit);

        radDog = new QRadioButton(animalGB);
        radDog->setObjectName(QStringLiteral("radDog"));

        verticalLayout->addWidget(radDog);

        physAttrGB = new QGroupBox(AddNewAnimal);
        physAttrGB->setObjectName(QStringLiteral("physAttrGB"));
        physAttrGB->setEnabled(true);
        physAttrGB->setGeometry(QRect(110, 0, 480, 161));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(physAttrGB->sizePolicy().hasHeightForWidth());
        physAttrGB->setSizePolicy(sizePolicy);
        physAttrGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        physAttrGB->setCheckable(false);
        layoutWidget = new QWidget(physAttrGB);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 461, 31));
        name_layout = new QHBoxLayout(layoutWidget);
        name_layout->setSpacing(0);
        name_layout->setObjectName(QStringLiteral("name_layout"));
        name_layout->setContentsMargins(0, 0, 0, 0);
        name_label = new QLabel(layoutWidget);
        name_label->setObjectName(QStringLiteral("name_label"));
        sizePolicy.setHeightForWidth(name_label->sizePolicy().hasHeightForWidth());
        name_label->setSizePolicy(sizePolicy);

        name_layout->addWidget(name_label);

        txtName = new QPlainTextEdit(layoutWidget);
        txtName->setObjectName(QStringLiteral("txtName"));
        sizePolicy.setHeightForWidth(txtName->sizePolicy().hasHeightForWidth());
        txtName->setSizePolicy(sizePolicy);

        name_layout->addWidget(txtName);

        layoutWidget1 = new QWidget(physAttrGB);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 90, 461, 31));
        age_layout = new QHBoxLayout(layoutWidget1);
        age_layout->setSpacing(0);
        age_layout->setObjectName(QStringLiteral("age_layout"));
        age_layout->setContentsMargins(0, 0, 0, 0);
        age_label = new QLabel(layoutWidget1);
        age_label->setObjectName(QStringLiteral("age_label"));
        sizePolicy.setHeightForWidth(age_label->sizePolicy().hasHeightForWidth());
        age_label->setSizePolicy(sizePolicy);
        age_label->setLayoutDirection(Qt::LeftToRight);
        age_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        age_layout->addWidget(age_label);

        ageComboBox = new QComboBox(layoutWidget1);
        ageComboBox->setObjectName(QStringLiteral("ageComboBox"));
        ageComboBox->setEnabled(true);
        sizePolicy.setHeightForWidth(ageComboBox->sizePolicy().hasHeightForWidth());
        ageComboBox->setSizePolicy(sizePolicy);

        age_layout->addWidget(ageComboBox);

        layoutWidget2 = new QWidget(physAttrGB);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 120, 461, 31));
        sex_layout = new QHBoxLayout(layoutWidget2);
        sex_layout->setSpacing(0);
        sex_layout->setObjectName(QStringLiteral("sex_layout"));
        sex_layout->setContentsMargins(0, 0, 0, 0);
        sex_label = new QLabel(layoutWidget2);
        sex_label->setObjectName(QStringLiteral("sex_label"));
        sizePolicy.setHeightForWidth(sex_label->sizePolicy().hasHeightForWidth());
        sex_label->setSizePolicy(sizePolicy);

        sex_layout->addWidget(sex_label);

        radMale = new QRadioButton(layoutWidget2);
        radMale->setObjectName(QStringLiteral("radMale"));
        sizePolicy.setHeightForWidth(radMale->sizePolicy().hasHeightForWidth());
        radMale->setSizePolicy(sizePolicy);

        sex_layout->addWidget(radMale);

        radFemale = new QRadioButton(layoutWidget2);
        radFemale->setObjectName(QStringLiteral("radFemale"));
        sizePolicy.setHeightForWidth(radFemale->sizePolicy().hasHeightForWidth());
        radFemale->setSizePolicy(sizePolicy);

        sex_layout->addWidget(radFemale);

        layoutWidget3 = new QWidget(physAttrGB);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 60, 461, 31));
        breed_layout = new QHBoxLayout(layoutWidget3);
        breed_layout->setSpacing(0);
        breed_layout->setObjectName(QStringLiteral("breed_layout"));
        breed_layout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        breed_layout->addWidget(label_6);

        txtBreed = new QTextEdit(layoutWidget3);
        txtBreed->setObjectName(QStringLiteral("txtBreed"));
        sizePolicy.setHeightForWidth(txtBreed->sizePolicy().hasHeightForWidth());
        txtBreed->setSizePolicy(sizePolicy);

        breed_layout->addWidget(txtBreed);

        layoutWidget4 = new QWidget(AddNewAnimal);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(400, 470, 174, 27));
        WindowControl = new QHBoxLayout(layoutWidget4);
        WindowControl->setObjectName(QStringLiteral("WindowControl"));
        WindowControl->setContentsMargins(0, 0, 0, 0);
        addAnimalbtn = new QPushButton(layoutWidget4);
        addAnimalbtn->setObjectName(QStringLiteral("addAnimalbtn"));

        WindowControl->addWidget(addAnimalbtn);

        cancelbtn = new QPushButton(layoutWidget4);
        cancelbtn->setObjectName(QStringLiteral("cancelbtn"));

        WindowControl->addWidget(cancelbtn);

        gridLayoutWidget = new QWidget(AddNewAnimal);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 167, 581, 301));
        NPAttributes = new QGridLayout(gridLayoutWidget);
        NPAttributes->setObjectName(QStringLiteral("NPAttributes"));
        NPAttributes->setSizeConstraint(QLayout::SetFixedSize);
        NPAttributes->setHorizontalSpacing(100);
        NPAttributes->setVerticalSpacing(20);
        NPAttributes->setContentsMargins(50, 20, 50, 0);
        NPA6 = new QHBoxLayout();
        NPA6->setSpacing(50);
        NPA6->setObjectName(QStringLiteral("NPA6"));
        NPAttr6 = new QLabel(gridLayoutWidget);
        NPAttr6->setObjectName(QStringLiteral("NPAttr6"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NPAttr6->sizePolicy().hasHeightForWidth());
        NPAttr6->setSizePolicy(sizePolicy1);

        NPA6->addWidget(NPAttr6);

        NPAttr6spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr6spinBox->setObjectName(QStringLiteral("NPAttr6spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr6spinBox->sizePolicy().hasHeightForWidth());
        NPAttr6spinBox->setSizePolicy(sizePolicy1);
        NPAttr6spinBox->setMinimum(1);
        NPAttr6spinBox->setMaximum(5);

        NPA6->addWidget(NPAttr6spinBox);


        NPAttributes->addLayout(NPA6, 5, 0, 1, 1);

        NPA2 = new QHBoxLayout();
        NPA2->setSpacing(50);
        NPA2->setObjectName(QStringLiteral("NPA2"));
        NPAttr2 = new QLabel(gridLayoutWidget);
        NPAttr2->setObjectName(QStringLiteral("NPAttr2"));
        sizePolicy1.setHeightForWidth(NPAttr2->sizePolicy().hasHeightForWidth());
        NPAttr2->setSizePolicy(sizePolicy1);

        NPA2->addWidget(NPAttr2);

        NPAttr2spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr2spinBox->setObjectName(QStringLiteral("NPAttr2spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr2spinBox->sizePolicy().hasHeightForWidth());
        NPAttr2spinBox->setSizePolicy(sizePolicy1);
        NPAttr2spinBox->setMinimum(1);
        NPAttr2spinBox->setMaximum(5);

        NPA2->addWidget(NPAttr2spinBox);


        NPAttributes->addLayout(NPA2, 1, 0, 1, 1);

        NPA1 = new QHBoxLayout();
        NPA1->setSpacing(50);
        NPA1->setObjectName(QStringLiteral("NPA1"));
        NPA1->setSizeConstraint(QLayout::SetMinimumSize);
        NPAttr1 = new QLabel(gridLayoutWidget);
        NPAttr1->setObjectName(QStringLiteral("NPAttr1"));
        sizePolicy1.setHeightForWidth(NPAttr1->sizePolicy().hasHeightForWidth());
        NPAttr1->setSizePolicy(sizePolicy1);

        NPA1->addWidget(NPAttr1);

        NPAttr1spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr1spinBox->setObjectName(QStringLiteral("NPAttr1spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr1spinBox->sizePolicy().hasHeightForWidth());
        NPAttr1spinBox->setSizePolicy(sizePolicy1);
        NPAttr1spinBox->setMinimum(1);
        NPAttr1spinBox->setMaximum(5);

        NPA1->addWidget(NPAttr1spinBox);


        NPAttributes->addLayout(NPA1, 0, 0, 1, 1);

        NPA4 = new QHBoxLayout();
        NPA4->setSpacing(50);
        NPA4->setObjectName(QStringLiteral("NPA4"));
        NPAttr4 = new QLabel(gridLayoutWidget);
        NPAttr4->setObjectName(QStringLiteral("NPAttr4"));
        sizePolicy1.setHeightForWidth(NPAttr4->sizePolicy().hasHeightForWidth());
        NPAttr4->setSizePolicy(sizePolicy1);

        NPA4->addWidget(NPAttr4);

        NPAttr4spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr4spinBox->setObjectName(QStringLiteral("NPAttr4spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr4spinBox->sizePolicy().hasHeightForWidth());
        NPAttr4spinBox->setSizePolicy(sizePolicy1);
        NPAttr4spinBox->setMinimum(1);
        NPAttr4spinBox->setMaximum(5);

        NPA4->addWidget(NPAttr4spinBox);


        NPAttributes->addLayout(NPA4, 3, 0, 1, 1);

        NPA8 = new QHBoxLayout();
        NPA8->setSpacing(50);
        NPA8->setObjectName(QStringLiteral("NPA8"));
        NPAttr8 = new QLabel(gridLayoutWidget);
        NPAttr8->setObjectName(QStringLiteral("NPAttr8"));
        sizePolicy1.setHeightForWidth(NPAttr8->sizePolicy().hasHeightForWidth());
        NPAttr8->setSizePolicy(sizePolicy1);

        NPA8->addWidget(NPAttr8);

        NPAttr8spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr8spinBox->setObjectName(QStringLiteral("NPAttr8spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr8spinBox->sizePolicy().hasHeightForWidth());
        NPAttr8spinBox->setSizePolicy(sizePolicy1);
        NPAttr8spinBox->setMinimum(1);
        NPAttr8spinBox->setMaximum(5);

        NPA8->addWidget(NPAttr8spinBox);


        NPAttributes->addLayout(NPA8, 1, 1, 1, 1);

        NPA3 = new QHBoxLayout();
        NPA3->setSpacing(50);
        NPA3->setObjectName(QStringLiteral("NPA3"));
        NPAttr3 = new QLabel(gridLayoutWidget);
        NPAttr3->setObjectName(QStringLiteral("NPAttr3"));
        sizePolicy1.setHeightForWidth(NPAttr3->sizePolicy().hasHeightForWidth());
        NPAttr3->setSizePolicy(sizePolicy1);

        NPA3->addWidget(NPAttr3);

        NPAttr3spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr3spinBox->setObjectName(QStringLiteral("NPAttr3spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr3spinBox->sizePolicy().hasHeightForWidth());
        NPAttr3spinBox->setSizePolicy(sizePolicy1);
        NPAttr3spinBox->setMinimum(1);
        NPAttr3spinBox->setMaximum(5);

        NPA3->addWidget(NPAttr3spinBox);


        NPAttributes->addLayout(NPA3, 2, 0, 1, 1);

        NPA5 = new QHBoxLayout();
        NPA5->setSpacing(50);
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
        NPAttr5spinBox->setMinimum(1);
        NPAttr5spinBox->setMaximum(5);

        NPA5->addWidget(NPAttr5spinBox);


        NPAttributes->addLayout(NPA5, 4, 0, 1, 1);

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
        NPAttr7spinBox->setMinimum(1);
        NPAttr7spinBox->setMaximum(5);

        NPA7->addWidget(NPAttr7spinBox);


        NPAttributes->addLayout(NPA7, 0, 1, 1, 1);

        NPA9 = new QHBoxLayout();
        NPA9->setSpacing(50);
        NPA9->setObjectName(QStringLiteral("NPA9"));
        NPAttr9 = new QLabel(gridLayoutWidget);
        NPAttr9->setObjectName(QStringLiteral("NPAttr9"));
        sizePolicy1.setHeightForWidth(NPAttr9->sizePolicy().hasHeightForWidth());
        NPAttr9->setSizePolicy(sizePolicy1);

        NPA9->addWidget(NPAttr9);

        NPAttr9spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr9spinBox->setObjectName(QStringLiteral("NPAttr9spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr9spinBox->sizePolicy().hasHeightForWidth());
        NPAttr9spinBox->setSizePolicy(sizePolicy1);
        NPAttr9spinBox->setMinimum(1);
        NPAttr9spinBox->setMaximum(5);

        NPA9->addWidget(NPAttr9spinBox);


        NPAttributes->addLayout(NPA9, 2, 1, 1, 1);

        NPA10 = new QHBoxLayout();
        NPA10->setSpacing(50);
        NPA10->setObjectName(QStringLiteral("NPA10"));
        NPAttr10 = new QLabel(gridLayoutWidget);
        NPAttr10->setObjectName(QStringLiteral("NPAttr10"));
        sizePolicy1.setHeightForWidth(NPAttr10->sizePolicy().hasHeightForWidth());
        NPAttr10->setSizePolicy(sizePolicy1);

        NPA10->addWidget(NPAttr10);

        NPAttr10spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr10spinBox->setObjectName(QStringLiteral("NPAttr10spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr10spinBox->sizePolicy().hasHeightForWidth());
        NPAttr10spinBox->setSizePolicy(sizePolicy1);
        NPAttr10spinBox->setMinimum(1);
        NPAttr10spinBox->setMaximum(5);

        NPA10->addWidget(NPAttr10spinBox);


        NPAttributes->addLayout(NPA10, 3, 1, 1, 1);

        NPA12 = new QHBoxLayout();
        NPA12->setSpacing(50);
        NPA12->setObjectName(QStringLiteral("NPA12"));
        NPAttr12 = new QLabel(gridLayoutWidget);
        NPAttr12->setObjectName(QStringLiteral("NPAttr12"));
        sizePolicy1.setHeightForWidth(NPAttr12->sizePolicy().hasHeightForWidth());
        NPAttr12->setSizePolicy(sizePolicy1);

        NPA12->addWidget(NPAttr12);

        NPAttr12spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr12spinBox->setObjectName(QStringLiteral("NPAttr12spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr12spinBox->sizePolicy().hasHeightForWidth());
        NPAttr12spinBox->setSizePolicy(sizePolicy1);
        NPAttr12spinBox->setMinimum(1);
        NPAttr12spinBox->setMaximum(5);

        NPA12->addWidget(NPAttr12spinBox);


        NPAttributes->addLayout(NPA12, 5, 1, 1, 1);

        NPA11 = new QHBoxLayout();
        NPA11->setSpacing(50);
        NPA11->setObjectName(QStringLiteral("NPA11"));
        NPAttr11 = new QLabel(gridLayoutWidget);
        NPAttr11->setObjectName(QStringLiteral("NPAttr11"));
        sizePolicy1.setHeightForWidth(NPAttr11->sizePolicy().hasHeightForWidth());
        NPAttr11->setSizePolicy(sizePolicy1);

        NPA11->addWidget(NPAttr11);

        NPAttr11spinBox = new QSpinBox(gridLayoutWidget);
        NPAttr11spinBox->setObjectName(QStringLiteral("NPAttr11spinBox"));
        sizePolicy1.setHeightForWidth(NPAttr11spinBox->sizePolicy().hasHeightForWidth());
        NPAttr11spinBox->setSizePolicy(sizePolicy1);
        NPAttr11spinBox->setMinimum(1);
        NPAttr11spinBox->setMaximum(5);

        NPA11->addWidget(NPAttr11spinBox);


        NPAttributes->addLayout(NPA11, 4, 1, 1, 1);

        layoutWidget->raise();
        animalGB->raise();
        physAttrGB->raise();
        gridLayoutWidget->raise();

        retranslateUi(AddNewAnimal);

        QMetaObject::connectSlotsByName(AddNewAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddNewAnimal)
    {
        AddNewAnimal->setWindowTitle(QApplication::translate("AddNewAnimal", "Dialog", Q_NULLPTR));
        animalGB->setTitle(QApplication::translate("AddNewAnimal", "Type of Animal", Q_NULLPTR));
        radBird->setText(QApplication::translate("AddNewAnimal", "Bird", Q_NULLPTR));
        radCat->setText(QApplication::translate("AddNewAnimal", "Cat", Q_NULLPTR));
        radFish->setText(QApplication::translate("AddNewAnimal", "Fish", Q_NULLPTR));
        radRabbit->setText(QApplication::translate("AddNewAnimal", "Rabbit", Q_NULLPTR));
        radDog->setText(QApplication::translate("AddNewAnimal", "Dog", Q_NULLPTR));
        physAttrGB->setTitle(QApplication::translate("AddNewAnimal", "Physical Attributes", Q_NULLPTR));
        name_label->setText(QApplication::translate("AddNewAnimal", "Name:", Q_NULLPTR));
        age_label->setText(QApplication::translate("AddNewAnimal", "Age:", Q_NULLPTR));
        ageComboBox->clear();
        ageComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddNewAnimal", "Baby", Q_NULLPTR)
         << QApplication::translate("AddNewAnimal", "Teenage", Q_NULLPTR)
         << QApplication::translate("AddNewAnimal", "Adult", Q_NULLPTR)
         << QApplication::translate("AddNewAnimal", "Mature", Q_NULLPTR)
        );
        sex_label->setText(QApplication::translate("AddNewAnimal", "Sex:", Q_NULLPTR));
        radMale->setText(QApplication::translate("AddNewAnimal", "Male", Q_NULLPTR));
        radFemale->setText(QApplication::translate("AddNewAnimal", "Female", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddNewAnimal", "Breed:", Q_NULLPTR));
        addAnimalbtn->setText(QApplication::translate("AddNewAnimal", "Add Animal", Q_NULLPTR));
        cancelbtn->setText(QApplication::translate("AddNewAnimal", "Cancel", Q_NULLPTR));
        NPAttr6->setText(QApplication::translate("AddNewAnimal", "intelligence", Q_NULLPTR));
        NPAttr2->setText(QApplication::translate("AddNewAnimal", "curiosity", Q_NULLPTR));
        NPAttr1->setText(QApplication::translate("AddNewAnimal", "charisma", Q_NULLPTR));
        NPAttr4->setText(QApplication::translate("AddNewAnimal", "hygiene", Q_NULLPTR));
        NPAttr8->setText(QApplication::translate("AddNewAnimal", "palate", Q_NULLPTR));
        NPAttr3->setText(QApplication::translate("AddNewAnimal", "energetic", Q_NULLPTR));
        NPAttr5->setText(QApplication::translate("AddNewAnimal", "independance", Q_NULLPTR));
        NPAttr7->setText(QApplication::translate("AddNewAnimal", "obidience", Q_NULLPTR));
        NPAttr9->setText(QApplication::translate("AddNewAnimal", "patience", Q_NULLPTR));
        NPAttr10->setText(QApplication::translate("AddNewAnimal", "playful", Q_NULLPTR));
        NPAttr12->setText(QApplication::translate("AddNewAnimal", "vocal", Q_NULLPTR));
        NPAttr11->setText(QApplication::translate("AddNewAnimal", "social", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNewAnimal: public Ui_AddNewAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWANIMAL_H
