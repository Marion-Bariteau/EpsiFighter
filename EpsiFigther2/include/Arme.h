#ifndef ARME_H
#define ARME_H
#include <string>
#include <vector>

using namespace std;

class Arme
{
    public:
        Arme(string nom, int attaque);
        virtual ~Arme();

        string getNom();
        void setNom(string nom);
        int getAttaque();
        void setAttaque(int attaque);

        void afficher();

    protected:


    private:
        string nom;
        int attaque;
};

#endif // ARME_H
