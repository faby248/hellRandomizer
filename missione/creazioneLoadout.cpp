#ifndef CREAZIONE_LOADOUT_CPP
#define CREAZIONE_LOADOUT_CPP

#include "../inventario/arma.cpp"
#include "missione.cpp"
#include "automatonDifficile.cpp"
#include "terminidiAlieniDifficile.cpp"
#include "missioneSemplice.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class creazioneLoadoutFinale
{
    public:
        missione* ptr;
        void chiamaMetodo(int fazione, int difficolta, int giocatori)
        {
            if (difficolta <= 5)  { ptr = new missioneSemplice(); }
            else if(fazione == 1) { ptr = new automatonDifficile(); }
            else if(fazione == 2) { ptr = new terminidiAlieniDifficile(); }

            for (int i = 0 ; i < giocatori; ++i) 
            {
                cout << "Load out giocatore numero "  << (i + 1) << " : ";
                ptr->giveLoadout();
            }

            delete ptr;
        }
};

#endif