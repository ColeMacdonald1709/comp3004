/********************************************************************************
** Form generated from reading UI file 'acmdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACMDETAILS_H
#define UI_ACMDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ACMDetails
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *cname_label;
    QLabel *aname_label;
    QLabel *txt_clientname;
    QLabel *txt_animalname;
    QLabel *PAtitle_label;
    QLabel *cspecies_label;
    QLabel *aspecies_label;
    QLabel *txt_cspecies;
    QLabel *txt_aspecies;
    QLabel *cbreed_label;
    QLabel *abreed_label;
    QLabel *csex_label;
    QLabel *asex_label;
    QLabel *txt_cbreed;
    QLabel *txt_abreed;
    QLabel *txt_csex;
    QLabel *txt_asex;
    QLabel *cage_label;
    QLabel *aage_label;
    QLabel *txt_cage;
    QLabel *txt_aage;
    QLabel *NPAtitle_label;
    QLabel *NPA1_label;
    QLabel *NPA1_label_2;
    QLabel *txt_NPA1;
    QLabel *txt_NPA1_2;
    QLabel *NPA2_label;
    QLabel *NPA2_label_2;
    QLabel *NPA3_label;
    QLabel *NPA3_label_2;
    QLabel *NPA4_label;
    QLabel *NPA4_label_2;
    QLabel *NPA5_label;
    QLabel *NPA5_label_2;
    QLabel *NPA6_label;
    QLabel *NPA6_label_2;
    QLabel *NPA7_label;
    QLabel *NPA7_label_2;
    QLabel *NPA8_label;
    QLabel *NPA8_label_2;
    QLabel *NPA9_label;
    QLabel *NPA9_label_2;
    QLabel *NPA10_label;
    QLabel *NPA10_label_2;
    QLabel *NPA11_label;
    QLabel *NPA11_label_2;
    QLabel *NPA12_label;
    QLabel *NPA12_label_2;
    QLabel *txt_NPA2;
    QLabel *txt_NPA2_2;
    QLabel *txt_NPA3;
    QLabel *txt_NPA3_2;
    QLabel *txt_NPA4;
    QLabel *txt_NPA4_2;
    QLabel *txt_NPA5;
    QLabel *txt_NPA5_2;
    QLabel *txt_NPA6;
    QLabel *txt_NPA6_2;
    QLabel *txt_NPA7;
    QLabel *txt_NPA7_2;
    QLabel *txt_NPA8;
    QLabel *txt_NPA8_2;
    QLabel *txt_NPA9;
    QLabel *txt_NPA9_2;
    QLabel *txt_NPA10;
    QLabel *txt_NPA10_2;
    QLabel *txt_NPA11;
    QLabel *txt_NPA11_2;
    QLabel *txt_NPA12;
    QLabel *txt_NPA12_2;
    QPushButton *backButton;
    QLabel *ACMTitle;
    QTableWidget *ACMResultsTable;

    void setupUi(QDialog *ACMDetails)
    {
        if (ACMDetails->objectName().isEmpty())
            ACMDetails->setObjectName(QStringLiteral("ACMDetails"));
        ACMDetails->resize(953, 619);
        label = new QLabel(ACMDetails);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(520, 10, 64, 17));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(ACMDetails);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(800, 10, 64, 17));
        label_2->setFont(font);
        cname_label = new QLabel(ACMDetails);
        cname_label->setObjectName(QStringLiteral("cname_label"));
        cname_label->setGeometry(QRect(470, 40, 64, 17));
        aname_label = new QLabel(ACMDetails);
        aname_label->setObjectName(QStringLiteral("aname_label"));
        aname_label->setGeometry(QRect(760, 40, 64, 17));
        txt_clientname = new QLabel(ACMDetails);
        txt_clientname->setObjectName(QStringLiteral("txt_clientname"));
        txt_clientname->setGeometry(QRect(550, 40, 64, 17));
        txt_animalname = new QLabel(ACMDetails);
        txt_animalname->setObjectName(QStringLiteral("txt_animalname"));
        txt_animalname->setGeometry(QRect(830, 40, 64, 17));
        PAtitle_label = new QLabel(ACMDetails);
        PAtitle_label->setObjectName(QStringLiteral("PAtitle_label"));
        PAtitle_label->setGeometry(QRect(640, 70, 141, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        PAtitle_label->setFont(font1);
        cspecies_label = new QLabel(ACMDetails);
        cspecies_label->setObjectName(QStringLiteral("cspecies_label"));
        cspecies_label->setGeometry(QRect(470, 100, 64, 17));
        aspecies_label = new QLabel(ACMDetails);
        aspecies_label->setObjectName(QStringLiteral("aspecies_label"));
        aspecies_label->setGeometry(QRect(760, 100, 64, 17));
        txt_cspecies = new QLabel(ACMDetails);
        txt_cspecies->setObjectName(QStringLiteral("txt_cspecies"));
        txt_cspecies->setGeometry(QRect(550, 100, 64, 17));
        txt_aspecies = new QLabel(ACMDetails);
        txt_aspecies->setObjectName(QStringLiteral("txt_aspecies"));
        txt_aspecies->setGeometry(QRect(840, 100, 64, 17));
        cbreed_label = new QLabel(ACMDetails);
        cbreed_label->setObjectName(QStringLiteral("cbreed_label"));
        cbreed_label->setGeometry(QRect(470, 130, 64, 17));
        abreed_label = new QLabel(ACMDetails);
        abreed_label->setObjectName(QStringLiteral("abreed_label"));
        abreed_label->setGeometry(QRect(760, 130, 64, 17));
        csex_label = new QLabel(ACMDetails);
        csex_label->setObjectName(QStringLiteral("csex_label"));
        csex_label->setGeometry(QRect(470, 160, 64, 17));
        asex_label = new QLabel(ACMDetails);
        asex_label->setObjectName(QStringLiteral("asex_label"));
        asex_label->setGeometry(QRect(760, 160, 64, 17));
        txt_cbreed = new QLabel(ACMDetails);
        txt_cbreed->setObjectName(QStringLiteral("txt_cbreed"));
        txt_cbreed->setGeometry(QRect(550, 130, 64, 17));
        txt_abreed = new QLabel(ACMDetails);
        txt_abreed->setObjectName(QStringLiteral("txt_abreed"));
        txt_abreed->setGeometry(QRect(840, 130, 64, 17));
        txt_csex = new QLabel(ACMDetails);
        txt_csex->setObjectName(QStringLiteral("txt_csex"));
        txt_csex->setGeometry(QRect(550, 160, 64, 17));
        txt_asex = new QLabel(ACMDetails);
        txt_asex->setObjectName(QStringLiteral("txt_asex"));
        txt_asex->setGeometry(QRect(840, 160, 64, 17));
        cage_label = new QLabel(ACMDetails);
        cage_label->setObjectName(QStringLiteral("cage_label"));
        cage_label->setGeometry(QRect(470, 190, 64, 17));
        aage_label = new QLabel(ACMDetails);
        aage_label->setObjectName(QStringLiteral("aage_label"));
        aage_label->setGeometry(QRect(760, 190, 64, 17));
        txt_cage = new QLabel(ACMDetails);
        txt_cage->setObjectName(QStringLiteral("txt_cage"));
        txt_cage->setGeometry(QRect(550, 190, 64, 17));
        txt_aage = new QLabel(ACMDetails);
        txt_aage->setObjectName(QStringLiteral("txt_aage"));
        txt_aage->setGeometry(QRect(840, 190, 64, 17));
        NPAtitle_label = new QLabel(ACMDetails);
        NPAtitle_label->setObjectName(QStringLiteral("NPAtitle_label"));
        NPAtitle_label->setGeometry(QRect(620, 230, 191, 16));
        NPAtitle_label->setFont(font1);
        NPA1_label = new QLabel(ACMDetails);
        NPA1_label->setObjectName(QStringLiteral("NPA1_label"));
        NPA1_label->setGeometry(QRect(470, 260, 41, 17));
        NPA1_label_2 = new QLabel(ACMDetails);
        NPA1_label_2->setObjectName(QStringLiteral("NPA1_label_2"));
        NPA1_label_2->setGeometry(QRect(760, 260, 41, 17));
        txt_NPA1 = new QLabel(ACMDetails);
        txt_NPA1->setObjectName(QStringLiteral("txt_NPA1"));
        txt_NPA1->setGeometry(QRect(550, 260, 64, 17));
        txt_NPA1_2 = new QLabel(ACMDetails);
        txt_NPA1_2->setObjectName(QStringLiteral("txt_NPA1_2"));
        txt_NPA1_2->setGeometry(QRect(840, 260, 64, 17));
        NPA2_label = new QLabel(ACMDetails);
        NPA2_label->setObjectName(QStringLiteral("NPA2_label"));
        NPA2_label->setGeometry(QRect(470, 290, 41, 17));
        NPA2_label_2 = new QLabel(ACMDetails);
        NPA2_label_2->setObjectName(QStringLiteral("NPA2_label_2"));
        NPA2_label_2->setGeometry(QRect(760, 290, 41, 17));
        NPA3_label = new QLabel(ACMDetails);
        NPA3_label->setObjectName(QStringLiteral("NPA3_label"));
        NPA3_label->setGeometry(QRect(470, 320, 41, 17));
        NPA3_label_2 = new QLabel(ACMDetails);
        NPA3_label_2->setObjectName(QStringLiteral("NPA3_label_2"));
        NPA3_label_2->setGeometry(QRect(760, 320, 41, 17));
        NPA4_label = new QLabel(ACMDetails);
        NPA4_label->setObjectName(QStringLiteral("NPA4_label"));
        NPA4_label->setGeometry(QRect(470, 350, 41, 17));
        NPA4_label_2 = new QLabel(ACMDetails);
        NPA4_label_2->setObjectName(QStringLiteral("NPA4_label_2"));
        NPA4_label_2->setGeometry(QRect(760, 350, 41, 17));
        NPA5_label = new QLabel(ACMDetails);
        NPA5_label->setObjectName(QStringLiteral("NPA5_label"));
        NPA5_label->setGeometry(QRect(470, 380, 41, 17));
        NPA5_label_2 = new QLabel(ACMDetails);
        NPA5_label_2->setObjectName(QStringLiteral("NPA5_label_2"));
        NPA5_label_2->setGeometry(QRect(760, 380, 41, 17));
        NPA6_label = new QLabel(ACMDetails);
        NPA6_label->setObjectName(QStringLiteral("NPA6_label"));
        NPA6_label->setGeometry(QRect(470, 410, 41, 17));
        NPA6_label_2 = new QLabel(ACMDetails);
        NPA6_label_2->setObjectName(QStringLiteral("NPA6_label_2"));
        NPA6_label_2->setGeometry(QRect(760, 410, 41, 17));
        NPA7_label = new QLabel(ACMDetails);
        NPA7_label->setObjectName(QStringLiteral("NPA7_label"));
        NPA7_label->setGeometry(QRect(470, 440, 41, 17));
        NPA7_label_2 = new QLabel(ACMDetails);
        NPA7_label_2->setObjectName(QStringLiteral("NPA7_label_2"));
        NPA7_label_2->setGeometry(QRect(760, 440, 41, 17));
        NPA8_label = new QLabel(ACMDetails);
        NPA8_label->setObjectName(QStringLiteral("NPA8_label"));
        NPA8_label->setGeometry(QRect(470, 470, 41, 17));
        NPA8_label_2 = new QLabel(ACMDetails);
        NPA8_label_2->setObjectName(QStringLiteral("NPA8_label_2"));
        NPA8_label_2->setGeometry(QRect(760, 470, 41, 17));
        NPA9_label = new QLabel(ACMDetails);
        NPA9_label->setObjectName(QStringLiteral("NPA9_label"));
        NPA9_label->setGeometry(QRect(470, 500, 41, 17));
        NPA9_label_2 = new QLabel(ACMDetails);
        NPA9_label_2->setObjectName(QStringLiteral("NPA9_label_2"));
        NPA9_label_2->setGeometry(QRect(760, 500, 41, 17));
        NPA10_label = new QLabel(ACMDetails);
        NPA10_label->setObjectName(QStringLiteral("NPA10_label"));
        NPA10_label->setGeometry(QRect(470, 530, 51, 17));
        NPA10_label_2 = new QLabel(ACMDetails);
        NPA10_label_2->setObjectName(QStringLiteral("NPA10_label_2"));
        NPA10_label_2->setGeometry(QRect(760, 530, 51, 17));
        NPA11_label = new QLabel(ACMDetails);
        NPA11_label->setObjectName(QStringLiteral("NPA11_label"));
        NPA11_label->setGeometry(QRect(470, 560, 51, 17));
        NPA11_label_2 = new QLabel(ACMDetails);
        NPA11_label_2->setObjectName(QStringLiteral("NPA11_label_2"));
        NPA11_label_2->setGeometry(QRect(760, 560, 51, 17));
        NPA12_label = new QLabel(ACMDetails);
        NPA12_label->setObjectName(QStringLiteral("NPA12_label"));
        NPA12_label->setGeometry(QRect(470, 590, 51, 17));
        NPA12_label_2 = new QLabel(ACMDetails);
        NPA12_label_2->setObjectName(QStringLiteral("NPA12_label_2"));
        NPA12_label_2->setGeometry(QRect(760, 590, 51, 17));
        txt_NPA2 = new QLabel(ACMDetails);
        txt_NPA2->setObjectName(QStringLiteral("txt_NPA2"));
        txt_NPA2->setGeometry(QRect(550, 290, 64, 17));
        txt_NPA2_2 = new QLabel(ACMDetails);
        txt_NPA2_2->setObjectName(QStringLiteral("txt_NPA2_2"));
        txt_NPA2_2->setGeometry(QRect(840, 290, 64, 17));
        txt_NPA3 = new QLabel(ACMDetails);
        txt_NPA3->setObjectName(QStringLiteral("txt_NPA3"));
        txt_NPA3->setGeometry(QRect(550, 320, 64, 17));
        txt_NPA3_2 = new QLabel(ACMDetails);
        txt_NPA3_2->setObjectName(QStringLiteral("txt_NPA3_2"));
        txt_NPA3_2->setGeometry(QRect(840, 320, 64, 17));
        txt_NPA4 = new QLabel(ACMDetails);
        txt_NPA4->setObjectName(QStringLiteral("txt_NPA4"));
        txt_NPA4->setGeometry(QRect(550, 350, 64, 17));
        txt_NPA4_2 = new QLabel(ACMDetails);
        txt_NPA4_2->setObjectName(QStringLiteral("txt_NPA4_2"));
        txt_NPA4_2->setGeometry(QRect(840, 350, 64, 16));
        txt_NPA5 = new QLabel(ACMDetails);
        txt_NPA5->setObjectName(QStringLiteral("txt_NPA5"));
        txt_NPA5->setGeometry(QRect(550, 380, 64, 17));
        txt_NPA5_2 = new QLabel(ACMDetails);
        txt_NPA5_2->setObjectName(QStringLiteral("txt_NPA5_2"));
        txt_NPA5_2->setGeometry(QRect(840, 380, 64, 17));
        txt_NPA6 = new QLabel(ACMDetails);
        txt_NPA6->setObjectName(QStringLiteral("txt_NPA6"));
        txt_NPA6->setGeometry(QRect(550, 410, 64, 17));
        txt_NPA6_2 = new QLabel(ACMDetails);
        txt_NPA6_2->setObjectName(QStringLiteral("txt_NPA6_2"));
        txt_NPA6_2->setGeometry(QRect(840, 410, 64, 17));
        txt_NPA7 = new QLabel(ACMDetails);
        txt_NPA7->setObjectName(QStringLiteral("txt_NPA7"));
        txt_NPA7->setGeometry(QRect(550, 440, 64, 17));
        txt_NPA7_2 = new QLabel(ACMDetails);
        txt_NPA7_2->setObjectName(QStringLiteral("txt_NPA7_2"));
        txt_NPA7_2->setGeometry(QRect(840, 440, 64, 17));
        txt_NPA8 = new QLabel(ACMDetails);
        txt_NPA8->setObjectName(QStringLiteral("txt_NPA8"));
        txt_NPA8->setGeometry(QRect(550, 470, 64, 17));
        txt_NPA8_2 = new QLabel(ACMDetails);
        txt_NPA8_2->setObjectName(QStringLiteral("txt_NPA8_2"));
        txt_NPA8_2->setGeometry(QRect(840, 470, 64, 17));
        txt_NPA9 = new QLabel(ACMDetails);
        txt_NPA9->setObjectName(QStringLiteral("txt_NPA9"));
        txt_NPA9->setGeometry(QRect(550, 500, 64, 17));
        txt_NPA9_2 = new QLabel(ACMDetails);
        txt_NPA9_2->setObjectName(QStringLiteral("txt_NPA9_2"));
        txt_NPA9_2->setGeometry(QRect(840, 500, 64, 17));
        txt_NPA10 = new QLabel(ACMDetails);
        txt_NPA10->setObjectName(QStringLiteral("txt_NPA10"));
        txt_NPA10->setGeometry(QRect(550, 530, 64, 17));
        txt_NPA10_2 = new QLabel(ACMDetails);
        txt_NPA10_2->setObjectName(QStringLiteral("txt_NPA10_2"));
        txt_NPA10_2->setGeometry(QRect(840, 530, 64, 17));
        txt_NPA11 = new QLabel(ACMDetails);
        txt_NPA11->setObjectName(QStringLiteral("txt_NPA11"));
        txt_NPA11->setGeometry(QRect(550, 560, 64, 17));
        txt_NPA11_2 = new QLabel(ACMDetails);
        txt_NPA11_2->setObjectName(QStringLiteral("txt_NPA11_2"));
        txt_NPA11_2->setGeometry(QRect(840, 560, 64, 17));
        txt_NPA12 = new QLabel(ACMDetails);
        txt_NPA12->setObjectName(QStringLiteral("txt_NPA12"));
        txt_NPA12->setGeometry(QRect(550, 590, 64, 17));
        txt_NPA12_2 = new QLabel(ACMDetails);
        txt_NPA12_2->setObjectName(QStringLiteral("txt_NPA12_2"));
        txt_NPA12_2->setGeometry(QRect(840, 590, 64, 17));
        backButton = new QPushButton(ACMDetails);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(660, 0, 83, 25));
        ACMTitle = new QLabel(ACMDetails);
        ACMTitle->setObjectName(QStringLiteral("ACMTitle"));
        ACMTitle->setGeometry(QRect(170, 10, 131, 31));
        ACMTitle->setFont(font);
        ACMTitle->setLayoutDirection(Qt::LeftToRight);
        ACMResultsTable = new QTableWidget(ACMDetails);
        if (ACMResultsTable->columnCount() < 3)
            ACMResultsTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ACMResultsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ACMResultsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ACMResultsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        ACMResultsTable->setObjectName(QStringLiteral("ACMResultsTable"));
        ACMResultsTable->setGeometry(QRect(30, 50, 401, 551));

        retranslateUi(ACMDetails);

        QMetaObject::connectSlotsByName(ACMDetails);
    } // setupUi

    void retranslateUi(QDialog *ACMDetails)
    {
        ACMDetails->setWindowTitle(QApplication::translate("ACMDetails", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ACMDetails", "Client", Q_NULLPTR));
        label_2->setText(QApplication::translate("ACMDetails", "Animal", Q_NULLPTR));
        cname_label->setText(QApplication::translate("ACMDetails", "Name", Q_NULLPTR));
        aname_label->setText(QApplication::translate("ACMDetails", "Name", Q_NULLPTR));
        txt_clientname->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_animalname->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        PAtitle_label->setText(QApplication::translate("ACMDetails", "Physical Attributes", Q_NULLPTR));
        cspecies_label->setText(QApplication::translate("ACMDetails", "Species", Q_NULLPTR));
        aspecies_label->setText(QApplication::translate("ACMDetails", "Species", Q_NULLPTR));
        txt_cspecies->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_aspecies->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        cbreed_label->setText(QApplication::translate("ACMDetails", "Breed", Q_NULLPTR));
        abreed_label->setText(QApplication::translate("ACMDetails", "Breed", Q_NULLPTR));
        csex_label->setText(QApplication::translate("ACMDetails", "Sex", Q_NULLPTR));
        asex_label->setText(QApplication::translate("ACMDetails", "Sex", Q_NULLPTR));
        txt_cbreed->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_abreed->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_csex->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_asex->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        cage_label->setText(QApplication::translate("ACMDetails", "Age", Q_NULLPTR));
        aage_label->setText(QApplication::translate("ACMDetails", "Age", Q_NULLPTR));
        txt_cage->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_aage->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        NPAtitle_label->setText(QApplication::translate("ACMDetails", "Non-Physical Attributes", Q_NULLPTR));
        NPA1_label->setText(QApplication::translate("ACMDetails", "NPA1", Q_NULLPTR));
        NPA1_label_2->setText(QApplication::translate("ACMDetails", "NPA1", Q_NULLPTR));
        txt_NPA1->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA1_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        NPA2_label->setText(QApplication::translate("ACMDetails", "NPA2", Q_NULLPTR));
        NPA2_label_2->setText(QApplication::translate("ACMDetails", "NPA2", Q_NULLPTR));
        NPA3_label->setText(QApplication::translate("ACMDetails", "NPA3", Q_NULLPTR));
        NPA3_label_2->setText(QApplication::translate("ACMDetails", "NPA3", Q_NULLPTR));
        NPA4_label->setText(QApplication::translate("ACMDetails", "NPA4", Q_NULLPTR));
        NPA4_label_2->setText(QApplication::translate("ACMDetails", "NPA4", Q_NULLPTR));
        NPA5_label->setText(QApplication::translate("ACMDetails", "NPA5", Q_NULLPTR));
        NPA5_label_2->setText(QApplication::translate("ACMDetails", "NPA5", Q_NULLPTR));
        NPA6_label->setText(QApplication::translate("ACMDetails", "NPA6", Q_NULLPTR));
        NPA6_label_2->setText(QApplication::translate("ACMDetails", "NPA6", Q_NULLPTR));
        NPA7_label->setText(QApplication::translate("ACMDetails", "NPA7", Q_NULLPTR));
        NPA7_label_2->setText(QApplication::translate("ACMDetails", "NPA7", Q_NULLPTR));
        NPA8_label->setText(QApplication::translate("ACMDetails", "NPA8", Q_NULLPTR));
        NPA8_label_2->setText(QApplication::translate("ACMDetails", "NPA8", Q_NULLPTR));
        NPA9_label->setText(QApplication::translate("ACMDetails", "NPA9", Q_NULLPTR));
        NPA9_label_2->setText(QApplication::translate("ACMDetails", "NPA9", Q_NULLPTR));
        NPA10_label->setText(QApplication::translate("ACMDetails", "NPA10", Q_NULLPTR));
        NPA10_label_2->setText(QApplication::translate("ACMDetails", "NPA10", Q_NULLPTR));
        NPA11_label->setText(QApplication::translate("ACMDetails", "NPA11", Q_NULLPTR));
        NPA11_label_2->setText(QApplication::translate("ACMDetails", "NPA11", Q_NULLPTR));
        NPA12_label->setText(QApplication::translate("ACMDetails", "NPA12", Q_NULLPTR));
        NPA12_label_2->setText(QApplication::translate("ACMDetails", "NPA12", Q_NULLPTR));
        txt_NPA2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA2_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA3->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA3_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA4->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA4_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA5->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA5_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA6->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA6_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA7->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA7_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA8->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA8_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA9->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA9_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA10->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA10_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA11->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA11_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA12->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        txt_NPA12_2->setText(QApplication::translate("ACMDetails", "TextLabel", Q_NULLPTR));
        backButton->setText(QApplication::translate("ACMDetails", "Back", Q_NULLPTR));
        ACMTitle->setText(QApplication::translate("ACMDetails", "ACM Results", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = ACMResultsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ACMDetails", "Animal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = ACMResultsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ACMDetails", "Client", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = ACMResultsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ACMDetails", "Match Score", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ACMDetails: public Ui_ACMDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACMDETAILS_H
