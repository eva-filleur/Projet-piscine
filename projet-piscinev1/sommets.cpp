#include "arc.h"
#include "sommets.h"


Sommets::Sommets(/* args */)
{
}

Sommets::~Sommets()
{
}

void Sommets::afficherSommet()
{
    std::cout<<"Sommet "<<m_nom<<" : "<<std::endl;
    std::cout<<"  centralite :" <<m_centralite<<std::endl;
    std::cout<<"  vulnerabilite :"<<m_vulnerabilite<<std::endl;
}
