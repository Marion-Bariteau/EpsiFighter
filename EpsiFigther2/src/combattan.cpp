#include "combattan.h"
#include "joueurs.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

combattan::combattan(string nom, int attaque, int defense, int vie)
{
    //ctor
    this->nom = nom;
    this->attaque = attaque;
    this->defense = defense;
    this->vie = vie;
    this->x = x;
    this->y = y;
}

combattan::~combattan()
{
    //dtor
}

string combattan::getNom(){
    return this->nom;
}

void combattan::setNom(string nom){
    this->nom=nom;
}

int combattan::getAttaque(){
    return this->attaque;
}

void combattan::setAttaque(int attaque){
    this->attaque=attaque;
}

int combattan::getDefense(){
    return this->defense;
}

void combattan::setDefense(int defense){
    this->defense=defense;
}

int combattan::getVie(){
    return this->vie;
}

void combattan::setVie(int vie){
    this->vie=vie;
}

int combattan::getX(){
    return this->x;
}
void combattan::setX(int x){
    this->x=x;
}
int combattan::getY(){
    return this->y;
}
void combattan::setY(int y){
    this->y=y;
}

void combattan::afficher(){

    cout << "Le combattant " << this->nom << "(" << this->attaque << "/" << this->defense << "(vie :" << this->vie << "))" << endl;
   // cout << this->nom << " (" << this->attaque << "/" << this->defense << ") [" << this->vie << "]" << endl;
}

/*void combattan::affectArme(){


    vector <Arme*> equipement;
    equipement.push_back(new Arme("Clavier",10));
    equipement.push_back(new Arme("Barbe",20));
    equipement.push_back(new Arme("Traifle",15));
    equipement.push_back(new Arme("Hache",20));
    equipement.push_back(new Arme("Dico",10));
    equipement.push_back(new Arme("Ordi",20));
    equipement.push_back(new Arme("Calculatrice",15));
    equipement.push_back(new Arme("Chaton",20));
    equipement.push_back(new Arme("Lunettes",10));
    equipement.push_back(new Arme("Sanglier",15));

    for(int i=0;i<combattants.size();i++){
        for(int i=0;i<equipement.size();i++){
        combattants[i]->equipement[i];
        }
    }
}*/

void combattan::donnerUnCoup(combattan* cible){
   // ->recoitDegats(this->attaque);

}

void combattan::recoitDegats(int degats){
    degats-=degats*this->defense/100;
    this->vie-=degats;
}
