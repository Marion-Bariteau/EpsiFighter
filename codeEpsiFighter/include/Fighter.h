#ifndef FIGHTER_H
#define FIGHTER_H
#include <string>
#include <iostream>
using namespace std;


class Fighter
{
    public:
        Fighter(string nom, int attaque, int defense, int hpMax);
        virtual ~Fighter();

        string getNom();
        void setNom(string nom);
        int getAttaque();
        void setAttaque(int attaque);
        int getDefense();
        void setDefense(int defense);
        int getHp();
        void setHp(int hp);
        int getHpMax();
        void setHpMax(int hpMax);

        void frapper(Fighter* cible);
        void encaisser(int degats);
        void afficher();


    protected:

    private:
        string nom;
        int attaque;
        int defense;
        int hp;
        int hpMax;

};

#endif // FIGHTER_H

