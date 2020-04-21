#include "Joueur.h"
#include "Fighter.h"
#include "Potion.h"
#include "Menu.h"

#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*void combat()
{
    while()
    {
        blablabla...
    }
}*/


int main()
{
    Menu* menu=new Menu();
    menu->logo();
    system("pause");
    system("CLS");

    //creation joueur
    Joueur* Joueur1=new Joueur();
    cout<<"Quel est le nom du joueur 1 ?"<<endl;
    Joueur1->demande();
    cout<<"Le joueur 1 s'appelle ";
    Joueur1->afficher();
    system("pause");
    system("CLS");
    Joueur* Joueur2=new Joueur();
    cout<<"\nQuel est le nom du joueur 2 ?"<<endl;
    Joueur2->demande();
    cout<<"Le joueur 2 s'appelle ";
    Joueur2->afficher();
    system("pause");
    system("CLS");

    //selection team
    cout<<"\nA toi de choisir : "<<Joueur1->getNom()<<"\n"<<endl;
    Joueur1->choixFighters();
    Joueur1->affTeam();
    system("pause");
    system("CLS");
    cout<<"\nA toi de choisir : "<<Joueur2->getNom()<<"\n"<<endl;
    Joueur2->choixFighters();
    Joueur2->affTeam();
    system("pause");
    system("CLS");

    /*
    //selection potion
    cout<<"\n"<<Joueur1->getNom()<<" choisi ta potion !"<<endl;
    Joueur1->recupPotion();
    cout<<"\n"<<Joueur2->getNom()<<" choisi ta potion !"<<endl;
    Joueur2->recupPotion();
    */


    /*

    int i=0;
    int j=0;

    //selection[i]=selection[0]

    joueur1->attaque();
    joueur2->attaque();
    joueur1->testVie(i);
    joueur2->testVie(j);



    //selection[i]=selection[1]
    */

    delete Joueur1;
    delete Joueur2;

    return 0;
}
