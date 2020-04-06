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
        int getShield();
        void setShield(int shield);

        void afficher();
        void frapper(Fighter* cible);
        void encaisser(int degats);
        void choix();


    protected:

    private:
        string nom;
        int attaque;
        int defense;
        int hp;
        int hpMax;
        bool shield;

};

#endif // FIGHTER_H
