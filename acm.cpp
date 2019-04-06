#include "acm.h"
#include <math.h>

ACM::ACM(DBServer* dbs, UIServer* uis)
{
    db = dbs;
    ui = uis;
    set<Animal*>* a = new set<Animal*>();
    set<Animal*>* a_empty = new set<Animal*>();
    QList<Animal*>* a_db = db->get_animals();
    for(int i=0; i<a_db->size(); i++){a->insert(a_db->at(i));}

    set<Client*>* c = new set<Client*>();
    set<Client*>* c_empty = new set<Client*>();
    QList<Client*>* c_db = db->get_clients();
    for(int i=0; i<c_db->size(); i++){c->insert(c_db->at(i));}

    ACM::g = new Graph(a,c);
    ACM::m = new Graph(a_empty,c_empty);
    ACM::s = new Graph(a_empty,c_empty);
    ACM::t = new Graph(a_empty,c_empty);
}
/*ACM::ACM(Rule rule)
{
    set<Animal*>* a = new set<Animal*>();
    set<Animal*>* a_empty = new set<Animal*>();
    QList<Animal*>* a_db = db->get_animals();
    qDebug()<<"-a-"+a->size();
    for(int i=0; i<a_db->size(); i++){a->insert(a_db->at(i));}
    qDebug()<<"-a-"+a->size();
    set<Client*>* c = new set<Client*>();
    set<Client*>* c_empty = new set<Client*>();
    QList<Client*>* c_db = db->get_clients();
    qDebug()<<"-c-"+c_db->size();
    for(int i=0; i<c_db->size(); i++){c->insert(c_db->at(i));}//c_db->size()
    qDebug()<<"fixed";

    ACM::g = new Graph(a,c);
    ACM::m = new Graph(a_empty,c_empty);
    ACM::s = new Graph(a_empty,c_empty);
    ACM::t = new Graph(a_empty,c_empty);
    ACM::r = rule;

}*/
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
    bool PA_match = false;
    if(r == strong){
        PA_match =
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
        PA_match =
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
        PA_match =
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
        PA_match = (a->getPAttr()->at(0) == c->getInfo()->at(0));
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
    for(set<Client*>::iterator i=ACM::g->get_clients()->begin(); i!=ACM::g->get_clients()->end(); ++i) {
        qDebug()<<"in1";
        Client* curr_c = (*i);
        curr_c->set_label(0.0);
        set<Edge*> edges;
        Animal* curr_a;
        Edge* new_edge;
        Edge* max_edge;
        for(set<Animal*>::iterator j=ACM::g->get_animals()->begin(); j!=ACM::g->get_animals()->end(); ++j){
            qDebug()<<"in2";
            curr_a =(*j);
            if(ACM::compute_edge(curr_a, curr_c, new_edge)){
                qDebug()<<"1--";
                ACM::g->add_edge(curr_a,curr_c,new_edge->get_edge_weight());
                qDebug()<<"2--";
                edges.insert(new_edge);
                qDebug()<<"3--";
                curr_a->get_neighbours()->insert(curr_c);
                qDebug()<<"4--";
                curr_c->get_neighbours()->insert(curr_a);
                qDebug()<<"5--";
            }
        }
        if(edges.size()>0){
            max_edge = (*edges.begin());
            for(set<Edge*>::iterator idx=edges.begin(); idx!=edges.end(); ++idx){
                if((*idx)->get_edge_weight() > max_edge->get_edge_weight()){
                    max_edge = (*idx);
                }
            }
            max_edge->get_animal()->set_label(max_edge->get_edge_weight());
            ACM::m->add_edge(curr_a, curr_c, max_edge->get_edge_weight());
        }
    }
    qDebug()<<"start search";
    search_new();
}
void ACM::search_new()
{
    qDebug()<<"here";
    set<Animal*>* g_a_cpy = ACM::g->get_animals();
    set<Animal*>* m_a_cpy = ACM::m->get_animals();
    set<Animal*> a_diff;
    set<Animal*>::iterator a_it;
    std::set_difference(g_a_cpy->begin(), g_a_cpy->end(),
                        m_a_cpy->begin(), m_a_cpy->end(),
                        std::inserter(a_diff,a_diff.end()));
    qDebug()<<"-1";
    for(a_it=a_diff.begin(); a_it!=a_diff.end(); ++a_it){
        qDebug()<<"1";
        ACM::s->add_animal(*a_it);
        qDebug()<<"2";
        ACM::t->clear();
        qDebug()<<"3";
        if((*a_it)->empty_neighbour()){qDebug()<<"3.1"; update_labels();}
        qDebug()<<"4";
        if(!(*a_it)->empty_neighbour()){qDebug()<<"3.1"; augment_matches((*a_it));}
        qDebug()<<"5";
    }
    qDebug()<<"-2";
}
void ACM::update_labels()
{
    float delta = 12.1f;
    Animal* min_a = NULL;
    Client* min_c = NULL;
    set<Client*>* g_c_cpy = ACM::g->get_clients();
    set<Client*>* m_c_cpy = ACM::m->get_clients();
    set<Animal*>::iterator a_it;
    set<Client*>::iterator c_it;
    set<Client*> c_diff;
    std::set_difference(g_c_cpy->begin(), g_c_cpy->end(),
                        m_c_cpy->begin(), m_c_cpy->end(),
                        std::inserter(c_diff,c_diff.end()));
    for(a_it=ACM::s->get_animals()->begin(); a_it!=ACM::s->get_animals()->end(); ++a_it){
        for(c_it=c_diff.begin(); c_it!=c_diff.end(); ++c_it){
            float temp = (*a_it)->get_label() + (*c_it)->get_label() - ACM::g->get_edge_weight((*a_it),(*c_it));
            if(temp < delta){
                delta = temp;
                min_a = (*a_it);
                min_c = (*c_it);
            }
        }
    }
    float prev = 0.0f;
    for(a_it=ACM::s->get_animals()->begin(); a_it!=ACM::s->get_animals()->end(); ++a_it){
        prev = (*a_it)->get_label();
        (*a_it)->set_label(prev - delta);
    }
    for(c_it=ACM::t->get_clients()->begin(); c_it!=ACM::t->get_clients()->end(); ++c_it){
        prev = (*c_it)->get_label();
        (*c_it)->set_label(prev + delta);
    }
    min_a->get_neighbours()->insert(min_c);
    min_c->get_neighbours()->insert(min_a);
}
void ACM::augment_matches(Animal* a)
{
    set<Client*>::iterator p_it;
    set<Client*> p_diff;
    set<Client*>* a_n_cpy = a->get_neighbours();
    set<Client*>* t_c_cpy = ACM::t->get_clients();
    std::set_difference(a_n_cpy->begin(), a_n_cpy->end(),
                        t_c_cpy->begin(), t_c_cpy->end(),
                        std::inserter(p_diff,p_diff.end()));
    float max_w = 0.0f;
    Client* max_client = (*p_it);
    for(p_it=p_diff.begin(); p_it!=p_diff.end(); ++p_it){
        float curr_w = ACM::g->get_edge_weight(a,(*p_it));
        if(curr_w > max_w){
            max_w = curr_w;
            max_client = (*p_it);
        }
    }
    ACM::m->add_edge(a,max_client,max_w);
    a->get_neighbours()->insert(max_client);
    max_client->get_neighbours()->insert(a);
    ACM::s->add_animal(a);
    ACM::t->add_client(max_client);
    if((*(*ACM::s->get_animals()->begin())->get_neighbours()->begin())->getName() == ((*ACM::t->get_clients()->begin())->getName())){
        update_labels();
    }
}

void ACM::changeRule(Rule rule) {
    ACM::r = rule;
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
    animals->insert(a);
}
void Graph::add_client(Client* c)
{
    clients->insert(c);
}
void Graph::remove_animal(Animal* a)
{
    for(set<Animal*>::iterator i=animals->begin(); i!=animals->end(); i++){
        if(a->getAnimalName() == (*i)->getAnimalName()){
            animals->erase(i);
            break;
        }
    }
}
void Graph::remove_client(Client* c)
{
    for(set<Client*>::iterator i=clients->begin(); i!=clients->end(); i++){
        if(c->getName() == (*i)->getName()){
            clients->erase(i);
            break;
        }
    }
}
set<Animal*>* Graph::get_animals()
{
    return animals;
}
set<Client*>* Graph::get_clients()
{
    return clients;
}
void Graph::add_edge(Animal* a, Client* c , float w)
{
    Edge* new_edge = new Edge(a,c,w);
    edges->insert(new_edge);
}
void Graph::remove_edge(Animal* a, Client* c)
{

    for(set<Edge*>::iterator i=edges->begin(); i!=edges->end(); i++){
        if(c->getName() == (*i)->get_client()->getName() &&
                a->getAnimalName() == (*i)->get_animal()->getAnimalName()){
            edges->erase(i);
            break;
        }
    }
}
void Graph::set_edge_weight(Animal* a, Client* c, float w)
{
    for(set<Edge*>::iterator i=edges->begin(); i!= edges->end(); i++){
        if(c->getName() == (*i)->get_client()->getName() &&
                a->getAnimalName() == (*i)->get_animal()->getAnimalName()){
            (*i)->set_edge_weight(w);
            break;
        }
    }
}
void Graph::clear()
{
    delete animals; delete clients; delete edges;
    Graph::animals = new set<Animal*>();
    Graph::clients = new set<Client*>();
    Graph::edges = new set<Edge*>();
}
float Graph::get_edge_weight(Animal* a, Client* c)
{
    float weight = -1.0f;
    for(set<Edge*>::iterator i=edges->begin(); i!=edges->end(); i++){
        if((*i)->get_animal()->getAnimalName() == a->getAnimalName() &&
                (*i)->get_client()->getName() == c->getName()){
            weight = (*i)->get_edge_weight();
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
Animal* Edge::get_animal()
{
    return Edge::animal;
}
Client* Edge::get_client()
{
    return Edge::client;
}
