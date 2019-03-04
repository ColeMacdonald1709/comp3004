/********************************************************************************
** Form generated from reading UI file 'manageanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEANIMAL_H
#define UI_MANAGEANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageAnimal
{
public:
    QWidget *centralWidget;
    QPushButton *addAnimalbtn;
    QTableWidget *animalView;
    QPushButton *btnLogout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *txt_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *species_label;
    QLabel *txt_Species;
    QHBoxLayout *horizontalLayout_3;
    QLabel *breed_label;
    QLabel *txt_Breed;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sex_label;
    QLabel *txt_Sex;
    QHBoxLayout *horizontalLayout_5;
    QLabel *age_label;
    QLabel *txt_Age;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *NPA1_layout;
    QLabel *NPA1_label;
    QLabel *txt_NPA1;
    QHBoxLayout *NPA2_layout;
    QLabel *NPA2_label;
    QLabel *txt_NPA2;
    QHBoxLayout *NPA3_layout;
    QLabel *NPA3_label;
    QLabel *txt_NPA3;
    QHBoxLayout *NPA4_layout;
    QLabel *NPA4_label;
    QLabel *txt_NPA4;
    QHBoxLayout *NPA5_layout;
    QLabel *NPA5_label;
    QLabel *txt_NPA5;
    QHBoxLayout *NPA6_layout;
    QLabel *NPA6_label;
    QLabel *txt_NPA6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *NPA7_layout;
    QLabel *NPa7_label;
    QLabel *txt_NPA7;
    QHBoxLayout *NPA8_layout;
    QLabel *NPA8_label;
    QLabel *txt_NPA8;
    QHBoxLayout *NPA9_layout;
    QLabel *NPA9_label;
    QLabel *txt_NPA9;
    QHBoxLayout *NPA10_layout;
    QLabel *NPA10_label;
    QLabel *txt_NPA10;
    QHBoxLayout *NPA11_layout;
    QLabel *NPA11_label;
    QLabel *txt_NPA11;
    QHBoxLayout *NPA12_layout;
    QLabel *label_17;
    QLabel *txt_NPA12;
    QMenuBar *menuBar;
    QMenu *menucuACS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QDialog *manageAnimal)
    {
        if (manageAnimal->objectName().isEmpty())
            manageAnimal->setObjectName(QStringLiteral("manageAnimal"));
        manageAnimal->resize(1014, 800);
        manageAnimal->setMinimumSize(QSize(1000, 800));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(12);
        manageAnimal->setFont(font);
        centralWidget = new QWidget(manageAnimal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1011, 682));
        addAnimalbtn = new QPushButton(centralWidget);
        addAnimalbtn->setObjectName(QStringLiteral("addAnimalbtn"));
        addAnimalbtn->setGeometry(QRect(300, 40, 161, 51));
        animalView = new QTableWidget(centralWidget);
        if (animalView->columnCount() < 3)
            animalView->setColumnCount(3);
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        animalView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        animalView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        animalView->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        animalView->setObjectName(QStringLiteral("animalView"));
        animalView->setEnabled(true);
        animalView->setGeometry(QRect(15, 101, 451, 551));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(animalView->sizePolicy().hasHeightForWidth());
        animalView->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(8);
        animalView->setFont(font2);
        animalView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        animalView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        animalView->setDragDropOverwriteMode(false);
        animalView->setShowGrid(true);
        animalView->setWordWrap(false);
        animalView->setColumnCount(3);
        animalView->horizontalHeader()->setVisible(false);
        animalView->horizontalHeader()->setCascadingSectionResizes(false);
        animalView->horizontalHeader()->setDefaultSectionSize(150);
        animalView->horizontalHeader()->setHighlightSections(true);
        animalView->horizontalHeader()->setMinimumSectionSize(150);
        animalView->verticalHeader()->setMinimumSectionSize(20);
        btnLogout = new QPushButton(centralWidget);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));
        btnLogout->setGeometry(QRect(200, 50, 83, 31));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(510, 100, 481, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 20));

        horizontalLayout->addWidget(label);

        txt_Name = new QLabel(verticalLayoutWidget);
        txt_Name->setObjectName(QStringLiteral("txt_Name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txt_Name->sizePolicy().hasHeightForWidth());
        txt_Name->setSizePolicy(sizePolicy1);
        txt_Name->setAcceptDrops(false);
        txt_Name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(txt_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        species_label = new QLabel(verticalLayoutWidget);
        species_label->setObjectName(QStringLiteral("species_label"));
        sizePolicy.setHeightForWidth(species_label->sizePolicy().hasHeightForWidth());
        species_label->setSizePolicy(sizePolicy);
        species_label->setMinimumSize(QSize(100, 20));

        horizontalLayout_2->addWidget(species_label);

        txt_Species = new QLabel(verticalLayoutWidget);
        txt_Species->setObjectName(QStringLiteral("txt_Species"));
        sizePolicy1.setHeightForWidth(txt_Species->sizePolicy().hasHeightForWidth());
        txt_Species->setSizePolicy(sizePolicy1);
        txt_Species->setAcceptDrops(false);
        txt_Species->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(txt_Species);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        breed_label = new QLabel(verticalLayoutWidget);
        breed_label->setObjectName(QStringLiteral("breed_label"));
        sizePolicy.setHeightForWidth(breed_label->sizePolicy().hasHeightForWidth());
        breed_label->setSizePolicy(sizePolicy);
        breed_label->setMinimumSize(QSize(100, 20));

        horizontalLayout_3->addWidget(breed_label);

        txt_Breed = new QLabel(verticalLayoutWidget);
        txt_Breed->setObjectName(QStringLiteral("txt_Breed"));
        sizePolicy1.setHeightForWidth(txt_Breed->sizePolicy().hasHeightForWidth());
        txt_Breed->setSizePolicy(sizePolicy1);
        txt_Breed->setAcceptDrops(false);
        txt_Breed->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(txt_Breed);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sex_label = new QLabel(verticalLayoutWidget);
        sex_label->setObjectName(QStringLiteral("sex_label"));
        sizePolicy.setHeightForWidth(sex_label->sizePolicy().hasHeightForWidth());
        sex_label->setSizePolicy(sizePolicy);
        sex_label->setMinimumSize(QSize(100, 20));

        horizontalLayout_4->addWidget(sex_label);

        txt_Sex = new QLabel(verticalLayoutWidget);
        txt_Sex->setObjectName(QStringLiteral("txt_Sex"));
        sizePolicy1.setHeightForWidth(txt_Sex->sizePolicy().hasHeightForWidth());
        txt_Sex->setSizePolicy(sizePolicy1);
        txt_Sex->setAcceptDrops(false);
        txt_Sex->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(txt_Sex);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        age_label = new QLabel(verticalLayoutWidget);
        age_label->setObjectName(QStringLiteral("age_label"));
        sizePolicy.setHeightForWidth(age_label->sizePolicy().hasHeightForWidth());
        age_label->setSizePolicy(sizePolicy);
        age_label->setMinimumSize(QSize(100, 20));

        horizontalLayout_5->addWidget(age_label);

        txt_Age = new QLabel(verticalLayoutWidget);
        txt_Age->setObjectName(QStringLiteral("txt_Age"));
        sizePolicy1.setHeightForWidth(txt_Age->sizePolicy().hasHeightForWidth());
        txt_Age->setSizePolicy(sizePolicy1);
        txt_Age->setAcceptDrops(false);
        txt_Age->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(txt_Age);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(510, 280, 481, 371));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        NPA1_layout = new QHBoxLayout();
        NPA1_layout->setSpacing(6);
        NPA1_layout->setObjectName(QStringLiteral("NPA1_layout"));
        NPA1_label = new QLabel(horizontalLayoutWidget);
        NPA1_label->setObjectName(QStringLiteral("NPA1_label"));
        sizePolicy.setHeightForWidth(NPA1_label->sizePolicy().hasHeightForWidth());
        NPA1_label->setSizePolicy(sizePolicy);

        NPA1_layout->addWidget(NPA1_label);

        txt_NPA1 = new QLabel(horizontalLayoutWidget);
        txt_NPA1->setObjectName(QStringLiteral("txt_NPA1"));
        sizePolicy.setHeightForWidth(txt_NPA1->sizePolicy().hasHeightForWidth());
        txt_NPA1->setSizePolicy(sizePolicy);
        txt_NPA1->setMinimumSize(QSize(30, 30));

        NPA1_layout->addWidget(txt_NPA1);


        verticalLayout_2->addLayout(NPA1_layout);

        NPA2_layout = new QHBoxLayout();
        NPA2_layout->setSpacing(6);
        NPA2_layout->setObjectName(QStringLiteral("NPA2_layout"));
        NPA2_label = new QLabel(horizontalLayoutWidget);
        NPA2_label->setObjectName(QStringLiteral("NPA2_label"));
        sizePolicy.setHeightForWidth(NPA2_label->sizePolicy().hasHeightForWidth());
        NPA2_label->setSizePolicy(sizePolicy);

        NPA2_layout->addWidget(NPA2_label);

        txt_NPA2 = new QLabel(horizontalLayoutWidget);
        txt_NPA2->setObjectName(QStringLiteral("txt_NPA2"));
        sizePolicy.setHeightForWidth(txt_NPA2->sizePolicy().hasHeightForWidth());
        txt_NPA2->setSizePolicy(sizePolicy);
        txt_NPA2->setMinimumSize(QSize(30, 30));

        NPA2_layout->addWidget(txt_NPA2);


        verticalLayout_2->addLayout(NPA2_layout);

        NPA3_layout = new QHBoxLayout();
        NPA3_layout->setSpacing(6);
        NPA3_layout->setObjectName(QStringLiteral("NPA3_layout"));
        NPA3_label = new QLabel(horizontalLayoutWidget);
        NPA3_label->setObjectName(QStringLiteral("NPA3_label"));
        sizePolicy.setHeightForWidth(NPA3_label->sizePolicy().hasHeightForWidth());
        NPA3_label->setSizePolicy(sizePolicy);

        NPA3_layout->addWidget(NPA3_label);

        txt_NPA3 = new QLabel(horizontalLayoutWidget);
        txt_NPA3->setObjectName(QStringLiteral("txt_NPA3"));
        sizePolicy.setHeightForWidth(txt_NPA3->sizePolicy().hasHeightForWidth());
        txt_NPA3->setSizePolicy(sizePolicy);
        txt_NPA3->setMinimumSize(QSize(30, 30));

        NPA3_layout->addWidget(txt_NPA3);


        verticalLayout_2->addLayout(NPA3_layout);

        NPA4_layout = new QHBoxLayout();
        NPA4_layout->setSpacing(6);
        NPA4_layout->setObjectName(QStringLiteral("NPA4_layout"));
        NPA4_label = new QLabel(horizontalLayoutWidget);
        NPA4_label->setObjectName(QStringLiteral("NPA4_label"));
        sizePolicy.setHeightForWidth(NPA4_label->sizePolicy().hasHeightForWidth());
        NPA4_label->setSizePolicy(sizePolicy);

        NPA4_layout->addWidget(NPA4_label);

        txt_NPA4 = new QLabel(horizontalLayoutWidget);
        txt_NPA4->setObjectName(QStringLiteral("txt_NPA4"));
        sizePolicy.setHeightForWidth(txt_NPA4->sizePolicy().hasHeightForWidth());
        txt_NPA4->setSizePolicy(sizePolicy);
        txt_NPA4->setMinimumSize(QSize(30, 30));

        NPA4_layout->addWidget(txt_NPA4);


        verticalLayout_2->addLayout(NPA4_layout);

        NPA5_layout = new QHBoxLayout();
        NPA5_layout->setSpacing(6);
        NPA5_layout->setObjectName(QStringLiteral("NPA5_layout"));
        NPA5_label = new QLabel(horizontalLayoutWidget);
        NPA5_label->setObjectName(QStringLiteral("NPA5_label"));
        sizePolicy.setHeightForWidth(NPA5_label->sizePolicy().hasHeightForWidth());
        NPA5_label->setSizePolicy(sizePolicy);

        NPA5_layout->addWidget(NPA5_label);

        txt_NPA5 = new QLabel(horizontalLayoutWidget);
        txt_NPA5->setObjectName(QStringLiteral("txt_NPA5"));
        sizePolicy.setHeightForWidth(txt_NPA5->sizePolicy().hasHeightForWidth());
        txt_NPA5->setSizePolicy(sizePolicy);
        txt_NPA5->setMinimumSize(QSize(30, 30));

        NPA5_layout->addWidget(txt_NPA5);


        verticalLayout_2->addLayout(NPA5_layout);

        NPA6_layout = new QHBoxLayout();
        NPA6_layout->setSpacing(6);
        NPA6_layout->setObjectName(QStringLiteral("NPA6_layout"));
        NPA6_label = new QLabel(horizontalLayoutWidget);
        NPA6_label->setObjectName(QStringLiteral("NPA6_label"));
        sizePolicy.setHeightForWidth(NPA6_label->sizePolicy().hasHeightForWidth());
        NPA6_label->setSizePolicy(sizePolicy);

        NPA6_layout->addWidget(NPA6_label);

        txt_NPA6 = new QLabel(horizontalLayoutWidget);
        txt_NPA6->setObjectName(QStringLiteral("txt_NPA6"));
        sizePolicy.setHeightForWidth(txt_NPA6->sizePolicy().hasHeightForWidth());
        txt_NPA6->setSizePolicy(sizePolicy);
        txt_NPA6->setMinimumSize(QSize(30, 30));

        NPA6_layout->addWidget(txt_NPA6);


        verticalLayout_2->addLayout(NPA6_layout);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        NPA7_layout = new QHBoxLayout();
        NPA7_layout->setSpacing(6);
        NPA7_layout->setObjectName(QStringLiteral("NPA7_layout"));
        NPa7_label = new QLabel(horizontalLayoutWidget);
        NPa7_label->setObjectName(QStringLiteral("NPa7_label"));
        sizePolicy.setHeightForWidth(NPa7_label->sizePolicy().hasHeightForWidth());
        NPa7_label->setSizePolicy(sizePolicy);

        NPA7_layout->addWidget(NPa7_label);

        txt_NPA7 = new QLabel(horizontalLayoutWidget);
        txt_NPA7->setObjectName(QStringLiteral("txt_NPA7"));
        sizePolicy.setHeightForWidth(txt_NPA7->sizePolicy().hasHeightForWidth());
        txt_NPA7->setSizePolicy(sizePolicy);
        txt_NPA7->setMinimumSize(QSize(30, 30));

        NPA7_layout->addWidget(txt_NPA7);


        verticalLayout_3->addLayout(NPA7_layout);

        NPA8_layout = new QHBoxLayout();
        NPA8_layout->setSpacing(6);
        NPA8_layout->setObjectName(QStringLiteral("NPA8_layout"));
        NPA8_label = new QLabel(horizontalLayoutWidget);
        NPA8_label->setObjectName(QStringLiteral("NPA8_label"));
        sizePolicy.setHeightForWidth(NPA8_label->sizePolicy().hasHeightForWidth());
        NPA8_label->setSizePolicy(sizePolicy);

        NPA8_layout->addWidget(NPA8_label);

        txt_NPA8 = new QLabel(horizontalLayoutWidget);
        txt_NPA8->setObjectName(QStringLiteral("txt_NPA8"));
        sizePolicy.setHeightForWidth(txt_NPA8->sizePolicy().hasHeightForWidth());
        txt_NPA8->setSizePolicy(sizePolicy);
        txt_NPA8->setMinimumSize(QSize(30, 30));

        NPA8_layout->addWidget(txt_NPA8);


        verticalLayout_3->addLayout(NPA8_layout);

        NPA9_layout = new QHBoxLayout();
        NPA9_layout->setSpacing(6);
        NPA9_layout->setObjectName(QStringLiteral("NPA9_layout"));
        NPA9_label = new QLabel(horizontalLayoutWidget);
        NPA9_label->setObjectName(QStringLiteral("NPA9_label"));
        sizePolicy.setHeightForWidth(NPA9_label->sizePolicy().hasHeightForWidth());
        NPA9_label->setSizePolicy(sizePolicy);

        NPA9_layout->addWidget(NPA9_label);

        txt_NPA9 = new QLabel(horizontalLayoutWidget);
        txt_NPA9->setObjectName(QStringLiteral("txt_NPA9"));
        sizePolicy.setHeightForWidth(txt_NPA9->sizePolicy().hasHeightForWidth());
        txt_NPA9->setSizePolicy(sizePolicy);
        txt_NPA9->setMinimumSize(QSize(30, 30));

        NPA9_layout->addWidget(txt_NPA9);


        verticalLayout_3->addLayout(NPA9_layout);

        NPA10_layout = new QHBoxLayout();
        NPA10_layout->setSpacing(6);
        NPA10_layout->setObjectName(QStringLiteral("NPA10_layout"));
        NPA10_label = new QLabel(horizontalLayoutWidget);
        NPA10_label->setObjectName(QStringLiteral("NPA10_label"));
        sizePolicy.setHeightForWidth(NPA10_label->sizePolicy().hasHeightForWidth());
        NPA10_label->setSizePolicy(sizePolicy);

        NPA10_layout->addWidget(NPA10_label);

        txt_NPA10 = new QLabel(horizontalLayoutWidget);
        txt_NPA10->setObjectName(QStringLiteral("txt_NPA10"));
        sizePolicy.setHeightForWidth(txt_NPA10->sizePolicy().hasHeightForWidth());
        txt_NPA10->setSizePolicy(sizePolicy);
        txt_NPA10->setMinimumSize(QSize(30, 30));

        NPA10_layout->addWidget(txt_NPA10);


        verticalLayout_3->addLayout(NPA10_layout);

        NPA11_layout = new QHBoxLayout();
        NPA11_layout->setSpacing(6);
        NPA11_layout->setObjectName(QStringLiteral("NPA11_layout"));
        NPA11_label = new QLabel(horizontalLayoutWidget);
        NPA11_label->setObjectName(QStringLiteral("NPA11_label"));
        sizePolicy.setHeightForWidth(NPA11_label->sizePolicy().hasHeightForWidth());
        NPA11_label->setSizePolicy(sizePolicy);

        NPA11_layout->addWidget(NPA11_label);

        txt_NPA11 = new QLabel(horizontalLayoutWidget);
        txt_NPA11->setObjectName(QStringLiteral("txt_NPA11"));
        sizePolicy.setHeightForWidth(txt_NPA11->sizePolicy().hasHeightForWidth());
        txt_NPA11->setSizePolicy(sizePolicy);
        txt_NPA11->setMinimumSize(QSize(30, 30));

        NPA11_layout->addWidget(txt_NPA11);


        verticalLayout_3->addLayout(NPA11_layout);

        NPA12_layout = new QHBoxLayout();
        NPA12_layout->setSpacing(6);
        NPA12_layout->setObjectName(QStringLiteral("NPA12_layout"));
        label_17 = new QLabel(horizontalLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        NPA12_layout->addWidget(label_17);

        txt_NPA12 = new QLabel(horizontalLayoutWidget);
        txt_NPA12->setObjectName(QStringLiteral("txt_NPA12"));
        sizePolicy.setHeightForWidth(txt_NPA12->sizePolicy().hasHeightForWidth());
        txt_NPA12->setSizePolicy(sizePolicy);
        txt_NPA12->setMinimumSize(QSize(30, 30));

        NPA12_layout->addWidget(txt_NPA12);


        verticalLayout_3->addLayout(NPA12_layout);


        horizontalLayout_6->addLayout(verticalLayout_3);

        menuBar = new QMenuBar(manageAnimal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1014, 24));
        menucuACS = new QMenu(menuBar);
        menucuACS->setObjectName(QStringLiteral("menucuACS"));
        mainToolBar = new QToolBar(manageAnimal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 8, 17));
        statusBar = new QStatusBar(manageAnimal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 24));

        menuBar->addAction(menucuACS->menuAction());

        retranslateUi(manageAnimal);

        QMetaObject::connectSlotsByName(manageAnimal);
    } // setupUi

    void retranslateUi(QDialog *manageAnimal)
    {
        manageAnimal->setWindowTitle(QApplication::translate("manageAnimal", "Manage Animals", Q_NULLPTR));
        addAnimalbtn->setText(QApplication::translate("manageAnimal", "Add New Animal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = animalView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manageAnimal", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = animalView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("manageAnimal", "Species", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = animalView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("manageAnimal", "Breed", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("manageAnimal", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("manageAnimal", "Name", Q_NULLPTR));
        txt_Name->setText(QString());
        species_label->setText(QApplication::translate("manageAnimal", "Species", Q_NULLPTR));
        txt_Species->setText(QString());
        breed_label->setText(QApplication::translate("manageAnimal", "Breed", Q_NULLPTR));
        txt_Breed->setText(QString());
        sex_label->setText(QApplication::translate("manageAnimal", "Sex", Q_NULLPTR));
        txt_Sex->setText(QString());
        age_label->setText(QApplication::translate("manageAnimal", "Age", Q_NULLPTR));
        txt_Age->setText(QString());
        NPA1_label->setText(QApplication::translate("manageAnimal", "charisma", Q_NULLPTR));
        txt_NPA1->setText(QString());
        NPA2_label->setText(QApplication::translate("manageAnimal", "curiosity", Q_NULLPTR));
        txt_NPA2->setText(QString());
        NPA3_label->setText(QApplication::translate("manageAnimal", "energetic", Q_NULLPTR));
        txt_NPA3->setText(QString());
        NPA4_label->setText(QApplication::translate("manageAnimal", "hygiene", Q_NULLPTR));
        txt_NPA4->setText(QString());
        NPA5_label->setText(QApplication::translate("manageAnimal", "independance", Q_NULLPTR));
        txt_NPA5->setText(QString());
        NPA6_label->setText(QApplication::translate("manageAnimal", "intelligence", Q_NULLPTR));
        txt_NPA6->setText(QString());
        NPa7_label->setText(QApplication::translate("manageAnimal", "obidience", Q_NULLPTR));
        txt_NPA7->setText(QString());
        NPA8_label->setText(QApplication::translate("manageAnimal", "palate", Q_NULLPTR));
        txt_NPA8->setText(QString());
        NPA9_label->setText(QApplication::translate("manageAnimal", "patience", Q_NULLPTR));
        txt_NPA9->setText(QString());
        NPA10_label->setText(QApplication::translate("manageAnimal", "playful", Q_NULLPTR));
        txt_NPA10->setText(QString());
        NPA11_label->setText(QApplication::translate("manageAnimal", "social", Q_NULLPTR));
        txt_NPA11->setText(QString());
        label_17->setText(QApplication::translate("manageAnimal", "vocal", Q_NULLPTR));
        txt_NPA12->setText(QString());
        menucuACS->setTitle(QApplication::translate("manageAnimal", "cuACS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manageAnimal: public Ui_manageAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEANIMAL_H
