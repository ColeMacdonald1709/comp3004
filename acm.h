#ifndef ACM_H
#define ACM_H

#include <algorithm>
#include <vector>
#include <iterator>
#include <math.h>

#include "client.h"
#include "animal.h"
#include "dbserver.h"
#include "uiserver.h"

using namespace std;
enum Rule {strong,good,fair,poor};

class Edge
{
public:
    Edge(Animal*,Client*,float);
    ~Edge();
    void set_edge_weight(float);
    void set_animal(Animal*);
    void set_client(Client*);
    float get_edge_weight();
    Animal* get_animal();
    Client* get_client();
private:
    Animal* animal;
    Client* client;
    float weight;
};

class Graph
{
public:
    Graph(vector<Animal*>*,vector<Client*>*);
    ~Graph();
    void add_animal(Animal*);
    void add_client(Client*);
    void remove_animal(Animal*);
    void remove_client(Client*);
    vector<Animal*>* get_animals();
    vector<Client*>* get_clients();
    vector<Edge*>* get_edges();
    void add_edge(Animal*,Client*,float);
    void remove_edge(Animal*,Client*);
    void set_edge_weight(Animal*,Client*,float);
    void clear();
    float get_edge_weight(Animal*,Client*);
    bool contains(Animal*,Client*);
private:
    vector<Animal*>* animals;
    vector<Client*>* clients;
    vector<Edge*>* edges;
};

class ACM
{
public:
    ACM(DBServer*,UIServer*);
    ACM(Rule);
    ~ACM();
    bool compute_edge(Animal*,Client*,float&);
    void label();
    void search_new();
    void update_labels();
    void augment_matches(Animal*);
    void changeRule(Rule);
    Graph* get_m();
    void get_attributes(QString, QString, QList<QString>*, QList<QString>*, QList<QString>*, QList<QString>*);
private:
    DBServer* db;
    UIServer* ui;
    Graph* g;
    Graph* m;
    Graph* s;
    Graph* t;
    Rule r;
};
#endif // ACM_H
