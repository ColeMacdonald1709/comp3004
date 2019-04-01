#include "acm.h"
#include <math.h>

ACM::ACM(Rule rule)
{
    //contact db to get array of animal pointers
    vector<Animal*>* a = new vector<Animal*>();
    vector<Animal*>* a_empty = new vector<Animal*>();
    //contact db to get array of client pointers
    vector<Client*>* c = new vector<Client*>();
    vector<Client*>* c_empty = new vector<Client*>();
    ACM::g = new Graph(a,c);
    ACM::m = new Graph(a_empty,c_empty);
    ACM::s = new Graph(a_empty,c_empty);
    ACM::t = new Graph(a_empty,c_empty);
    ACM::r = rule;
}
ACM::~ACM()
{
    delete ACM::g;
    delete ACM::m;
    delete ACM::s;
    delete ACM::t;
}
bool ACM::compute_edge(Animal* a, Client*c, Edge* e)
{
    float e_curr = 0.0f;
    float edge = 0.0f;
    bool E_match = false;
    if(r == strong){
        bool PA_match =
            (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
            (a->getPAttr()->at(1) == c->getInfo()->at(1)) &&
            (a->getPAttr()->at(2) == c->getInfo()->at(2)) &&
            (a->getPAttr()->at(3) == c->getInfo()->at(3));
        for(int idx=0; idx < a->getNPAttr()->size(); idx++){
            float a_NPA = a->getNPAttr()->at(idx).toFloat();
            float c_NPA = c->getPrefs()->at(idx).toFloat();
            e_curr = (float)fabs(a_NPA - c_NPA);
            if(e_curr < 1.0f){edge += 1.0f;}
        }
        edge /= 5.0f;
        edge = 12.0f - edge;
        if(edge > 7.0f){E_match = true;}
    }else if(r == good){
        bool PA_match =
            (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
            (a->getPAttr()->at(2) == c->getInfo()->at(2)) &&
            (a->getPAttr()->at(3) == c->getInfo()->at(3));
        for(int idx=0; idx < a->getNPAttr()->size(); idx++){
            float a_NPA = a->getNPAttr()->at(idx).toFloat();
            float c_NPA = c->getPrefs()->at(idx).toFloat();
            e_curr = (float)fabs(a_NPA - c_NPA);
            if(e_curr < 2.0f){edge += 1.0f;}
        }
        edge /= 5.0f;
        edge = 12.0f - edge;
        if(edge > 6.0f){E_match = true;}
    }else if(r == fair){
        bool PA_match =
            (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
            (a->getPAttr()->at(2) == c->getInfo()->at(2));
        for(int idx=0; idx < a->getNPAttr()->size(); idx++){
            float a_NPA = a->getNPAttr()->at(idx).toFloat();
            float c_NPA = c->getPrefs()->at(idx).toFloat();
            e_curr = (float)fabs(a_NPA - c_NPA);
            if(e_curr < 3.0f){edge += 1.0f;}
        }
        edge /= 5.0f;
        edge = 12.0f - edge;
        if(edge > 5.0f){E_match = true;}
    }else if(r == poor){
        bool PA_match = (a->getPAttr()->at(0) == c->getInfo()->at(0));
        for(int idx=0; idx < a->getNPAttr()->size(); idx++){
            float a_NPA = a->getNPAttr()->at(idx).toFloat();
            float c_NPA = c->getPrefs()->at(idx).toFloat();
            e_curr = (float)fabs(a_NPA - c_NPA);
            if(e_curr < 4.0f){edge += 1.0f;}
        }
        edge /= 5.0f;
        edge = 12.0f - edge;
        if(edge > 4.0f){E_match = true;}
    }
    e->set_edge(edge);
    return E_match && PA_match;
}
void ACM::label()
{
    for(vector<Client*>::size_type i=0; i!=ACM::g->get_clients().size(); i++) {
        Client* curr_c = &(ACM::g->get_clients()->at(i));
        //curr_c->set_label(0);
        vector<Edge> edges;
        for(vector<Animal*>::size_type j=0; j!=ACM::g->get_animals()->size; j++){
            Animal* curr_a = &(ACM::g->get_animals()->at(j));
            Edge new_edge;
            if(ACM::compute_edge(curr_a, curr_c, new_edge)){
                edges.push_back(new_edge);
                //curr_a->add_neighbour(curr_c);
                //curr_c->add_neighbour(max_edge.animal);
            }
        }
        if(edges.size()>0){
            Edge max_edge = edges.at(0);
            for(vector<Edge>::size_type idx=0; idx!=edges.size(); idx++){
                if(edges.at(idx).weight > max_edge.weight){
                    max_edge = edges.at(idx);
                }
            }
            //max_edge.animal->set_label(max_edge.weight);
            ACM::m->add_edge(curr_a, curr_c, max_edge.weight);
        }
    }
}
void ACM::search_new()
{

}
void ACM::update_labels()
{

}
void ACM::augment_matches(Animal* a)
{

}

Graph::Graph(vector<Animal*>* a, vector<Client*>* c)
{
    Graph::animals = a;
    Graph::clients = c;
    Graph::edges = new vector<Edge*>();
}
Graph::~Graph()
{
    delete animals;
    delete clients;
    //iterate and delete???
    delete edges;
}
void Graph::add_animal(Animal* a)
{
    animals.push_back(a);
}
void Graph::add_client(Client* c)
{
    clients.push_back(c);
}
void Graph::remove_animal(Animal* a)
{
    for(vector<Animal*>::size_type i=0; i!= animals.size(); i++){
        if(a->name == animals.at(i)->name){
            animals.remove(animals.at(i));
        }
    }
}
void Graph::remove_client(Client* c)
{
    for(vector<Client*>::size_type i=0; i!= clients.size(); i++){
        if(c->name == clients.at(i)->name){
            clients.remove(clients.at(i));
        }
    }
}
vector<Animal*>* Graph::get_animals()
{
    return &animals;
}
vector<Client*>* Graph::get_clients()
{
    return &clients;
}
void Graph::add_edge(Animal* a, Client* c , float w)
{
    Edge* new_edge = new Edge(a,c,w);
    edges.push_back(new_edge);
}
void Graph::remove_edge(Animal* a, Client* c)
{

    for(vector<Edge*>::size_type i=0; i!= edges.size(); i++){
        if(c->name == edges.at(i)->client->name && a->name == edges.at(i)->animal->name){
            edges.remove(i);
        }
    }
    remove_animal(a);
    remove_client(c);
}
void Graph::set_edge_weight(Animal* a, Client* c, float w)
{
    for(vector<Edge*>::size_type i=0; i!= edges.size(); i++){
        if(c->name == edges.at(i)->client->name && a->name == edges.at(i)->animal->name){
            edges.at(i)->weight = w;
        }
    }
}

Edge::Edge(Animal* a, Client* c, float w)
{
    Edge::animal = a;
    Edge::client = c;
    Edge::weight = w;
}
Edge::~Edge()
{

}
