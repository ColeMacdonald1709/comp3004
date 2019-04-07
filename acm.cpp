#include "acm.h"
#include <iostream>

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
    ACM::m = new Graph(a,c);
    ACM::s = new Graph(a_empty,c_empty);
    ACM::t = new Graph(a_empty,c_empty);
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
                (a->getPAttr()->at(1) == c->getInfo()->at(1)) &&
                (a->getPAttr()->at(2) == c->getInfo()->at(2)) &&
                (a->getPAttr()->at(3) == c->getInfo()->at(3));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                if(e_curr <= 1.0f){edge += 1.0f;}
            }
            if(edge >= 7.0f){E_match = true;}
        }if(r == good){
            PA_match =
                (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
                (a->getPAttr()->at(2) == c->getInfo()->at(2)) &&
                (a->getPAttr()->at(3) == c->getInfo()->at(3));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                if(e_curr <= 2.0f){edge += 1.0f;}
            }
            if(edge >= 6.0f){E_match = true;}
        }if(r == fair){
            PA_match =
                (a->getPAttr()->at(0) == c->getInfo()->at(0)) &&
                (a->getPAttr()->at(2) == c->getInfo()->at(2));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                if(e_curr <= 3.0f){edge += 1.0f;}
            }
            if(edge >= 5.0f){E_match = true;}
        }if(r == poor){
            PA_match = (a->getPAttr()->at(0) == c->getInfo()->at(0));
            for(int idx=0; idx < a->getNPAttr()->size(); idx++){
                float a_NPA = a->getNPAttr()->at(idx).toFloat();
                float c_NPA = c->getPrefs()->at(idx).toFloat();
                e_curr = (float)fabs(a_NPA - c_NPA);
                if(e_curr <= 4.0f){edge += 1.0f;}
            }
            if(edge >= 4.0f){E_match = true;}
        }
    e = edge;
    return E_match && PA_match;
}
void ACM::label()
{
    for(set<Client*>::iterator i=ACM::g->get_clients()->begin(); i!=ACM::g->get_clients()->end(); ++i) {
        Client* curr_c = (*i);
        curr_c->set_label(0.0f);
        float curr_w = 0.0f;
        float max_w = 0.0f;
        Animal* curr_a;
        Animal* max_a = NULL;
        for(set<Animal*>::iterator j=ACM::g->get_animals()->begin(); j!=ACM::g->get_animals()->end(); ++j){
            curr_a = (*j);
            if(ACM::compute_edge(curr_a, curr_c, curr_w)){
                ACM::g->add_edge(curr_a, curr_c, curr_w);
                curr_a->get_neighbours()->insert(curr_c);
                curr_c->get_neighbours()->insert(curr_a);
                if(curr_w > max_w){
                    max_w = curr_w;
                    max_a = curr_a;
                }
            }
        }
        if(max_w > 0.0f && max_a != NULL){
            max_a->set_label(max_w);
            ACM::m->add_edge(max_a, curr_c, max_w);
        }
    }
    /*
    std::cout << "Graph G" << std::endl;
    for(set<Animal*>::iterator a=ACM::g->get_animals()->begin(); a!=ACM::g->get_animals()->end(); ++a){
        for(set<Client*>::iterator c=ACM::g->get_clients()->begin(); c!= ACM::g->get_clients()->end(); ++c){
            if(ACM::g->get_edge_weight((*a),(*c)) > 0.0f){
                std::cout << (*a)->getAnimalName().toStdString() << " label " << (*a)->get_label() << " and " <<
                             (*c)->getName().toStdString() << " label " << (*c)->get_label() << " score " <<
                             ACM::g->get_edge_weight((*a),(*c))
                          << std::endl;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Graph M" << std::endl;
    for(set<Animal*>::iterator a=ACM::m->get_animals()->begin(); a!=ACM::m->get_animals()->end(); ++a){
        for(set<Client*>::iterator c=ACM::m->get_clients()->begin(); c!= ACM::m->get_clients()->end(); ++c){
            if(ACM::m->get_edge_weight((*a),(*c)) > 0.0f){
                std::cout << (*a)->getAnimalName().toStdString() << " label " << (*a)->get_label() << " and " <<
                             (*c)->getName().toStdString() << " label " << (*c)->get_label() << " score " <<
                             ACM::m->get_edge_weight((*a),(*c))
                          << std::endl;
            }
        }
        std::cout << std::endl;
    }
    */
    search_new();
}
void ACM::search_new()
{

    set<Animal*>* g_a_cpy = ACM::g->get_animals();
    set<Animal*>* m_a_cpy = ACM::m->get_animals();
    set<Animal*> a_diff;
    set<Animal*>::iterator a_it;
    std::set_difference(g_a_cpy->begin(), g_a_cpy->end(),
                        m_a_cpy->begin(), m_a_cpy->end(),
                        std::inserter(a_diff,a_diff.end()));
    std::cout << "looking for " << a_diff.size() << " new matches" << std::endl;
    for(a_it=a_diff.begin(); a_it!=a_diff.end(); ++a_it){
        std::cout << "looking at " << (*a_it)->getAnimalName().toStdString() << std::endl;
        ACM::s->add_animal(*a_it);
        ACM::t->clear();
        if((*a_it)->empty_neighbour()){
            std::cout << (*a_it)->getAnimalName().toStdString() << " has neighbours " << std::endl;
            update_labels();
        }
        if(!(*a_it)->empty_neighbour()){
            std::cout << (*a_it)->getAnimalName().toStdString() << " has no neighbours " << std::endl;
            augment_matches((*a_it));
        }
    }
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
Graph* ACM::get_m()
{
    return m;
}
Graph* ACM::get_g()
{
    return g;
}
void ACM::load()
{
    ui->acmUIC->acmUI->ACMResultsTable->clearContents();
    QFont boldfont;
    boldfont.setBold(true);
    int rowNum = 0;
    for(set<Animal*>::iterator a=ACM::m->get_animals()->begin(); a!=ACM::m->get_animals()->end(); ++a){
        for(set<Client*>::iterator c=ACM::m->get_clients()->begin(); c!= ACM::m->get_clients()->end(); ++c){
            if(ACM::g->get_edge_weight((*a),(*c)) > 0.0f){
                ui->acmUIC->acmUI->ACMResultsTable->insertRow(rowNum);

                QTableWidgetItem* table_cell = new QTableWidgetItem;
                ui->acmUIC->acmUI->ACMResultsTable->setItem(rowNum,0,table_cell);
                table_cell->setText( (*c)->getName() );

                table_cell = new QTableWidgetItem;
                ui->acmUIC->acmUI->ACMResultsTable->setItem(rowNum,1,table_cell);
                table_cell->setText( (*a)->getAnimalName() );

                table_cell = new QTableWidgetItem;
                ui->acmUIC->acmUI->ACMResultsTable->setItem(rowNum,2,table_cell);
                float w = ACM::g->get_edge_weight((*a),(*c));                
                QString wgt;
                wgt.setNum((w/12)*100,'g',4);
                table_cell->setText( wgt + "%" );
                rowNum++;
            }
        }
    }

    qDebug() << "load complete";
}
void ACM::get_attributes(QString cName, QString aName, QList<QString>* cPA, QList<QString>* cNPA, QList<QString>* aPA, QList<QString>* aNPA)
{
    //iterate over m and find the edge of aName and cName
    for(set<Animal*>::iterator a=ACM::m->get_animals()->begin(); a!=ACM::m->get_animals()->end(); ++a){
        for(set<Client*>::iterator c=ACM::m->get_clients()->begin(); c!= ACM::m->get_clients()->end(); ++c){
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
set<Edge*>* Graph::get_edges()
{
    return edges;
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
    float weight = 0.0f;
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

