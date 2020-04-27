#include "arc.h"
#include "sommets.h"


Sommets::Sommets(/* args */)
{
}

Sommets::~Sommets()
{
}

void Sommets::parametrage (int nom,float x,float y)
{
    m_nom = nom;
    m_x = x;
    m_y = y;
}