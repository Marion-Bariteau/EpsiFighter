#include "Potion.h"
#include "Fighter.h"

#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

Potion::Potion(int type, int couleur): Fighter()
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
    srand(time(NULL)); //initialisation de rand

    this->type=(Rand()%4)+1;

    potion=new Potion(type);

    if(type==1) {cout<<"Tu as obtenu une potion de vie !"<<endl;}
    if(type==2) {cout<<"Tu as obtenu une potion de shield !"<<endl;}
    if(type==3) {cout<<"Tu as obtenu une potion d'attaque !"<<endl;}
    if(type==4) {cout<<"Tu as obtenu une potion de defense !"<<endl;}

    return potion;
}

void Potion::usePotion(int type) : Fighter
{
     //Type 1 : 20% de vie suppl�mentaire
    if(type==1)
    {
        int hp;

        hp=Fighter->getHp()+0,2*Fighter->getHpMax();
        setHp(hp);
    }

    //Type 2 : shield (annule enti�rement les d�g�ts subit pour un tour)
    if(type==2)
    {
        degats=0;
    }

    //Type 3 : attaque augment�e de 10% au prochain coup
    if(type==3)
    {

    }

    //Type 4 : d�fense augment�e de 10% aux prochains d�g�ts
    if(type==4)
    {

    }
}

void Potion::afficher()
{

}
