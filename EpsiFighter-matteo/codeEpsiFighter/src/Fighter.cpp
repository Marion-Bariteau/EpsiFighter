#include "Fighter.h"
#include "Joueur.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


Fighter::Fighter(string nom, int attaque, int defense, int hpMax)
{
    //ctor
    this->nom=nom;
    this->attaque=attaque;
    this->defense=defense;
    this->hpMax=hpMax;
    this->hp=this->hpMax;
    this->x = x;
    this->y = y;
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

int Fighter::getHpMax()
{
    return this->hpMax;
}

void Fighter::setHpMax(int hpMax)
{
    this->hpMax=hpMax;
}

void Fighter::setHp(int hp)
{
    this->hp=hp;
}

int Fighter::getX(){
    return this->x;
}
void Fighter::setX(int x){
    this->x=x;
}
int Fighter::getY(){
    return this->y;
}
void Fighter::setY(int y){
    this->y=y;
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
    // if shield > 0 ?
    if(this->shield==0)
    {
        degats-=degats*this->defense/100;
        this->hp-=degats;
    }
}
