#include "arc.h"
#include "sommets.h"


Sommets::Sommets(/* args */)
{
}

Sommets::~Sommets()
{
}

std::vector<Arc*> Sommets:: getArc()
{
    return m_arc;
}

int Sommets:: getNom()
{
    return m_nom;
}

int Sommets:: getCentralite()
{
    return m_centralite;
}

int Sommets:: getVulnerabilite()
{
    return m_vulnerabilite;
}
