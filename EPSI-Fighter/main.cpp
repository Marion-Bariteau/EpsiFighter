#include <iostream>
#include <string>
#include "Eleve.h"
#include "Arene.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    cout << "   La 1ere regle de l'EPSI-Fighter est : on ne parle pas de l'EPSI-Fighter !\n\n\n";

    //nécessaire à faire un random complètement aléatoire
    srand (time(NULL));

    //Initialiser 2 joueurs
    Eleve* joueur1 = new Eleve("Joueur1",10,10,rand()%6,rand()%4);
    Eleve* joueur2 = new Eleve("Joueur2",10,10,19+rand()%6,6 +rand()%4);

    //Initialiser l'arene
    Arene* arene = new Arene;
    arene->setJoueur1(joueur1);
    arene->setJoueur2(joueur2);
    //Afficher l'arene
    arene->afficher();

    cout << "Coucou " << joueur1->getNom() << " & " << joueur2->getNom() << " ! " << endl;

    joueur1->donnerUnCoup(joueur2);

    joueur2->afficher();

    joueur1->deplacer();


    arene->afficher();

    //vector.combattan[0]




    delete joueur1;
    delete joueur2;

    return 0;
}
