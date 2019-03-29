#include "acm.h"
#include <math.h>

ACM::ACM()
{
    //contact db to get array of animal pointers
    Animal* a[];
    Animal* a_empty[] = NULL;
    //contact db to get array of client pointers
    Client* c[];
    Client* c_empty[] = NULL;
    ACM::g = new Graph(a,c);
    ACM::m = new Graph(a_empty,c_empty);
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
bool ACM::compute_edge(Animal* a, Client*c, Rule r, Edge* e)
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

Graph::Graph(Animal* a[], Client* c[])
{

}
Graph::~Graph()
{

}
void Graph::add_animal(Animal* a)
{

}
void Graph::add_client(Client*)
{

}
void Graph::remove_animal(Animal*)
{

}
void Graph::remove_client(Client*)
{

}
void Graph::add_edge(Animal*,Client*,float)
{

}
void Graph::remove_edge(Animal*,Client*)
{

}
void Graph::set_edge(Animal*,Client*,float)
{

}

Edge::Edge(Animal* a, Client* c, float w)
{

}
Edge::~Edge()
{

}
void Edge::set_edge(float w)
{

}
