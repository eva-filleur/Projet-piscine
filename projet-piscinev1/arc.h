#ifndef ARC_H_INCLUDED
#define ARC_H_INCLUDED

#include "sommets.h"

class Arc
{
private:
    Sommets* m_sommet1;
    Sommets* m_sommet2;
    float m_poids;
    int m_indice;
public:
    Arc(/* args */);
    ~Arc();
    // acces aux attributs
    // affichage
    void setPoids(float poids);
};


#endif // ARC_H_INCLUDED
