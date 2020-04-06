#ifndef COMBATTANT_H
#define COMBATTANT_H
#include "Arme.h"
#include <string>
#include <vector>
using namespace std;

class combattan
{
    public:
        combattan(string nom, int attaque, int defense, int vie);
        virtual ~combattan();

        string getNom();
        void setNom(string nom);
        int getAttaque();
        void setAttaque(int attaque);
        int getDefense();
        void setDefense(int defense);
        int getVie();
        void setVie(int vie);
        int getX();
        void setX(int x);
        int getY();
        void setY(int y);

        void creer();
        void afficher();
        void donnerUnCoup(combattan* );
        void recoitDegats(int degats);

    protected:


    private:
        string nom;
        int attaque;
        int defense;
        int vie;
        //int x;
        //int y;
};

#endif // COMBATTANT_H
