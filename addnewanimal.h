#ifndef ADDNEWANIMAL_H
#define ADDNEWANIMAL_H

#include <QDialog>

namespace Ui {
class addNewAnimal;
}

class addNewAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit addNewAnimal(QWidget *parent = 0);
    ~addNewAnimal();

private slots:
    void on_radDog_clicked(bool checked);
    void on_radCat_clicked(bool checked);
    void on_radRabbit_clicked(bool checked);
    void on_radBird_clicked(bool checked);
    void on_radFish_clicked(bool checked);


    void on_cancelbtn_clicked();

private:
    Ui::addNewAnimal *ui;
};

#endif // ADDNEWANIMAL_H
