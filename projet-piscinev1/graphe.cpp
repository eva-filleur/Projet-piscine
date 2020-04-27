#include "graphe.h"

Graphe::Graphe(/* args */)
{
}

Graphe::~Graphe()
{
}


void Graphe::chargementTopo (Graphe& graphe, std::string nomFichier)
{
      std::ifstream ifs {nomFichier};
         if (!ifs)
            throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );
        
        ifs >> m_orientation;
        if ( ifs.fail() )
            throw std::runtime_error("Probleme lecture orientation du graphe");
        
        int ordre;
        ifs >> ordre;
        if ( ifs.fail() )
            throw std::runtime_error("Probleme lecture ordre du graphe");
        
        for (int i=0; i<ordre; ++i)
            m_sommets.push_back(new Sommets);

        int indice, nom;
        float x, y;
        for (int i=0; i<ordre; ++i)
        {
            ifs >> indice >> nom >> x >> y;
            if ( ifs.fail() )
                throw std::runtime_error("Probleme lecture ligne information sommet");

            m_sommets[indice]->parametrage(nom,x,y);

        }
        

        int taille;
        ifs >> taille;
        if ( ifs.fail() )
            throw std::runtime_error("Probleme lecture taille du graphe");
        
        for (int i=0; i<taille; ++i)
            m_arc.push_back(new Arc);

        int num1,num2;
        Sommets *s1, *s2;
        for (int i=0;i<taille;++i)
        {
            ifs >> indice >> num1 >> num2;
            if ( ifs.fail() )
                throw std::runtime_error("Probleme lecture arc");

            s1 = m_sommets[num1];
            s2 = m_sommets[num2];

            m_arc[indice]->parametrage(s1,s2);

        }
}