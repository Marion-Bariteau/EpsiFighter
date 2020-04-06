#include "Potion.h"
#include "Fighter.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Potion::Potion(int type)
{
    //ctor
    this->type=type;
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

/*Potion* Potion::recupPotion(int type)
{
    srand(time(NULL)); //initialisation de rand

    this->type=(rand()%4)+1;

    switch(this->type)
        {
            case 1 : Potion* potVie=new Potion(this->type); inventaire.push_back(potVie); cout<<"Tu as obtenu une potion de vie !"<<endl; break;
            case 2 : Potion* potShield=new Potion(this->type); inventaire.push_back(potShield); cout<<"Tu as obtenu une potion de shield !"<<endl; break;
            case 3 : Potion* potAtt=new Potion(this->type); inventaire.push_back(potAtt); cout<<"Tu as obtenu une potion d'attaque !"<<endl; break;
            case 4 : Potion* potDef=new Potion(this->type); inventaire.push_back(potDef); cout<<"Tu as obtenu une potion de defense !"<<endl; break;
            default : cout<<"Potion invalide"<<endl; rep=0; break;
        }
    return potion;
}*/

/*void Potion::usePotion(int type, Fighter* frappe, Fighter* cible)
{
     //Type 0 : 20% de vie supplémentaire
    if(type==1)
    {
        int hp;

        hp=cible->getHp()+0,2*cible->getHpMax();
        setHp(hp);
    }

    //Type 1 : shield (annule entièrement les dégâts subit pour un tour)
    if(type==2)
    {
        setShield(1);
    }

    //Type 2 : attaque augmentée de 10% au prochain coup
    if(type==3)
    {
        int degats;

        degats=frappe->getAttaque()+0,1*frappe->getAttaque();

    }

    //Type 3 : défense augmentée de 10% aux prochains dégâts
    if(type==4)
    {

    }
}*/

void Potion::afficher()
{
    cout<<"Potion "<<this->type<<" > ";
    if(this->type==0)
    {
        cout<<"20% de vie supplementaire"<<endl;
    }
    if(this->type==1)
    {
        cout<<"shield (annule entierement les degats subit pour un tour)"<<endl;
    }
    if(this->type==2)
    {
        cout<<"Attaque augmentee de 10% au prochain coup"<<endl;
    }
    if(this->type==3)
    {
        cout<<"Defense augmentee de 10% aux prochains degats"<<endl;
    }
}
