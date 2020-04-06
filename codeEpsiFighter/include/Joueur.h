#include "Potion.h"
#include "Fighter.h"
#ifndef JOUEUR_H
#define JOUEUR_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();

        string getNom();
        void setNom(string nom);

        void afficher();
        void demande();
        void choixFighters();
        void recupPotion();

    protected:

    private:
        string nom;
        vector<Fighter*> team;
        vector<Potion*> inventaire;
};

#endif // JOUEUR_H
