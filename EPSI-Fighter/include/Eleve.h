#ifndef ELEVE_H
#define ELEVE_H
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Eleve
{
    private:
        string nom;
        int attaque;
        int defense;
        int hp;
        int x;
        int y;

    public:

        Eleve(string nom, int attaque, int defense, int x, int y);
        virtual ~Eleve();

        string getNom();
        void setNom(string nom);
        int getAttaque();
        void setAttaque(int attaque);
        int getDefense();
        void setDefense(int defense);
        int getHp();
        void setHp(int hp);
        int getX();
        void setX(int x);
        int getY();
        void setY(int y);

        void afficher();

        void donnerUnCoup(Eleve* cible);

        void subirDegats (int D);

        void deplacer();

    protected:
};

#endif // ELEVE_H
