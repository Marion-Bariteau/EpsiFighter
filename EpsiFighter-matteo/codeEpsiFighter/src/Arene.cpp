#include "Arene.h"
#include <cstdlib>

Arene::Arene()
{
    //ctor
}

Arene::~Arene()
{
    //dtor
}


void Arene::afficher(){
    int i;
    int j;
    cout << "        A B C D E F G H I J K L M N O P Q R S T V W X Y Z              Les joueurs peuvent se deplacer de 3 cases" << endl;
    cout << "      | # # # # # # # # # # # # # # # # # # # # # # # # # |" << endl;
    for(j=0;j<10;j++){
        cout << "     " << j << "| ";
        for(i=0;i<25;i++){
            if(joueur1!=NULL && i==joueur1->getX() && j==joueur1->getY() ){
                cout << "1 ";
            }
            else if(joueur2!=NULL && i==joueur2->getX() && j==joueur2->getY()){
                cout << "2 ";
            }
            else{
                cout << ". ";
            }
        }
        cout << "|" << j << "\n";
    }
    cout << "      | # # # # # # # # # # # # # # # # # # # # # # # # # |" << endl;
    cout << "        A B C D E F G H I J K L M N O P Q R S T V W X Y Z  " << endl;
}

Joueur*  Arene::getJoueur1(){
    return this->joueur1;
}

Joueur* Arene::getJoueur2(){
    return this->joueur2;
}

void Arene::setJoueur1(Joueur* joueur1){
    this->joueur1=joueur1;
}

void Arene::setJoueur2(Joueur* joueur2){
    this->joueur2=joueur2;
}
