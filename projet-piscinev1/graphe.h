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
    int m_orientation;
    
public:
    Graphe(/* args */);
    ~Graphe();
    void menu ();
    // acces aux attributs
    // affichage
    // chargement de la topographie
    void chargementTopo (std::string nomFichier);
    // chargement de la ponderation
};


#endif // GRAPHE_H_INCLUDED
