#include "Potion.h"

#ifndef JOUEUR_H
#define JOUEUR_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Joueur
{
    public:
        Joueur(string nom);
        virtual ~Joueur();

        string getNom();
        void setNom(string nom);

        void stockPotion(Potion* potion);
        void afficher();

    protected:

    private:
        string nom;
        vector<Joueur*> inventaire;
};

#endif // JOUEUR_H
