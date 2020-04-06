#include <iostream>
#include "joueurs.h"
#include "combattan.h"
#include "Arme.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <algorithm>


using namespace std;

int main()
{

// ------------ Règle du jeu-------------------

    cout << "Voici les regles\n" << endl;
    cout << "1 : Il est interdit de parler de EPSI-Fighter " << endl;
    cout << "2 : Combattez jusqu'au dernier" << endl;
    cout << "3 : Il n'y a qu'un seul vainceur" << endl;

//-----------demander et afficher joueur + choisir combattant----------------

    joueurs* joueur1 = new joueurs();
    joueurs* joueur2 = new joueurs();
    joueur1->demande();
    joueur1->afficher();
    joueur2->demande();
    joueur2->afficher();

    cout << "\nA toi de choisir : " << joueur1->getNom() << endl;
    joueur1->selectionCombattant();

    cout << "\nA toi de choisir : " << joueur2->getNom() << endl;
    joueur2->selectionCombattant();

    cout << "\n" <<joueur1->getNom() << " : Vos combattant sont : " << endl;
    joueur1->tabSelection();
    cout << "\n" <<joueur2->getNom() << " : Vos combattant sont : " << endl;
    joueur2->tabSelection();


// --------------Affichage des armes---------------- ///

   /* cout << "\nLes armes" << endl;
    vector <Arme*> equipement;
    equipement.push_back(new Arme("Clavier",10));
    equipement.push_back(new Arme("Barbe",20));
    equipement.push_back(new Arme("Traifle",15));
    equipement.push_back(new Arme("Hache",20));
    equipement.push_back(new Arme("Dico",10));
    equipement.push_back(new Arme("Ordi",20));
    equipement.push_back(new Arme("Calculatrice",15));
    equipement.push_back(new Arme("Chaton",20));
    equipement.push_back(new Arme("Lunettes",10));
    equipement.push_back(new Arme("Sanglier",15));

    for(int i=0;i<equipement.size();i++){
        equipement[i]->afficher();
    }
*/


    //boucle affiche arme
    // commencer la baston


    cout << "Baston : " << endl;

    cout << "\n############# Round : " << endl;
   /* joueur1->donnerUnCoup(joueur2);
    joueur2->donnerUnCoup(joueur1);
    joueur1->afficher();
    joueur2->afficher();*/


    /*cout << "\n############# Round : " << endl;
    marion->donnerUnCoup(zoe);
    zoe->donnerUnCoup(marion);
    marion->afficher();
    zoe->afficher();

    cout << "\n############# Round : " << endl;
    marion->donnerUnCoup(zoe);
    zoe->donnerUnCoup(marion);
    marion->afficher();
    zoe->afficher();

    cout << "\n############# Round : " << endl;
    marion->donnerUnCoup(zoe);
    zoe->donnerUnCoup(marion);
    marion->afficher();
    zoe->afficher();*/


    return 0;

}
