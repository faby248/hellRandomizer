#ifndef TERMINIDI_ALIENI_DIFFICILI_CPP
#define TERMINIDI_ALIENI_DIFFICILI_CPP

#include "../inventario/arma.cpp"
#include "../inventario/armiDerivate.cpp"
#include "../inventario/initializer.cpp"
#include "missione.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class terminidiAlieniDifficile: public missione
{
    public:
        vector<arma*> loadoutTerminidiAlieniDifficile;
        terminidiAlieniDifficile() {}
        virtual void giveLoadout() const {}
};

#endif