#include "Eleve.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;


Eleve::Eleve(string nom, int attaque, int defense, int x, int y)
{
    //ctor
    this->nom = nom;
    this->attaque = attaque;
    this->defense = defense;
    this->hp = 100;
    this->x = x;
    this-> y = y;
}

Eleve::~Eleve()
{
    //dtor
}

string Eleve::getNom(){
    return this->nom;
}

void Eleve::setNom(string nom){
    this->nom=nom;
}

int Eleve::getAttaque(){
    return this->attaque;
}

void Eleve::setAttaque(int attaque){
    this->attaque=attaque;
}

int Eleve::getDefense(){
    return this->defense;
}

void Eleve::setDefense(int defense){
    this->defense=defense;
}

int Eleve::getHp(){
    return this->hp;
}

void Eleve::setHp(int hp){
    this->hp=hp;
}

int Eleve::getX(){
    return this->x;
}

void Eleve::setX(int x){
    this->x=x;
}

int Eleve::getY(){
    return this->y;
}

void Eleve::setY(int y){
    this->y=y;
}

void Eleve::afficher(){
    cout << this->nom << " (" << this->attaque << "/" << this->defense << ") [" << this->hp << "]" << endl;
}

void Eleve::donnerUnCoup(Eleve* cible){
    cible->subirDegats(this->attaque);
    //cible->hp=cible->hp-this->attaque
}

void Eleve::subirDegats(int D){
    this->hp=hp-D;
}

void Eleve::deplacer(){
    string coordonnees;
    int x;
    int y;
    cout << this->nom << ", sur quelle case voulez-vous aller ?";
    cin >> coordonnees;
    //Vérifier
    if(coordonnees.length()==2){
        x=coordonnees[0]-'A';
        y=coordonnees[1]-'0';
        if(x<26 && x>=0 && y<10 && y>=0){
            this->setX(x);
            this->setY(y);
        }
            //if()
            //verifier l'écart entre x et this->x soit pas trop grand
            //pareil pour y
    }


}
