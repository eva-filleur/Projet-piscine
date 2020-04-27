#include "graphe.h"

Graphe::Graphe(/* args */)
{
}

Graphe::~Graphe()
{
}

void Graphe::afficherGraphe(Graphe &mon_graphe)
{
    std::cout << "Mes sommets: "<<std::endl<<std::endl;
    for(int i=0;i<m_ordre;++i)//pour tous les sommets
    {
        mon_graphe.m_sommets[i]->afficherSommet();
    }
    std::cout << "Mes arcs: "<<std::endl<<std::endl;
    for(int i=0;i<m_arc.size();++i)//pour tous les arcs
    {
        mon_graphe.m_arc[i]->afficherArc();
    }
}

void Graphe::chargementPond(Graphe &mon_graphe)// chargement de la ponderation
{
    std::ifstream flux{"graphe_etoile1_pond.txt"};
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
