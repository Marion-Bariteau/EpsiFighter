#include "joueurs.h"
#include "combattan.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

#include <windows.h>

#include <algorithm>
#include <iomanip>

using namespace std;

joueurs::joueurs()
{
    //ctor
    this->nomUtilisateur = nomUtilisateur;
    //this->Selection=Selection;
    //this->valU=valU;
}

joueurs::~joueurs()
{
    //dtor
}

/*void setcolor(int color) {
    #ifdef _WIN32
    SetConsoleTextAttribute(hstdout, color);
    #else
    cout << "\033[" + to_string(color) + "m";
    #endif
}

void log(string text, int color = BLANC) {
    setcolor(color);
    cout << text;
}

void logln(string text, int color = BLANC) {
    log(text + "\n", color);
}*/

string joueurs::getNom(){
    return this->nomUtilisateur;
}
void joueurs::setNom(string nomUtilisateur){
    this->nomUtilisateur=nomUtilisateur;
}
void joueurs::demande(){
    cout << "\nQuel est le nom du joueur" << endl;
    cin >> nomUtilisateur;

}
void joueurs::afficher(){
   // cout << "Quel est ton nom,joueur1 ?" << endl;
    //cin >> nomUtilisateur;
    cout << "\nTu t'appelles : " << this->nomUtilisateur << "." <<endl;
}


combattan* joueurs::getSelection(int i){
    return this->selection[i];
}


void joueurs::selectionCombattant(){

    vector <combattan*> combattants;
    combattants.push_back(new combattan("Bro", 10,20,100));
    combattants.push_back(new combattan("Reynold", 15,10,120));
    combattants.push_back(new combattan("Sherami", 20,30,110));
    combattants.push_back(new combattan("Cadeau", 10,40,90));
    combattants.push_back(new combattan("Le-Boucher", 15,30,110));
    combattants.push_back(new combattan("Rohmeuf", 15,40,120));
    combattants.push_back(new combattan("Mi-chalait", 15,20,100));
    combattants.push_back(new combattan("Fer-eau-niere", 20,10,100));
    combattants.push_back(new combattan("Meurise", 15,20,120));
    combattants.push_back(new combattan("Sur-zur", 15,15,100));


// boucle

    while(this->selection.size()<3){
        int rep =0;
        cout << "\nMenu de selection des combattants" << endl;
        for(int i=0;i<combattants.size();i++){
            cout << i << " : " ;
            combattants[i]->afficher();
        }
        cout << "\nEntrez le numéro d'un combattant !" << endl;
        cin >> rep;
        if(rep<combattants.size() && rep>=0){
            cout << "\nVous avez choisis :" << endl;
            combattants[rep]->afficher();
            this->selection.push_back(combattants[rep]);
            combattants.erase(combattants.begin()+rep);
        }
        else{
        cout << "\n Erreur de saisie" << endl;
        }
    }
}

void joueurs::tabSelection(){

    //vector <combattan*> selection;
    for(int i=0; i<selection.size();i++){
        cout << this->selection[i]->getNom() << endl;
    }
}

// seletionducombattant : liste combzttant joueur prend en ex : getCombattantActif  .. combattant qui a fde la vie // si plus de vie meurt tout dans joueur
void joueurs::getCombattantActif(int vie){
    vie = true;
    for(int i=0; i<selection.size();i++){
        if(this->selection[i]==true){
            cout << this->selection[i]->getNom() << endl;
        }
        else(this->selection[i]==false){

        }
    }
}
