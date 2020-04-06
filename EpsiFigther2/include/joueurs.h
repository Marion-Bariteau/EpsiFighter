#ifndef JOUEURS_H
#define JOUEURS_H
#include <string>
#include <vector>
#include "combattan.h"

using namespace std;

class joueurs
{
    public:
        joueurs();
        virtual ~joueurs();

        string getNom();
        void setNom(string nomUtilisateur);


        void afficher();
        void demande();
        void selectionCombattant();
        void tabSelection();
        combattan* getSelection(int i);
        combattan* getCombattantActif(int vie);


    protected:
        //vector <combattant*> combattants
    private:
        string nomUtilisateur;
        vector <combattan*> selection;
        combattan* combattantActif;

};

#endif // JOUEURS_H
