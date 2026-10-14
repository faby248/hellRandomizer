#ifndef AUTOMATON_DIFFICILE_CPP
#define AUTOMATON_DIFFICILE_CPP


#include "../inventario/arma.cpp"
#include "../inventario/initializer.cpp"
#include "loadout.cpp"

#include <vector>
#include <string>
using namespace std;
class automatonDifficile: public loadout
{
    public:        
        virtual vector<categoria> inizializzatore()
        {
            return ptri->inizializzatoreAutomatonDifficile();
        }

};

#endif