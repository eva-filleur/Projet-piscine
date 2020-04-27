#ifndef SOMMETS_H_INCLUDED
#define SOMMETS_H_INCLUDED

#include <iostream>
#include <vector>

class Arc;

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
    void afficherSommet();// affichage
};


#endif // SOMMETS_H_INCLUDED
