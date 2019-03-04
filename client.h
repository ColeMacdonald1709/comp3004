/**
COMP3004A/B W19 - Project Deliverable 2 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/
#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QList>

class Client
{
public:
    Client(QString,QString,QString);
    Client(QString, QString, QString, QList<QString>*, QList<QString>*);
    ~Client();
    QString getName();
    void changeName(QString);
    QString getPhone();
    void changePhone(QString);
    QString getEmail();
    void changeEmail(QString);
    QList<QString>* getInfo();
    void updateInfo(int,QString);
    QList<QString>* getPrefs();
    void updatePrefs(int,QString);

protected:
    QString name;
    QString phone;
    QString email;
    //attributes
    QList<QString>* personalInfo;
    //animal preferences
    QList<QString>* preferences;
};

#endif // CLIENT_H
