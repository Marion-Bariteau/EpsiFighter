#include "Potion.h"
#include <string>
#include <iostream>
using namespace std;

Potion::Potion(int type, int couleur)
{
    //ctor
    this->type=type;
    this->couleur=couleur;
}

Potion::~Potion()
{
    //dtor
}

int Potion::getType()
{
    return this->type;
}

void Potion::setType(int type)
{
    this->type=type;
}

int Potion::getCouleur()
{
    return this->couleur;
}

void Potion::setCouleur(int couleur)
{
    this->couleur=couleur;
}

Potion* Potion::recupPotion(int type)
{
    //Type 1 : 20% de vie suppl�mentaire
    //Type 2 : shield (annule enti�rement les d�g�ts subit pour un tour)
    //Type 3 : attaque augment�e de 10% au prochain coup
    //Type 4 : d�fense augment�e de 10% aux prochains d�g�ts

}

void Potion::usePotion(int type)
{

}

void Potion::afficher()
{

}
