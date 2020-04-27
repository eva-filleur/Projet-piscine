#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED

#include <fstream>

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
    void afficherGraphe(Graphe &mon_graphe);// affichage
    // chargement de la topographie
    void chargementPond(Graphe &mon_graphe);// chargement de la ponderation
};


#endif // GRAPHE_H_INCLUDED
