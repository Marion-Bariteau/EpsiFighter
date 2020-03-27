#include "Fighter.h"
#include <string>
#include <iostream>
using namespace std;


Fighter::Fighter(string nom, int attaque, int defense)
{
    //ctor
    this->nom=nom;
    this->attaque=attaque;
    this->defense=defense;
    this->hp=100;
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

void Fighter::afficher()
{
    cout<<this->nom<<" ("<<this->attaque<<"/"<<this->defense<<") ["<<this->hp<<"]"<<endl;
}

void Fighter::donnerUnCoup(Fighter* cible)
{
    cible->subirDegats(this->attaque);
}

void Fighter::subirDegats(int degats)
{
    degats-=degats*this->defense/100;
    this->hp-=degats;
}
