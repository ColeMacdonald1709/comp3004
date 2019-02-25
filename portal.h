#ifndef PORTAL_H
#define PORTAL_H

#include <QDialog>

namespace Ui {
class Portal;
}

class Portal : public QDialog
{
    Q_OBJECT

public:
    explicit Portal(QWidget *parent = 0);
    ~Portal();

private:
    Ui::Portal *ui;
};

#endif // PORTAL_H
