#ifndef AUTOMATON_DIFFICILE_CPP
#define AUTOMATON_DIFFICILE_CPP


#include "../inventario/arma.cpp"
#include "../inventario/armiDerivate.cpp"
#include "../inventario/initializer.cpp"
#include "missione.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class automatonDifficile: public missione
{
    public:
        vector<arma*> loadoutAutomatonDifficile;
        automatonDifficile() {}
        virtual void giveLoadout() const {}
};

#endif