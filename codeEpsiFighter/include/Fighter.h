#ifndef FIGHTER_H
#define FIGHTER_H
#include <string>
#include <iostream>
using namespace std;


class Fighter
{
    public:
        Fighter(string nom, int attaque, int defense);
        virtual ~Fighter();

        string getNom();
        void setNom(string nom);
        int getAttaque();
        void setAttaque(int attaque);
        int getDefense();
        void setDefense(int defense);
        int getHp();
        void setHp(int hp);

        void donnerUnCoup(Fighter* cible);
        void subirDegats (int D);
        void afficher();


    protected:

    private:
        string nom;
        int attaque;
        int defense;
        int hp;

};

#endif // FIGHTER_H

