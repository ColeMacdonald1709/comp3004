#ifndef ACM_H
#define ACM_H

#include <algorithm>
#include <set>
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
    Graph(set<Animal*>*,set<Client*>*);
    ~Graph();
    void add_animal(Animal*);
    void add_client(Client*);
    void remove_animal(Animal*);
    void remove_client(Client*);
    set<Animal*>* get_animals();
    set<Client*>* get_clients();
    void add_edge(Animal*,Client*,float);
    void remove_edge(Animal*,Client*);
    void set_edge_weight(Animal*,Client*,float);
    void clear();
    float get_edge_weight(Animal*,Client*);
private:
    set<Animal*>* animals;
    set<Client*>* clients;
    set<Edge*>* edges;
};

class ACM
{
public:
    ACM(DBServer*,UIServer*);
    ACM(Rule);
    ~ACM();
    bool compute_edge(Animal*,Client*,Edge*);
    void label();
    void search_new();
    void update_labels();
    void augment_matches(Animal*);
    void changeRule(Rule);
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
