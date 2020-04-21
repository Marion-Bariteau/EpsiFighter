#include "Fighter.h"
#include <string>
#include <iostream>
using namespace std;


Fighter::Fighter(string nom, int attaque, int defense, int hpMax)
{
    //ctor
    this->nom=nom;
    this->attaque=attaque;
    this->defense=defense;
    this->hpMax=hpMax;
    this->hp=this->hpMax;
}

Fighter::~Fighter()
{
    //dtor
}

string Fighter::getNom()
{
    return this->nom;
}

void Fighter::setNom(string nom)
{
    this->nom=nom;
}

int Fighter::getAttaque()
{
    return this->attaque;
}

void Fighter::setAttaque(int attaque)
{
    this->attaque=attaque;
}

int Fighter::getDefense()
{
    return this->defense;
}

void Fighter::setDefense(int defense)
{
    this->defense=defense;
}

int Fighter::getHp()
{
    return this->hp;
}

void Fighter::setHp(int hp)
{
    this->hp=hp;
}

int Fighter::getHpMax()
{
    return this->hpMax;
}

void Fighter::setHpMax(int hpMax)
{
    this->hpMax=hpMax;
}

int Fighter::getVie()
{
    return this->vie;
}

void Fighter::setVie(bool vie)
{
    this->vie=vie;
}

int Fighter::getShield()
{
    return this->shield;
}

void Fighter::setShield(bool shield)
{
    this->shield=shield;
}

int Fighter::getAtt()
{
    return this->att;
}

void Fighter::setAtt(bool att)
{
    this->att=att;
}

int Fighter::getDef()
{
    return this->def;
}

void Fighter::setDef(bool def)
{
    this->def=def;
}


void Fighter::afficher()
{
    cout<<this->nom<<" ("<<this->attaque<<"/"<<this->defense<<") ["<<this->hp<<"]"<<endl;
}

void Fighter::frapper(Fighter* cible)
{
    cible->encaisser(this->attaque);
}

void Fighter::encaisser(int degats)
{
    if(this->shield==0)
    {
        degats-=degats*this->defense/100;
        this->hp-=degats;
    }
    else
    {
        degats=0;
        this->shield=0;
    }
}

void Fighter::prendreVie()
{
    if(this->vie==1)
    {
        this->hp=this->hp+0,2*hpMax;
        this->vie=0;
    }
}

/*void Fighter::plusAtt()
{
    if(this->att==1)
    {
        this->attaque=this->attaque+0,1*this->attaque;
    }
}

void Fighter::plusDef()
{
    if(this->def==1)
    {
        this->defense=this->defense+
    }
}*/
