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
    float m_x;
    float m_y;
    int m_centralite;
    int m_vulnerabilite;
public:
    Sommets(/* args */);
    ~Sommets();
    // acces aux attributs
    void parametrage (int nom,float x,float y);
    // affichage
};


#endif // SOMMETS_H_INCLUDED
