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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageAnimal
{
public:
    QWidget *centralWidget;
    QPushButton *addAnimalbtn;
    QTableWidget *animalView;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *txt_NPA1;
    QLineEdit *txt_NPA2;
    QLineEdit *txt_NPA3;
    QLineEdit *txt_NPA4;
    QLineEdit *txt_NPA5;
    QLineEdit *txt_NPA6;
    QLineEdit *txt_NPA7;
    QLineEdit *txt_NPA8;
    QLineEdit *txt_NPA9;
    QLineEdit *txt_NPA10;
    QLineEdit *txt_NPA11;
    QLineEdit *txt_NPA12;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_Name;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_Species;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_Breed;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_Sex;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_Age;
    QMenuBar *menuBar;
    QMenu *menucuACS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *manageAnimal)
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
        addAnimalbtn = new QPushButton(centralWidget);
        addAnimalbtn->setObjectName(QStringLiteral("addAnimalbtn"));
        addAnimalbtn->setGeometry(QRect(70, 30, 161, 51));
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
        animalView->horizontalHeader()->setVisible(true);
        animalView->horizontalHeader()->setCascadingSectionResizes(false);
        animalView->horizontalHeader()->setDefaultSectionSize(150);
        animalView->horizontalHeader()->setHighlightSections(true);
        animalView->horizontalHeader()->setMinimumSectionSize(150);
        animalView->verticalHeader()->setMinimumSectionSize(20);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(560, 40, 391, 611));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 64, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 250, 64, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 280, 64, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 310, 64, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 340, 64, 17));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 370, 64, 17));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 220, 64, 17));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(200, 250, 64, 17));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(200, 280, 64, 17));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(200, 310, 64, 17));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(200, 340, 64, 17));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(200, 370, 64, 17));
        txt_NPA1 = new QLineEdit(groupBox);
        txt_NPA1->setObjectName(QStringLiteral("txt_NPA1"));
        txt_NPA1->setGeometry(QRect(70, 210, 21, 25));
        txt_NPA2 = new QLineEdit(groupBox);
        txt_NPA2->setObjectName(QStringLiteral("txt_NPA2"));
        txt_NPA2->setGeometry(QRect(70, 240, 21, 25));
        txt_NPA3 = new QLineEdit(groupBox);
        txt_NPA3->setObjectName(QStringLiteral("txt_NPA3"));
        txt_NPA3->setGeometry(QRect(70, 270, 21, 25));
        txt_NPA4 = new QLineEdit(groupBox);
        txt_NPA4->setObjectName(QStringLiteral("txt_NPA4"));
        txt_NPA4->setGeometry(QRect(70, 300, 21, 25));
        txt_NPA5 = new QLineEdit(groupBox);
        txt_NPA5->setObjectName(QStringLiteral("txt_NPA5"));
        txt_NPA5->setGeometry(QRect(70, 330, 21, 25));
        txt_NPA6 = new QLineEdit(groupBox);
        txt_NPA6->setObjectName(QStringLiteral("txt_NPA6"));
        txt_NPA6->setGeometry(QRect(70, 360, 21, 25));
        txt_NPA7 = new QLineEdit(groupBox);
        txt_NPA7->setObjectName(QStringLiteral("txt_NPA7"));
        txt_NPA7->setGeometry(QRect(270, 210, 21, 25));
        txt_NPA8 = new QLineEdit(groupBox);
        txt_NPA8->setObjectName(QStringLiteral("txt_NPA8"));
        txt_NPA8->setGeometry(QRect(270, 240, 21, 25));
        txt_NPA9 = new QLineEdit(groupBox);
        txt_NPA9->setObjectName(QStringLiteral("txt_NPA9"));
        txt_NPA9->setGeometry(QRect(270, 270, 21, 25));
        txt_NPA10 = new QLineEdit(groupBox);
        txt_NPA10->setObjectName(QStringLiteral("txt_NPA10"));
        txt_NPA10->setGeometry(QRect(270, 300, 21, 25));
        txt_NPA11 = new QLineEdit(groupBox);
        txt_NPA11->setObjectName(QStringLiteral("txt_NPA11"));
        txt_NPA11->setGeometry(QRect(270, 330, 21, 25));
        txt_NPA12 = new QLineEdit(groupBox);
        txt_NPA12->setObjectName(QStringLiteral("txt_NPA12"));
        txt_NPA12->setGeometry(QRect(270, 360, 21, 25));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 311, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_Name = new QLineEdit(widget);
        txt_Name->setObjectName(QStringLiteral("txt_Name"));

        horizontalLayout->addWidget(txt_Name);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 60, 311, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_Species = new QLineEdit(widget1);
        txt_Species->setObjectName(QStringLiteral("txt_Species"));

        horizontalLayout_2->addWidget(txt_Species);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 90, 311, 29));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_Breed = new QLineEdit(widget2);
        txt_Breed->setObjectName(QStringLiteral("txt_Breed"));

        horizontalLayout_3->addWidget(txt_Breed);

        widget3 = new QWidget(groupBox);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(20, 120, 311, 29));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_Sex = new QLineEdit(widget3);
        txt_Sex->setObjectName(QStringLiteral("txt_Sex"));

        horizontalLayout_4->addWidget(txt_Sex);

        widget4 = new QWidget(groupBox);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(20, 150, 171, 29));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        txt_Age = new QLineEdit(widget4);
        txt_Age->setObjectName(QStringLiteral("txt_Age"));

        horizontalLayout_5->addWidget(txt_Age);

        manageAnimal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(manageAnimal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1014, 24));
        menucuACS = new QMenu(menuBar);
        menucuACS->setObjectName(QStringLiteral("menucuACS"));
        manageAnimal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(manageAnimal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        manageAnimal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(manageAnimal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        manageAnimal->setStatusBar(statusBar);

        menuBar->addAction(menucuACS->menuAction());

        retranslateUi(manageAnimal);

        QMetaObject::connectSlotsByName(manageAnimal);
    } // setupUi

    void retranslateUi(QMainWindow *manageAnimal)
    {
        manageAnimal->setWindowTitle(QApplication::translate("manageAnimal", "Manage Animals", Q_NULLPTR));
        addAnimalbtn->setText(QApplication::translate("manageAnimal", "Add New Animal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = animalView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manageAnimal", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = animalView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("manageAnimal", "Species", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = animalView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("manageAnimal", "Breed", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("manageAnimal", "Details", Q_NULLPTR));
        label_6->setText(QApplication::translate("manageAnimal", "NPA1", Q_NULLPTR));
        label_7->setText(QApplication::translate("manageAnimal", "NPA2", Q_NULLPTR));
        label_8->setText(QApplication::translate("manageAnimal", "NPA3", Q_NULLPTR));
        label_9->setText(QApplication::translate("manageAnimal", "NPA4", Q_NULLPTR));
        label_10->setText(QApplication::translate("manageAnimal", "NPA5", Q_NULLPTR));
        label_11->setText(QApplication::translate("manageAnimal", "NPA6", Q_NULLPTR));
        label_12->setText(QApplication::translate("manageAnimal", "NPA7", Q_NULLPTR));
        label_13->setText(QApplication::translate("manageAnimal", "NPA8", Q_NULLPTR));
        label_14->setText(QApplication::translate("manageAnimal", "NPA9", Q_NULLPTR));
        label_15->setText(QApplication::translate("manageAnimal", "NPA10", Q_NULLPTR));
        label_16->setText(QApplication::translate("manageAnimal", "NPA11", Q_NULLPTR));
        label_17->setText(QApplication::translate("manageAnimal", "NPA12", Q_NULLPTR));
        label->setText(QApplication::translate("manageAnimal", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("manageAnimal", "Species", Q_NULLPTR));
        label_3->setText(QApplication::translate("manageAnimal", "Breed", Q_NULLPTR));
        label_4->setText(QApplication::translate("manageAnimal", "Sex", Q_NULLPTR));
        label_5->setText(QApplication::translate("manageAnimal", "Age", Q_NULLPTR));
        menucuACS->setTitle(QApplication::translate("manageAnimal", "cuACS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manageAnimal: public Ui_manageAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEANIMAL_H
