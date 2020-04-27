#include "graphe.h"

Graphe::Graphe(/* args */)
{
}

Graphe::~Graphe()
{
}

Graphe::void chargementPond(Graphe &mon_graphe)// chargement de la ponderation
{
    std::ifstream flux{fichier};
    if(!flux)
        std::cout << "Problème d'ouverture du fichier" << std::endl;

    int taille;
    flux>>taille;

    int indice;
    float poids;
    for(int i=0;i<taille;++i){
        flux >> indice >> poids;

        if(mon_graphe.getArc()[i].getIndice()==indice)
        {
            mon_graphe.getArc()[i].setPoids(poids);
        }

    }

}
