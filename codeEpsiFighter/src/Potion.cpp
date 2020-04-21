#include "Potion.h"
#include "Fighter.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
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

void Potion::usePotion(int type, Fighter* user)
{
    //Type 0 : 20% de vie supplémentaire
    if(type==0)
    {
        user->getHp()=user->getHp()+0,2*user->getHpMax();
    }

    //Type 1 : shield (annule entièrement les dégâts subit pour un tour)
    if(type==1)
    {
        user->setShield(1);
    }

    //Type 2 : attaque augmentée de 10% au prochain coup
    if(type==2)
    {
        user->setAtt(1);
    }

    //Type 3 : défense augmentée de 10% aux prochains dégâts
    if(type==3)
    {
        user->setDef(1);
    }
}

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
*/
