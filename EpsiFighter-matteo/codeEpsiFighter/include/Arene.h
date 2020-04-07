#ifndef ARENE_H
#define ARENE_H
#include <string>
#include <iostream>
#include <cstdlib>
#include "Joueur.h"
using namespace std;

class Arene
{
    public:
        Arene();
        virtual ~Arene();
        void afficher();
        Joueur* getJoueur1();
        void setJoueur1(Joueur* joueur1);
        Joueur* getJoueur2();
        void setJoueur2(Joueur* joueur2);

    protected:

    private:
        int hauteur = 10;
        int largeur = 25;
        Joueur* joueur1=NULL;
        Joueur* joueur2=NULL;
};

#endif // ARENE_H
