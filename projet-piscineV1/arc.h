#ifndef ARC_H_INCLUDED
#define ARC_H_INCLUDED

#include "sommets.h"

class Arc
{
private:
    Sommets* m_sommet1;
    Sommets* m_sommet2;
    int m_poids;
    int m_indice;
public:
    Arc(/* args */);
    ~Arc();
    // acces aux attributs
    Sommets* getSommet1();
    Sommets* getSommet2();
    int getPoids();
    int getIndice();
    // affichage
    void afficherArc();
};


#endif // ARC_H_INCLUDED
