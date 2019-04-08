/**
COMP3004A/B W19 - Project Deliverable 3 - Team R4V3N$
Dennis Kuipers  101033098
Cole Macdonald	101013458
Ian Sloan 		101021039
**/

#include "client.h"

Client::Client(QString n, QString p, QString e)
{
    name = n;
    phone = p;
    email = e;
    PAList = new QList<QString>();
    PAList->append("Dog");
    PAList->append("NULL");
    PAList->append("Male");
    PAList->append("Baby");
    NPAList = new QList<QString>();
    for (int i=0;i<13;i++)
        NPAList->append("1");
    neighbours = new std::vector<Animal*>();
}
Client::Client(QString n, QString p, QString e, QList<QString>* info, QList<QString>* prefs)
{
    name = n;
    phone = p;
    email = e;
    //physical attributes
    PAList = info;
    //non-physical attributes
    NPAList = prefs;
    neighbours = new std::vector<Animal*>();
}
Client::~Client(){
    delete PAList;
    delete NPAList;
    delete neighbours;
}
QString Client::getName()const{return name;}
void Client::changeName(QString newname){name = newname;}

QString Client::getPhone(){return phone;}
void Client::changePhone(QString newphone){phone = newphone;}

QString Client::getEmail(){return email;}
void Client::changeEmail(QString newemail){email = newemail;}

QList<QString>* Client::getInfo(){return PAList;}
void Client::updateInfo(int idx,QString value){PAList->value(idx,value);}

QList<QString>* Client::getPrefs(){return NPAList;}
void Client::updatePrefs(int idx,QString value){NPAList->value(idx,value);}

//ACM stuff
void Client::set_label(float l)
{
    Client::label = l;
}
float Client::get_label()
{
    return Client::label;
}
bool Client::empty_neighbour()
{
    return neighbours->size()>0;
}
std::vector<Animal*>* Client::get_neighbours()
{
    return neighbours;
}
bool Client::operator<(Client* other) const
{
    return (this->name < other->name);
}
