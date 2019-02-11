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
//some problem with these
private slots:
    void on_cancelbtn_clicked();
    void on_addAnimalbtn_clicked();

private:
    Ui::addNewAnimal *ui;
};

#endif // ADDNEWANIMAL_H
