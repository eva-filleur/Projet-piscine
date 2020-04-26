#ifndef SOMMETS_H_INCLUDED
#define SOMMETS_H_INCLUDED

#include <iostream>
#include <vector>

#include "arc.h"

class Sommets
{
private:
    std::vector<Arc*> m_arc;
    int m_nom;
    int m_centralite;
    int m_vulnerabilite;
public:
    Sommets(/* args */);
    ~Sommets();
    // acces aux attributs
    // affichage
};


#endif // SOMMETS_H_INCLUDED
