#ifndef ARC_H_INCLUDED
#define ARC_H_INCLUDED

#include "sommets.h"

class Arc
{
private:
    Sommets* m_sommet1;
    Sommets* m_sommet2;
    int m_poids;
public:
    Arc(/* args */);
    ~Arc();
    // acces aux attributs
    // affichage
};


#endif // ARC_H_INCLUDED
