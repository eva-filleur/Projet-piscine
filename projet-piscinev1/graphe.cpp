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
    std::ifstream flux{"graphe_etoile1_pond.txt"};//fichier des poids des arcs
    if(!flux)
        std::cout << "Problème d'ouverture du fichier" << std::endl;//affichage si pb

    int taille;
    flux>>taille;//enregistre la taille

    int indice;
    float poids;
    for(int i=0;i<taille;++i){//pour tous les arcs
        flux >> indice >> poids;
        m_arc[indice]->setPoids(poids);//on met le poids dans l'arc d'indice prédéfini
    }

}
