#include "graphe.h"

int main()
{
    std::cout   << "***  bienvenue dans le projet piscine  ***"
                << std::endl
                << "ce projet est en cours de construction ... "
                << std::endl << std::endl
                << "il disposse des fonctionnalité suivante :"
                << std::endl
                << "     - un message d'introduction"
                << std::endl
                << "     - une classe Graphe, Arc, et Sommets"
                << std::endl << std::endl
                << "les classes sont a completer et le chargement depuis un fichier a implementer"
                << std::endl;

    /// menu du projet
    int choix = 0;

    std::cout   << "saisir votre choix : "
                << std::endl
                << "1- chargement du graphe"
                << std::endl
                << "2- chargement des ponderations"
                << std::endl
                << "3- calcule des indices"
                << std::endl
                << "4- affichage du graphe"
                << std::endl
                << "5- autre"
                << std::endl;

    while (choix < 1 || choix > 5)
    {
        std::cin    >> choix;
    }

    switch (choix)
    {
    case 1:
        // chargement du graphe
        break;
    case 2:
        // chargement des ponderations
        break;
    case 3:
        // calcule des indices
        break;
    case 4:
        //  affichage du graphe
        break;
    case 5:
        // autre
        break;
    default:
        break;
    }


    return 0;
}
