#include "Joueur.h"
#include "Potion.h"
#include "Fighter.h"
#include <vector>
#include <string>
#include <iostream>

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

void Joueur::afficher()
{
    cout<<this->nom<<endl;
}

void Joueur::demande()
{
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
            cout<<"\n";
            this->team.push_back(fighters[rep]);
            fighters.erase(fighters.begin()+rep);
        }
        else
        {
            cout<<"Erreur de saisie"<<endl;
        }
    }
}

void Joueur::affTeam()
{
    for(int i=0;i<team.size();i++)
    {
        cout<<i<<" : ";
        team[i]->afficher();
    }
}

/*void Joueur::recupPotion()
{
    vector<Potion*> potions;
    potions.push_back(new Potion(0));
    potions.push_back(new Potion(1));

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
            Potion* potChoisi=potions[rep];
            cout<<"Vous avez choisi : ";
            potChoisi->afficher();
            cout<<"\n";
            this->inventaire.push_back(potChoisi);
        }
        else
        {
            cout<<"Erreur de saisie"<<endl;
        }
    }
}*/

void Joueur::commandes()
{
    string jeu;
    jeu="null";
    while(jeu=="null")
    {
        cout<<this->nom<<" c'est a toi !"<<"\na : attaquer\nd : se deplacer\nc : utiliser arme\ne : ouvrir inventaire"<<endl;
        cin>>jeu;
        if(jeu=="a")
        {

        }

        if(jeu=="d")
        {

        }

        if(jeu=="c")
        {

        }

        /*if(jeu=="e")
        {
            if(inventaire.size()==0)
            {
                cout<<"Ton inventaire est vide"<<endl;
                jeu="null";
                break;
            }
            else
            {
                for(int i=0;i<inventaire.size();i++)
                {
                    inventaire[i]->afficher();
                }
            }
        }*/
    }
}

/*void Joueur::choisirPotion()
{
    int rep=-1;
    while(rep>=inventaire.size() || rep<0)
    {
        cout<<"Inventaire"<<endl;
        for(int i=0;i<inventaire.size();i++)
        {
            cout<<i<<" : ";
            inventaire[i]->afficher();
        }
        cout<<"\nEntrez le numero d'une potion !"<<endl;
        cin>>rep;
        if(rep<inventaire.size() && rep>=0)
        {
            cout<<"Vous avez choisi : ";
            inventaire[rep]->afficher();
            cout<<"\n";
            usePotion(inventaire[rep]->getType(), this);
            inventaire.erase(inventaire.begin()+rep);
        }
        else
        {
            cout<<"Erreur de saisie"<<endl;
        }
    }
}*/



/*void joueurs::testVie(int i)
{
    if(this->selection[i]0>getVie()<=0)
    {
        this->getCombattantActif(i);
    }
}

int joueurs::getCombattantActif(int i)
{
    i++;
    cout<<"Votre combattant actif a changer et est "<< this->selection[i]->afficher()<<endl;
    return i;
}*/
