#include "acm.h"
#include <iostream>

ACM::ACM(DBServer* dbs, UIServer* uis)
{
    db = dbs;
    ui = uis;
}
ACM::~ACM()
{
    delete ACM::g;
    delete ACM::m;
    delete ACM::s;
    delete ACM::t;
}
bool ACM::compute_edge(Animal* a, Client* c, float& e)
{
    float e_curr = 0.0f;
    float edge = 0.0f;
    bool E_match = false;
    bool PA_match = false;
    for(int i=0; i<c->getPrefs()->size(); i++){if(c->getPrefs()->at(i) == "NULL" || c->getPrefs()->at(i) == ""){return false;}}
    for(int i=0; i<c->getInfo()->size(); i++){if(c->getInfo()->at(i) == "NULL" || c->getInfo()->at(i) == ""){return false;}}
        if(r == strong){
            PA_match =
                (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
                (a->getPAttr()->at(2) == c->getInfo()->at(2)) &&
                (a->getPAttr()->at(3) == c->getInfo()->at(3));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                edge += e_curr/5;
            }
            edge = 12 - edge;
            if(edge >= 9.0f){E_match = true;}
        }if(r == good){
            PA_match =
                (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
                (a->getPAttr()->at(2) == c->getInfo()->at(2)) &&
                (a->getPAttr()->at(3) == c->getInfo()->at(3));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                edge += e_curr/5;
            }
            edge = 12 - edge;
            if(edge >= 7.0f){E_match = true;}
        }if(r == fair){
            PA_match =
                (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
                (a->getPAttr()->at(2) == c->getInfo()->at(2));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                edge += e_curr/5;
            }
            edge = 12 - edge;
            if(edge >= 6.0f){E_match = true;}
        }if(r == poor){
            PA_match = (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
                    ((a->getPAttr()->at(2) == c->getInfo()->at(2)) ||  (a->getPAttr()->at(3) == c->getInfo()->at(3)));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                edge += e_curr/5;
            }
            edge = 12 - edge;
            if(edge >= 4.0f){E_match = true;}
        }
    e = edge;
    return E_match && PA_match;
}
void ACM::label()
{
    vector<Animal*>* g_a = new vector<Animal*>();
    QList<Animal*>* a_db = db->get_animals();
    for(int i=0; i<a_db->size(); i++){g_a->push_back(a_db->at(i));}

    vector<Client*>* g_c = new vector<Client*>();
    QList<Client*>* c_db = db->get_clients();
    for(int i=0; i<c_db->size(); i++){g_c->push_back(c_db->at(i));}

    ACM::g = new Graph(g_a,g_c);
    ACM::m = new Graph(new vector<Animal*>(),new vector<Client*>());
    ACM::s = new Graph(new vector<Animal*>(),new vector<Client*>());
    ACM::t = new Graph(new vector<Animal*>(),new vector<Client*>());

    for(vector<Client*>::iterator i=ACM::g->get_clients()->begin(); i!=ACM::g->get_clients()->end(); ++i) {
        Client* curr_c = (*i);
        curr_c->set_label(0.0f);
        float curr_w = 0.0f;
        float max_w = 0.0f;
        Animal* curr_a;
        Animal* max_a = NULL;
        for(vector<Animal*>::iterator j=ACM::g->get_animals()->begin(); j!=ACM::g->get_animals()->end(); ++j){
            curr_a = (*j);
            if(ACM::compute_edge(curr_a, curr_c, curr_w)){
                ACM::g->add_edge(curr_a, curr_c, curr_w);
                curr_a->get_neighbours()->push_back(curr_c);
                curr_c->get_neighbours()->push_back(curr_a);
                if(curr_w > max_w){
                    max_w = curr_w;
                    max_a = curr_a;
                }
            }
        }
        if(max_w > 0.0f && max_a != NULL){
            if(!ACM::m->contains(max_a,curr_c)){
                max_a->set_label(max_w);
                ACM::m->add_animal(max_a);
                ACM::m->add_client(curr_c);
                ACM::m->add_edge(max_a, curr_c, max_w);
            }
        }
    }
   search_new();
}
void ACM::search_new()
{
    vector<Animal*>* g_a_cpy = ACM::g->get_animals();
    vector<Animal*>* m_a_cpy = ACM::m->get_animals();
    vector<Animal*>* a_diff = g_a_cpy;
    vector<Animal*>::iterator a_it, a_ls;
    std::sort(g_a_cpy->begin(),g_a_cpy->end());
    std::sort(m_a_cpy->begin(),m_a_cpy->end());
    if(g_a_cpy->size() > 0 && m_a_cpy->size() > 0){
        a_ls = std::set_difference(g_a_cpy->begin(), g_a_cpy->end(),
                            m_a_cpy->begin(), m_a_cpy->end(),
                            a_diff->begin());
    }else{a_ls = g_a_cpy->begin();}
    for(a_it=a_diff->begin(); a_it!=a_ls; ++a_it){
        ACM::s->clear();
        ACM::s->add_animal(*a_it);
        ACM::t->clear();
        if((*a_it)->get_neighbours()->size() == 0){
            update_labels();
        }
        if((*a_it)->get_neighbours()->size() != 0){
            augment_matches((*a_it));
        }
    }
}
void ACM::update_labels()
{
    float delta = 12.1f;
    Animal* min_a = NULL;
    Client* min_c = NULL;
    vector<Client*>* g_c_cpy = ACM::g->get_clients();
    vector<Client*>* m_c_cpy = ACM::m->get_clients();
    vector<Animal*>::iterator a_it;
    vector<Client*>::iterator c_it, c_ls;
    vector<Client*>* c_diff = g_c_cpy;
    std::sort(g_c_cpy->begin(),g_c_cpy->end());
    std::sort(m_c_cpy->begin(),m_c_cpy->end());
    if(g_c_cpy->size() > 0 && m_c_cpy->size() > 0){
        c_ls = std::set_difference(g_c_cpy->begin(), g_c_cpy->end(),
                            m_c_cpy->begin(), m_c_cpy->end(),
                            c_diff->begin());
    }else{c_ls = g_c_cpy->begin();}
    for(a_it=ACM::s->get_animals()->begin(); a_it!=ACM::s->get_animals()->end(); ++a_it){
        for(c_it=c_diff->begin(); c_it!=c_ls; ++c_it){
            float temp = (*a_it)->get_label() + (*c_it)->get_label() - ACM::g->get_edge_weight((*a_it),(*c_it));
            if(temp < delta){
                delta = temp;
                min_a = (*a_it);
                min_c = (*c_it);
            }
        }
    }
    if(delta > 0 && delta <= 12){
        for(a_it=ACM::s->get_animals()->begin(); a_it!=ACM::s->get_animals()->end(); ++a_it)
            (*a_it)->set_label((*a_it)->get_label() - delta);

        for(c_it=ACM::t->get_clients()->begin(); c_it!=ACM::t->get_clients()->end(); ++c_it)
            (*c_it)->set_label((*c_it)->get_label() + delta);
    }
}
void ACM::augment_matches(Animal* a)
{
    vector<Client*>* a_n_cpy = a->get_neighbours();
    vector<Client*>* t_c_cpy = ACM::t->get_clients();
    vector<Client*>* p_diff = a_n_cpy;
    vector<Client*>::iterator p_it, p_ls;

    std::sort(a_n_cpy->begin(),a_n_cpy->end());
    std::sort(t_c_cpy->begin(),t_c_cpy->end());

    if(a_n_cpy->size() > 0 && t_c_cpy->size() > 0){
        p_ls = std::set_difference(a_n_cpy->begin(), a_n_cpy->end(),
                            t_c_cpy->begin(), t_c_cpy->end(),
                            p_diff->begin());
    }else{p_ls = a_n_cpy->begin();}
    float max_w = 0.0f;
    Client* max_client = (*p_diff->begin());
    for(p_it=p_diff->begin(); p_it!=p_ls; ++p_it){
        float curr_w = ACM::g->get_edge_weight(a,(*p_it));
        if(curr_w > max_w){
            max_w = curr_w;
            max_client = (*p_it);
        }
    }
    if(!ACM::m->contains(a,max_client)){
        ACM::m->add_edge(a,max_client,max_w);
    }else{
        ACM::s->add_animal(a);
        ACM::t->add_client(max_client);
        update_labels();
    }
}
void ACM::changeRule(Rule rule) {
    ACM::r = rule;
}
Graph* ACM::get_m()
{
    return m;
}
void ACM::get_attributes(QString cName, QString aName, QList<QString>* cPA, QList<QString>* cNPA, QList<QString>* aPA, QList<QString>* aNPA)
{
    //iterate over m and find the edge of aName and cName
    for(vector<Animal*>::iterator a=ACM::m->get_animals()->begin(); a!=ACM::m->get_animals()->end(); ++a){
        for(vector<Client*>::iterator c=ACM::m->get_clients()->begin(); c!= ACM::m->get_clients()->end(); ++c){
            if(ACM::g->get_edge_weight((*a),(*c)) > 0.0f){
                if( ((*c)->getName() == cName) && ((*a)->getAnimalName() == aName)) {
                    db->get_client(&cName,cPA,cNPA);
                    db->get_animal(&aName,aPA,aNPA);
                    return;
                }
            }
        }
    }
}
void ACM::clear()
{
    ACM::g->clear();
    ACM::m->clear();
    ACM::s->clear();
    ACM::t->clear();
}
Graph::Graph(vector<Animal*>* a, vector<Client*>* c)
{
    Graph::animals = a;
    Graph::clients = c;
    Graph::edges = new vector<Edge*>();
}
Graph::~Graph()
{
    for(vector<Animal*>::iterator a_it=animals->begin(); a_it!=animals->end(); ++a_it){
        (*a_it)->set_label(0.0f);
        (*a_it)->get_neighbours()->clear();
    }
    for(vector<Client*>::iterator c_it=clients->begin(); c_it!=clients->end(); ++c_it){
        (*c_it)->set_label(0.0f);
        (*c_it)->get_neighbours()->clear();
    }
    delete animals;
    delete clients;
    delete edges;
}
void Graph::add_animal(Animal* a)
{
    animals->push_back(a);
}
void Graph::add_client(Client* c)
{
    clients->push_back(c);
}
void Graph::remove_animal(Animal* a)
{
    for(vector<Animal*>::iterator i=animals->begin(); i!=animals->end(); i++){
        if(a->getAnimalName() == (*i)->getAnimalName()){
            animals->erase(i);
            break;
        }
    }
}
void Graph::remove_client(Client* c)
{
    for(vector<Client*>::iterator i=clients->begin(); i!=clients->end(); i++){
        if(c->getName() == (*i)->getName()){
            clients->erase(i);
            break;
        }
    }
}
vector<Animal*>* Graph::get_animals()
{
    return animals;
}
vector<Client*>* Graph::get_clients()
{
    return clients;
}
vector<Edge*>* Graph::get_edges()
{
    return edges;
}
void Graph::add_edge(Animal* a, Client* c , float w)
{
    Edge* new_edge = new Edge(a,c,w);
    edges->push_back(new_edge);
}
void Graph::remove_edge(Animal* a, Client* c)
{

    for(vector<Edge*>::iterator i=edges->begin(); i!=edges->end(); i++){
        if(c->getName() == (*i)->get_client()->getName() &&
                a->getAnimalName() == (*i)->get_animal()->getAnimalName()){
            edges->erase(i);
            break;
        }
    }
}
void Graph::set_edge_weight(Animal* a, Client* c, float w)
{
    for(vector<Edge*>::iterator i=edges->begin(); i!= edges->end(); i++){
        if(c->getName() == (*i)->get_client()->getName() &&
                a->getAnimalName() == (*i)->get_animal()->getAnimalName()){
            (*i)->set_edge_weight(w);
            break;
        }
    }
}
void Graph::clear()
{
    for(vector<Animal*>::iterator a_it=animals->begin(); a_it!=animals->end(); ++a_it){
        (*a_it)->set_label(0.0f);
        (*a_it)->get_neighbours()->clear();
    }
    for(vector<Client*>::iterator c_it=clients->begin(); c_it!=clients->end(); ++c_it){
        (*c_it)->set_label(0.0f);
        (*c_it)->get_neighbours()->clear();
    }
    delete animals;
    delete clients;
    delete edges;
    Graph::animals = new vector<Animal*>();
    Graph::clients = new vector<Client*>();
    Graph::edges = new vector<Edge*>();
}
float Graph::get_edge_weight(Animal* a, Client* c)
{
    float weight = 0.0f;
    for(vector<Edge*>::iterator i=edges->begin(); i!=edges->end(); i++){
        if((*i)->get_animal()->getAnimalName() == a->getAnimalName() &&
                (*i)->get_client()->getName() == c->getName()){
            weight = (*i)->get_edge_weight();
            break;
        }
    }
    return weight;
}
bool Graph::contains(Animal* a, Client* c)
{
    bool e_contain = false;
    bool a_contain = false;
    bool c_contain = false;
    for(vector<Edge*>::iterator e_it=edges->begin(); e_it!=edges->end(); ++e_it){
        if((*e_it)->get_animal()->getAnimalName() == a->getAnimalName() || (*e_it)->get_client()->getName() == c->getName()){
            e_contain = true;
            break;
        }
    }
    for(vector<Animal*>::iterator a_it=animals->begin(); a_it!=animals->end(); ++a_it){
        if((*a_it)->getAnimalName() == a->getAnimalName()){
            a_contain = true;
            break;
        }
    }
    for(vector<Client*>::iterator c_it=clients->begin(); c_it!=clients->end(); ++c_it){
        if((*c_it)->getName() == c->getName()){
            c_contain = true;
            break;
        }
    }
    return e_contain || a_contain || c_contain;
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
void Edge::set_animal(Animal* a)
{
    Edge::animal = a;
}
void Edge::set_client(Client* c)
{
    Edge::client = c;
}
float Edge::get_edge_weight()
{
    return Edge::weight;
}
Animal* Edge::get_animal()
{
    return Edge::animal;
}
Client* Edge::get_client()
{
    return Edge::client;
}
