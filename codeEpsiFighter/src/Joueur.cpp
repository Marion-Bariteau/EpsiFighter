#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;


Joueur::Joueur(string nom)
{
    //ctor
    this->nom=nom;
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
