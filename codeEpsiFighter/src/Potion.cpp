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
    //Type 1 : 20% de vie supplémentaire
    //Type 2 : shield (annule entièrement les dégâts subit pour un tour)
    //Type 3 : attaque augmentée de 10% au prochain coup
    //Type 4 : défense augmentée de 10% aux prochains dégâts

}

void Potion::usePotion(int type)
{

}

void Potion::afficher()
{

}
