#include "Joueur.h"
#include "Fighter.h"
#include "Potion.h"

#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


HANDLE hstdout;

#define BLEU 9
#define BLANC 15
#define ROUGE 12
#define VERT 10

void setCouleur(int couleur) {
    SetConsoleTextAttribute(hstdout, couleur);
}

void log(string text, int couleur = BLANC) {
    setCouleur(couleur);
    cout << text;
}

void logln(string text, int couleur = BLANC) {
    log(text + "\n", couleur);
}


int main()
{
    Fighter* Braux=new Fighter("Bro", 25, 10, 100);
    Fighter* Reinold=new Fighter("Kheynold", 20, 20, 120);
    Fighter* Cheramy=new Fighter("Cherami", 15, 15, 110);
    Fighter* Bouchet=new Fighter("Boucher", 20, 15, 115);
    Fighter* Cadot=new Fighter("Cadeau", 10, 40, 90);
    Fighter* Romeuf=new Fighter("Rohmeuf", 15, 20, 110);
    Fighter* Michalet=new Fighter("Mi-chalet", 15, 15, 120);
    Fighter* Ferronniere=new Fighter("Fereaunniere", 20, 10, 115);
    Fighter* Vallee=new Fighter("Vallee", 10, 20, 100);
    Fighter* SurzurDeLobel=new Fighter("Surzur de l'eau belle", 15, 10, 110);

    Braux->afficher();
    Reinold->afficher();
    Cheramy->afficher();
    Bouchet->afficher();
    Cadot->afficher();
    Romeuf->afficher();
    Michalet->afficher();
    Ferronniere->afficher();
    Vallee->afficher();
    SurzurDeLobel->afficher();

    delete Braux;
    delete Reinold;
    delete Cheramy;
    delete Bouchet;
    delete Cadot;
    delete Romeuf;
    delete Michalet;
    delete Ferronniere;
    delete Vallee;
    delete SurzurDeLobel;

    return 0;
}
