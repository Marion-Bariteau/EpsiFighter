#ifndef POTION_H
#define POTION_H
#include <string>
#include <iostream>
using namespace std;


class Potion
{
    public:
        Potion(int type, int couleur);
        virtual ~Potion();

        int getType();
        void setType(int type);
        int getCouleur();
        void setCouleur(int couleur);

        Potion* recupPotion(int type);
        void usePotion(int type);
        void afficher();

    protected:

    private:
        int type;
        int couleur;
};

#endif // POTION_H
