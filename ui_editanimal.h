/********************************************************************************
** Form generated from reading UI file 'editanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITANIMAL_H
#define UI_EDITANIMAL_H

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

class Ui_EditAnimal
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *name_layout;
    QLabel *name_label;
    QLabel *txt_name;
    QHBoxLayout *name_layout_3;
    QLabel *name_label_3;
    QLabel *txt_species;
    QHBoxLayout *name_layout_4;
    QLabel *name_label_4;
    QLineEdit *txtBreed;
    QHBoxLayout *name_layout_5;
    QLabel *name_label_5;
    QRadioButton *radMale;
    QRadioButton *radFemale;
    QHBoxLayout *name_layout_2;
    QLabel *name_label_2;
    QComboBox *ageComboBox;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *nav_lalyout;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QWidget *gridLayoutWidget;
    QGridLayout *NPAttributes;
    QHBoxLayout *NPA6;
    QLabel *NPAttr6;
    QSpinBox *NPAttr6spinBox;
    QHBoxLayout *NPA8;
    QLabel *NPAttr8;
    QSpinBox *NPAttr8spinBox;
    QHBoxLayout *NPA2;
    QLabel *NPAttr2;
    QSpinBox *NPAttr2spinBox;
    QHBoxLayout *NPA11;
    QLabel *NPAttr11;
    QSpinBox *NPAttr11spinBox;
    QHBoxLayout *NPA9;
    QLabel *NPAttr9;
    QSpinBox *NPAttr9spinBox;
    QHBoxLayout *NPA12;
    QLabel *NPAttr12;
    QSpinBox *NPAttr12spinBox;
    QHBoxLayout *NPA10;
    QLabel *NPAttr10;
    QSpinBox *NPAttr10spinBox;
    QHBoxLayout *NPA3;
    QLabel *NPAttr3;
    QSpinBox *NPAttr3spinBox;
    QHBoxLayout *NPA5;
    QLabel *NPAttr5;
    QSpinBox *NPAttr5spinBox;
    QHBoxLayout *NPA7;
    QLabel *NPAttr7;
    QSpinBox *NPAttr7spinBox;
    QHBoxLayout *NPA4;
    QLabel *NPAttr4;
    QSpinBox *NPAttr4spinBox;
    QHBoxLayout *NPA1;
    QLabel *NPAttr1;
    QSpinBox *NPAttr1spinBox;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *EditAnimal)
    {
        if (EditAnimal->objectName().isEmpty())
            EditAnimal->setObjectName(QStringLiteral("EditAnimal"));
        EditAnimal->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditAnimal->sizePolicy().hasHeightForWidth());
        EditAnimal->setSizePolicy(sizePolicy);
        EditAnimal->setMinimumSize(QSize(500, 500));
        EditAnimal->setMaximumSize(QSize(500, 500));
        verticalLayoutWidget = new QWidget(EditAnimal);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 70, 466, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        name_layout = new QHBoxLayout();
        name_layout->setObjectName(QStringLiteral("name_layout"));
        name_layout->setContentsMargins(10, -1, 10, -1);
        name_label = new QLabel(verticalLayoutWidget);
        name_label->setObjectName(QStringLiteral("name_label"));

        name_layout->addWidget(name_label);

        txt_name = new QLabel(verticalLayoutWidget);
        txt_name->setObjectName(QStringLiteral("txt_name"));

        name_layout->addWidget(txt_name);


        verticalLayout->addLayout(name_layout);

        name_layout_3 = new QHBoxLayout();
        name_layout_3->setObjectName(QStringLiteral("name_layout_3"));
        name_layout_3->setContentsMargins(10, -1, 10, -1);
        name_label_3 = new QLabel(verticalLayoutWidget);
        name_label_3->setObjectName(QStringLiteral("name_label_3"));

        name_layout_3->addWidget(name_label_3);

        txt_species = new QLabel(verticalLayoutWidget);
        txt_species->setObjectName(QStringLiteral("txt_species"));

        name_layout_3->addWidget(txt_species);


        verticalLayout->addLayout(name_layout_3);

        name_layout_4 = new QHBoxLayout();
        name_layout_4->setObjectName(QStringLiteral("name_layout_4"));
        name_layout_4->setContentsMargins(10, -1, 10, -1);
        name_label_4 = new QLabel(verticalLayoutWidget);
        name_label_4->setObjectName(QStringLiteral("name_label_4"));

        name_layout_4->addWidget(name_label_4);

        txtBreed = new QLineEdit(verticalLayoutWidget);
        txtBreed->setObjectName(QStringLiteral("txtBreed"));

        name_layout_4->addWidget(txtBreed);


        verticalLayout->addLayout(name_layout_4);

        name_layout_5 = new QHBoxLayout();
        name_layout_5->setObjectName(QStringLiteral("name_layout_5"));
        name_layout_5->setContentsMargins(10, -1, 10, -1);
        name_label_5 = new QLabel(verticalLayoutWidget);
        name_label_5->setObjectName(QStringLiteral("name_label_5"));

        name_layout_5->addWidget(name_label_5);

        radMale = new QRadioButton(verticalLayoutWidget);
        radMale->setObjectName(QStringLiteral("radMale"));

        name_layout_5->addWidget(radMale);

        radFemale = new QRadioButton(verticalLayoutWidget);
        radFemale->setObjectName(QStringLiteral("radFemale"));

        name_layout_5->addWidget(radFemale);


        verticalLayout->addLayout(name_layout_5);

        name_layout_2 = new QHBoxLayout();
        name_layout_2->setObjectName(QStringLiteral("name_layout_2"));
        name_layout_2->setContentsMargins(10, -1, 10, -1);
        name_label_2 = new QLabel(verticalLayoutWidget);
        name_label_2->setObjectName(QStringLiteral("name_label_2"));

        name_layout_2->addWidget(name_label_2);

        ageComboBox = new QComboBox(verticalLayoutWidget);
        ageComboBox->setObjectName(QStringLiteral("ageComboBox"));
        ageComboBox->setEnabled(true);
        sizePolicy.setHeightForWidth(ageComboBox->sizePolicy().hasHeightForWidth());
        ageComboBox->setSizePolicy(sizePolicy);

        name_layout_2->addWidget(ageComboBox);


        verticalLayout->addLayout(name_layout_2);

        label = new QLabel(EditAnimal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget = new QWidget(EditAnimal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 460, 439, 31));
        nav_lalyout = new QHBoxLayout(layoutWidget);
        nav_lalyout->setObjectName(QStringLiteral("nav_lalyout"));
        nav_lalyout->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
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

        gridLayoutWidget = new QWidget(EditAnimal);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 260, 441, 181));
        NPAttributes = new QGridLayout(gridLayoutWidget);
        NPAttributes->setSpacing(0);
        NPAttributes->setObjectName(QStringLiteral("NPAttributes"));
        NPAttributes->setSizeConstraint(QLayout::SetFixedSize);
        NPAttributes->setContentsMargins(0, 0, 0, 0);
        NPA6 = new QHBoxLayout();
        NPA6->setSpacing(50);
        NPA6->setObjectName(QStringLiteral("NPA6"));
        NPA6->setContentsMargins(16, -1, -1, -1);
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
        NPAttr8spinBox->setMinimum(1);
        NPAttr8spinBox->setMaximum(5);

        NPA8->addWidget(NPAttr8spinBox);


        NPAttributes->addLayout(NPA8, 1, 1, 1, 1);

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
        NPAttr2spinBox->setMinimum(1);
        NPAttr2spinBox->setMaximum(5);

        NPA2->addWidget(NPAttr2spinBox);


        NPAttributes->addLayout(NPA2, 1, 0, 1, 1);

        NPA11 = new QHBoxLayout();
        NPA11->setSpacing(50);
        NPA11->setObjectName(QStringLiteral("NPA11"));
        NPA11->setContentsMargins(26, -1, -1, -1);
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
        NPAttr9spinBox->setMinimum(1);
        NPAttr9spinBox->setMaximum(5);

        NPA9->addWidget(NPAttr9spinBox);


        NPAttributes->addLayout(NPA9, 2, 1, 1, 1);

        NPA12 = new QHBoxLayout();
        NPA12->setSpacing(50);
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
        NPAttr12spinBox->setMinimum(1);
        NPAttr12spinBox->setMaximum(5);

        NPA12->addWidget(NPAttr12spinBox);


        NPAttributes->addLayout(NPA12, 5, 1, 1, 1);

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
        NPAttr10spinBox->setMinimum(1);
        NPAttr10spinBox->setMaximum(5);

        NPA10->addWidget(NPAttr10spinBox);


        NPAttributes->addLayout(NPA10, 3, 1, 1, 1);

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
        NPAttr4spinBox->setMinimum(1);
        NPAttr4spinBox->setMaximum(5);

        NPA4->addWidget(NPAttr4spinBox);


        NPAttributes->addLayout(NPA4, 3, 0, 1, 1);

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
        NPAttr1spinBox->setMinimum(1);
        NPAttr1spinBox->setMaximum(5);

        NPA1->addWidget(NPAttr1spinBox);


        NPAttributes->addLayout(NPA1, 0, 0, 1, 1);

        label_2 = new QLabel(EditAnimal);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 161, 17));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(EditAnimal);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 240, 191, 17));
        label_3->setFont(font1);

        retranslateUi(EditAnimal);

        QMetaObject::connectSlotsByName(EditAnimal);
    } // setupUi

    void retranslateUi(QDialog *EditAnimal)
    {
        EditAnimal->setWindowTitle(QApplication::translate("EditAnimal", "Dialog", Q_NULLPTR));
        name_label->setText(QApplication::translate("EditAnimal", "Name", Q_NULLPTR));
        txt_name->setText(QString());
        name_label_3->setText(QApplication::translate("EditAnimal", "Species", Q_NULLPTR));
        txt_species->setText(QString());
        name_label_4->setText(QApplication::translate("EditAnimal", "Breed", Q_NULLPTR));
        name_label_5->setText(QApplication::translate("EditAnimal", "Sex", Q_NULLPTR));
        radMale->setText(QApplication::translate("EditAnimal", "Male", Q_NULLPTR));
        radFemale->setText(QApplication::translate("EditAnimal", "Female", Q_NULLPTR));
        name_label_2->setText(QApplication::translate("EditAnimal", "Age", Q_NULLPTR));
        ageComboBox->clear();
        ageComboBox->insertItems(0, QStringList()
         << QApplication::translate("EditAnimal", "Baby", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Teenage", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Adult", Q_NULLPTR)
         << QApplication::translate("EditAnimal", "Mature", Q_NULLPTR)
        );
        label->setText(QApplication::translate("EditAnimal", "Edit Animal Profile", Q_NULLPTR));
        btnSave->setText(QApplication::translate("EditAnimal", "Save Changes", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("EditAnimal", "Cancel", Q_NULLPTR));
        NPAttr6->setText(QApplication::translate("EditAnimal", "intelligence", Q_NULLPTR));
        NPAttr8->setText(QApplication::translate("EditAnimal", "palate", Q_NULLPTR));
        NPAttr2->setText(QApplication::translate("EditAnimal", "curiosity", Q_NULLPTR));
        NPAttr11->setText(QApplication::translate("EditAnimal", "social", Q_NULLPTR));
        NPAttr9->setText(QApplication::translate("EditAnimal", "patience", Q_NULLPTR));
        NPAttr12->setText(QApplication::translate("EditAnimal", "vocal", Q_NULLPTR));
        NPAttr10->setText(QApplication::translate("EditAnimal", "playful", Q_NULLPTR));
        NPAttr3->setText(QApplication::translate("EditAnimal", "energetic", Q_NULLPTR));
        NPAttr5->setText(QApplication::translate("EditAnimal", "independance", Q_NULLPTR));
        NPAttr7->setText(QApplication::translate("EditAnimal", "obidience", Q_NULLPTR));
        NPAttr4->setText(QApplication::translate("EditAnimal", "hygiene", Q_NULLPTR));
        NPAttr1->setText(QApplication::translate("EditAnimal", "charisma", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditAnimal", "Animal Preferences", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditAnimal", "Non-Physical Attributes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditAnimal: public Ui_EditAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITANIMAL_H
