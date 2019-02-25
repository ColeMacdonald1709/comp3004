#include "client.h"

Client::Client(QString n, QString p, QString e)
{
    name = n;
    phone = p;
    email = e;
    personalInfo = new QList<QString>();
    preferences = new QList<QString>();
}
Client::Client(QString n, QString p, QString e, QList<QString>* info, QList<QString>* prefs)
{
    name = n;
    phone = p;
    email = e;
    personalInfo = info;
    preferences = prefs;
}
Client::~Client(){
    delete personalInfo;
    delete preferences;
}
QString Client::getName(){return name;}
void Client::changeName(QString newname){name = newname;}

QString Client::getPhone(){return phone;}
void Client::changePhone(QString newphone){phone = newphone;}

QString Client::getEmail(){return email;}
void Client::changeEmail(QString newemail){email = newemail;}

QList<QString>* Client::getInfo(){return personalInfo;}
void Client::updateInfo(int idx,QString value){personalInfo->value(idx,value);}

QList<QString>* Client::getPrefs(){return preferences;}
void Client::updatePrefs(int idx,QString value){preferences->value(idx,value);}
