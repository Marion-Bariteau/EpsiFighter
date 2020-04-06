#include "Joueur.h"
#include "Fighter.h"
#include "Potion.h"

#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
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

    delete Joueur1;
    delete Joueur2;

    return 0;
}
