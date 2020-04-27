#include "graphe.h"

int main()
{
    /// declaration des variables
    Graphe g;

    int choix = 0;
    std::string nomFichier;
    bool quitter = false;

    /// message de bienvenue
    std::cout   << "***  bienvenue dans le projet piscine  ***"
                << std::endl
                << "ce projet est en cours de construction ... "
                << std::endl << std::endl
                << "il disposse des fonctionnalité suivante :"
                << std::endl
                << "     - un message d'introduction"
                << std::endl
                << "     - une classe Graphe, Arc, et Sommets"
                << std::endl
                << "     - le chargement de la topologie d'un graphe"
                << std::endl
                << "     - le chargement d'une ponderation"
                << std::endl
                << "     - un menu"
                << std::endl << std::endl
                << "les classes sont a completer et le chargement depuis un fichier a verifier" 
                << std::endl << std::endl;

    /// menu du projet
    while (!quitter)
    {
        std::cout   << "    *** menu du projet ***    "
                    << std::endl << std::endl
                    << "1- chargement du graphe"
                    << std::endl
                    << "2- chargement des ponderations"
                    << std::endl
                    << "3- calcule des indices"
                    << std::endl
                    << "4- affichage du graphe"
                    << std::endl
                    << "5- autre"
                    << std::endl
                    << "6- quitter"
                    << std::endl
                    <<"saisir votre choix : "
                    << std::endl;

        while (choix < 1 || choix > 6)
        {
            std::cin    >> choix;
        }
        
        switch (choix)
        {
        case 1:
            /// chargement du graphe
            std::cout   << "saisir le nom du fichier : ";
            std::cin    >> nomFichier;

            g.chargementTopo(nomFichier);

            break;

        case 2:
            /// chargement des ponderations
            std::cout   << "saisir le nom du fichier : ";
            std::cin    >> nomFichier;

            break;

        case 3:
            /// calcule des indices
            break;

        case 4:
            ///  affichage du graphe
            break;

        case 5:
            /// autre
            break;

        case 6:
            /// quitter
            std::cout   << "vous avez quitter";
            quitter = true;
            break;

        default:
            std::cout   << "erreur dans le switch";
            break;
        }
        }
    

    return 0;
}
