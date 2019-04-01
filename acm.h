#ifndef ACM_H
#define ACM_H

#include "client.h"
#include "animal.h"
#include "dbserver.h"

using namespace std;
enum Rule {strong,good,fair,poor};

class Edge
{
public:
    Edge(Animal*,Client*,float);
    ~Edge();
    void set_edge(float);
private:
    Animal* animal;
    Client* client;
    float weight;
};

class Graph
{
public:
    Graph(vector<Animal*>*,vector<Client*>);
    ~Graph();
    void add_animal(Animal*);
    void add_client(Client*);
    void remove_animal(Animal*);
    void remove_client(Client*);
    vector<Animal*>* get_animals();
    vector<Client*>* get_clients();
    void add_edge(Animal*,Client*,float);
    void remove_edge(Animal*,Client*);
    void set_edge_weight(Animal*,Client*,float);
private:
    vector<Animal*> animals;
    vector<Client*> clients;
    vector<Edge*> edges;
};

class ACM
{
public:
    ACM(Rule);
    ~ACM();
    bool compute_edge(Animal*,Client*,Rule,Edge*);
    void label();
    void search_new();
    void update_labels();
    void augment_matches(Animal*);
private:
    Graph* g;
    Graph* m;
    Graph* s;
    Graph* t;
    Rule r;
};
#endif // ACM_H
