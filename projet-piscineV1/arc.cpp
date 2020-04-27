#include "arc.h"

Arc::Arc(/* args */)
{
}

Arc::~Arc()
{
}

Sommets* Arc:: getSommet1()
{
    return m_sommet1;
}

Sommets* Arc:: getSommet2()
{
    return m_sommet2;
}

int Arc:: getPoids()
{
    return m_poids;
}

int Arc:: getIndice()
{
    return m_indice;
}

void Arc:: afficherArc()
{
    std::cout<< "indice : "<<m_indice;
    std::cout<< "sommet 1 : "<<m_sommet1;
    std::cout<< "sommet 2 : "<<m_sommet2;
    std::cout<< "poids : "<<m_poids;
}
