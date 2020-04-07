#include "Joueur.h"
#include "Fighter.h"
#include "Potion.h"
//#include "Arme.h"
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include "Arene.h"
using namespace std;


int main()
{
// ------------ Règles du jeu-------------------

    cout << "Voici les regles" << endl;
    cout << "1 : Il est interdit de parler de l'EPSI-Fighter " << endl;
    cout << "2 : Combattez jusqu'au dernier" << endl;
    cout << "3 : Il ne restera qu'un seul vainqueur" << endl;

    //nécessaire à faire un random complètement aléatoire
    srand (time(NULL));

    //creation joueur
    Joueur* Joueur1=new Joueur();
    cout<<"Quel est le nom du joueur 1 ?"<<endl;
    Joueur1->demande();
    cout<<"Le joueur 1 s'appelle ";
    Joueur1->afficher();
    Joueur* Joueur2=new Joueur();
    cout<<"\nQuel est le nom du joueur 2 ?"<<endl;
    Joueur2->demande();
    cout<<"Le joueur 2 s'appelle ";
    Joueur2->afficher();

    //selection team
    cout<<"\nA toi de choisir : "<<Joueur1->getNom()<<"\n"<<endl;
    Joueur1->choixFighters();
    cout<<"\nA toi de choisir : "<<Joueur2->getNom()<<"\n"<<endl;
    Joueur2->choixFighters();

    //selection potion
    cout<<"\n"<<Joueur1->getNom()<<" choisi ta potion !"<<endl;
    Joueur1->recupPotion();
    cout<<"\n"<<Joueur2->getNom()<<" choisi ta potion !"<<endl;
    Joueur2->recupPotion();

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

// commencer la baston


    cout << "Baston : " << endl;
    cout << "\n############# Round : " << endl;

    //Initialiser l'arene
    Arene* arene = new Arene;
    arene->setJoueur1(joueur1);
    arene->setJoueur2(joueur2);
    //Afficher l'arene
    arene->afficher();

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


    delete Joueur1;
    delete Joueur2;

    return 0;
}
