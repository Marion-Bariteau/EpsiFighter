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
        int getVie();
        void setVie(bool vie);
        int getShield();
        void setShield(bool shield);
        int getAtt();
        void setAtt(bool att);
        int getDef();
        void setDef(bool def);

        void afficher();
        void frapper(Fighter* cible);
        void encaisser(int degats);
        void choix();
        void prendreVie();

    protected:

    private:
        string nom;
        int attaque;
        int defense;
        int hp;
        int hpMax;
        bool vie;
        bool shield;
        bool att;
        bool def;

};

#endif // FIGHTER_H
