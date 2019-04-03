#include "acm.h"
#include <math.h>

ACM::ACM(DBServer* dbs, UIServer* uis)
{
    db = dbs;
    ui = uis;
}
ACM::ACM(Rule rule)
{
    set<Animal*>* a = new set<Animal*>();
    set<Animal*>* a_empty = new set<Animal*>();
    for(int i=0; i<db->animals->size(); i++){a->insert(db->animals->at(i));}

    set<Client*>* c = new set<Client*>();
    set<Client*>* c_empty = new set<Client*>();
    for(int i=0; i<db->clients->size(); i++){c->insert(db->clients->at(i);)}

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
    e->set_edge_weight(edge);
    return E_match && PA_match;
}
void ACM::label()
{
    for(set<Client*>::iterator i=ACM::g->clients.begin(); i!=ACM::g->clients.end(); ++i) {
        Client* curr_c = (*i);
        curr_c->set_label(0.0);
        set<Edge*> edges;
        for(set<Animal*>::iterator j=ACM::g->animals.begin(); j!=ACM::g->animals.end(); ++j){
            Animal* curr_a =(*j);
            Edge* new_edge;
            if(ACM::compute_edge(curr_a, curr_c, new_edge)){
                ACM::g->add_edge(curr_a,curr_c,new_edge->get_edge_weight());
                edges.insert(new_edge);
                curr_a->neighbours->insert(curr_c);
                curr_c->neighbours->insert(curr_a);
            }
        }
        if(edges.size()>0){
            Edge* max_edge = (*edges.begin());
            for(set<Edge*>::iterator idx=edges.begin(); idx!=edges.end(); ++idx){
                if((*idx)->get_edge_weight() > max_edge->get_edge_weight()){
                    max_edge = (*idx);
                }
            }
            max_edge->animal->set_label(max_edge->weight);
            ACM::m->add_edge(curr_a, curr_c, max_edge.weight);
        }
    }
    search_new();
}
void ACM::search_new()
{
    set<Animal*>::iterator a_it;
    set<Animal*> g_a_cpy = ACM::g->get_animals();
    set<Animal*> m_a_cpy = ACM::m->get_animals();
    std::set_difference(g_a_cpy->begin(), g_a_cpy->end(),
                        m_a_cpy->begin(), m_a_cpy->end(),
                        a_it);
    for(a_it=g_a_cpy.begin(); a_it!=g_a_cpy.end(); ++a_it){
        ACM::s->add_animal(*a_it);
        ACM::t->clear();
        if((*a_it)->empty_neighbour()){update_labels();}
        if(!(*a_it)->empty_neighbour()){augment_matches((*a_it));}
    }
}
void ACM::update_labels()
{
    float delta = 12.1f;
    Animal* min_a = NULL;
    Client* min_c = NULL;
    set<Animal*>::iterator a_it;
    set<Client*>::iterator c_it;
    set<Client*> g_c_cpy = ACM::g->get_clients();
    set<Client*> m_c_cpy = ACM::m->get_clients();
    std::set_difference(g_c_cpy->begin(), g_c_cpy->end(),
                        m_c_cpy->begin(), m_c_cpy->end(),
                        c_it);
    for(a_it=ACM::s->animals.begin(); a_it!=ACM::s_.animals.end(); ++a_it){
        for(c_it=g_c_cpy.begin(); c_it!=g_c_cpy.end(); ++c_it){
            float temp = (*a_it)->label + (*c_it)->label - ACM::g->get_edge_weight((*a_it),(*c_it));
            if(temp < delta){
                delta = temp;
                min_a = (*a_it);
                min_c = (*c_it);
            }
        }
    }
    float prev = 0.0f;
    for(a_it=ACM::s->animals.begin(); a_it!=ACM::s_.animals.end(); ++a_it){
        prev = (*a_it)->get_label();
        (*a_it)->set_label(prev - delta);
    }
    for(c_it=ACM::t->clients.begin(); c_it!=ACM::t->clients.end(); ++c_it){
        prev = (*c_it)->get_label();
        (*c_it)->set_label(prev + delta);
    }
    min_a->neighbours->insert(min_c);
    min_c->neighbours->insert(min_a);
}
void ACM::augment_matches(Animal* a)
{
    set<Client*>::iterator p_it;
    std::set_difference(a->neighbours->begin(), a->neigbours->end(),
                        ACM::t->clients.begin(), ACM::t->clients.end(),
                        p_it);
    float max_w = 0.0f;
    Client* max_client = (*p_it);
    for(p_it=a->neighbours->begin(); p_it!=a->neighbours->end(); ++p_it){
        float curr_w = ACM::g->get_edge_weight(a,(*p_it));
        if(curr_w > max_w){
            max_w = curr_w;
            max_client = (*p_it);
        }
    }
    ACM::m->add_edge(a,max_client,max_w);
    a->neighbours->insert(max_client);
    max_client->neighbours->insert(a);
    ACM::s->add_animal(a);
    ACM::t->add_client(max_client);
    if((*ACM::s->get_animals()->begin())->neighbours->begin() == (*ACM::t->get_clients()->begin())){
        update_labels();
    }
}

Graph::Graph(set<Animal*>* a, set<Client*>* c)
{
    Graph::animals = a;
    Graph::clients = c;
    Graph::edges = new set<Edge*>();
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
    animals.insert(a);
}
void Graph::add_client(Client* c)
{
    clients.insert(c);
}
void Graph::remove_animal(Animal* a)
{
    for(set<Animal*>::iterator i=animals.begin(); i!=animals.end(); i++){
        if(a->name == (*i)->name){
            animals.erase(i);
        }
    }
}
void Graph::remove_client(Client* c)
{
    for(set<Client*>::iterator i=clients.begin(); i!=clients.end(); i++){
        if(c->name == (*i)->name){
            clients.erase(i);
        }
    }
}
set<Animal*>* Graph::get_animals()
{
    return &animals;
}
set<Client*>* Graph::get_clients()
{
    return &clients;
}
void Graph::add_edge(Animal* a, Client* c , float w)
{
    Edge* new_edge = new Edge(a,c,w);
    edges.insert(new_edge);
}
void Graph::remove_edge(Animal* a, Client* c)
{

    for(set<Edge*>::iterator i=edges.begin(); i!=edges.end(); i++){
        if(c->name == (*i)->client->name && a->name == (*i)->animal->name){
            edges.erase(i);
        }
    }
}
void Graph::set_edge_weight(Animal* a, Client* c, float w)
{
    for(set<Edge*>::iterator i=edges.begin(); i!= edges.end(); i++){
        if(c->name == (*i)->client->name && a->name == (*i)->animal->name){
            (*i)->weight = w;
        }
    }
}
void Graph::clear()
{
    delete animals, clients, edges;
    Graph::animals = new set<Animal*>();
    Graph::clients = new set<Client*>();
    Graph::edges = new set<Edge*>();
}
float Graph::get_edge_weight(Animal* a, Client* c)
{
    float weight = -1.0f;
    for(set<Edge*>::iterator i=edges.begin(); i!=edges.end(); i++){
        if((*i)->animal == a && (*i)->client == c){
            weight = (*i)->weight;
            break;
        }
    }
    return weight;
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
void Edge::set_edge_weight(float w)
{
    Edge::weight=w;
}
float Edge::get_edge_weight()
{
    return Edge::weight;
}
