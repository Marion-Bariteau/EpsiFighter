#ifndef ARENE_H
#define ARENE_H
#include <string>
#include <iostream>
#include <cstdlib>
#include "Eleve.h"
using namespace std;

class Arene
{
    public:
        Arene();
        virtual ~Arene();
        void afficher();
        Eleve* getJoueur1();
        void setJoueur1(Eleve* joueur1);
        Eleve* getJoueur2();
        void setJoueur2(Eleve* joueur2);

    protected:

    private:
        int hauteur = 10;
        int largeur = 25;
        Eleve* joueur1=NULL;
        Eleve* joueur2=NULL;
};

#endif // ARENE_H
