#include "Joueur.h"
#include "Potion.h"
#include "Fighter.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <algorithm>
#include <iomanip>

using namespace std;


Joueur::Joueur()
{
    //ctor
}

Joueur::~Joueur()
{
    //dtor
}

string Joueur::getNom()
{
    return this->nom;
}

void Joueur::setNom(string nom)
{
    this->nom=nom;
}

int Joueur::getX(){
    return this->x;
}
void Joueur::setX(int x){
    this->x=x;
}
int Joueur::getY(){
    return this->y;
}
void Joueur::setY(int y){
    this->y=y;
}

void Joueur::afficher()
{
    cout<<this->nom<<endl;
}

void Joueur::demande()
{
    //cout << "\nQuel est le nom du joueur" << endl;
    cin>>this->nom;
}

void Joueur::choixFighters()
{
    vector <Fighter*> fighters;
    fighters.push_back(new Fighter("Bro", 10,20,100));
    fighters.push_back(new Fighter("Reynold", 15,10,120));
    fighters.push_back(new Fighter("Sherami", 20,30,110));
    fighters.push_back(new Fighter("Cadeau", 10,40,90));
    fighters.push_back(new Fighter("Le-Boucher", 15,30,110));
    fighters.push_back(new Fighter("Rohmeuf", 15,40,120));
    fighters.push_back(new Fighter("Mi-chalait", 15,20,100));
    fighters.push_back(new Fighter("Fer-eau-niere", 20,10,100));
    fighters.push_back(new Fighter("Meurise", 15,20,120));
    fighters.push_back(new Fighter("Sur-zur", 15,15,100));


// boucle
    while(this->team.size()<3){
        int rep =0;
        cout<<"Menu de selection des fighters"<<endl;
        for(int i=0;i<fighters.size();i++)
        {
            cout<<i<<" : ";
            fighters[i]->afficher();
        }
        cout<<"\nEntrez le numero d'un fighter !"<<endl;
        cin>>rep;
        if(rep<fighters.size() && rep>=0)
        {
            cout<<"Vous avez choisi : ";
            fighters[rep]->afficher();
            cout<<"\n"; //endl; ?
            this->team.push_back(fighters[rep]);
            fighters.erase(fighters.begin()+rep);
        }
        else
        {
            cout<<"Erreur de saisie"<<endl;
        }
    }
}

void Joueur::recupPotion()
{
    vector<Potion*> potions;
    potions.push_back(new Potion(0));
    potions.push_back(new Potion(1));
    potions.push_back(new Potion(2));
    potions.push_back(new Potion(3));

    int rep=-1;
    while(rep>=potions.size() || rep<0)
    {
        cout<<"Liste des potions"<<endl;
        for(int i=0;i<potions.size();i++)
        {
            potions[i]->afficher();
        }
        cout<<"\nEntrez le numero d'une potion !"<<endl;
        cin>>rep;
        if(rep<potions.size() && rep>=0)
        {
            cout<<"Vous avez choisi : ";
            potions[rep]->afficher();
            cout<<"\n";
            this->inventaire.push_back(potions[rep]);
        }
        else
        {
            cout<<"Erreur de saisie"<<endl;
        }
    }
}
