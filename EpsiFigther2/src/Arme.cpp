#include "Arme.h"
#include <string>
#include <iostream>

using namespace std;

Arme::Arme(string nom, int attaque)
{
    //ctor
    this->nom=nom;
    this->attaque=attaque;
}

Arme::~Arme()
{
    //dtor
}

string Arme::getNom(){
    return this->nom;
}
void Arme::setNom(string nom){
    this->nom=nom;
}

int Arme::getAttaque(){
    return this->attaque;
}

void Arme::setAttaque(int attaque){
    this->attaque=attaque;
}

void Arme::afficher(){

    cout << this->getNom() << "(" << this->getAttaque() << ")" << endl;
}
