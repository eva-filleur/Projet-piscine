#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED

#include "arc.h"
#include "sommets.h"

class Graphe
{
private:
    std::vector<Sommets*> m_sommets;
    std::vector<Arc*> m_arc;

public:
    Graphe(/* args */);
    ~Graphe();
    // acces aux attributs
    // affichage
    // chargement de la topographie
    // chargement de la ponderation
};


#endif // GRAPHE_H_INCLUDED
