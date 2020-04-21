#include "Fighter.h"
#ifndef POTION_H
#define POTION_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Potion
{
    public:
        Potion(int type);
        virtual ~Potion();

        int getType();
        void setType(int type);

        void usePotion(int type, Fighter* user);
        void afficher();

    protected:

    private:
        int type;
};

#endif // POTION_H
