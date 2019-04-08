/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#ifndef CLIENT_H
#define CLIENT_H

#include <vector>

#include "animal.h"

#include <QString>
#include <QList>

class Animal;

class Client
{
public:
    Client(QString,QString,QString);
    Client(QString, QString, QString, QList<QString>*, QList<QString>*);
    ~Client();
    QString getName() const;
    void changeName(QString);
    QString getPhone();
    void changePhone(QString);
    QString getEmail();
    void changeEmail(QString);
    QList<QString>* getInfo();
    void updateInfo(int,QString);
    QList<QString>* getPrefs();
    void updatePrefs(int,QString);
    //ACM stuff
    float get_label();
    void set_label(float);
    bool empty_neighbour();
    std::vector<Animal*>* get_neighbours();
    bool operator <(Client*) const;
protected:
    QString name;
    QString phone;
    QString email;
    //attributes
    QList<QString>* PAList;
    //animal preferences
    QList<QString>* NPAList;
    //ACM stuff
    float label = 0.0f;
    std::vector<Animal*>* neighbours;
};

#endif // CLIENT_H
