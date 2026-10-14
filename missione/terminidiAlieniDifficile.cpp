#ifndef TERMINIDI_ALIENI_DIFFICILI_CPP
#define TERMINIDI_ALIENI_DIFFICILI_CPP

#include "../inventario/arma.cpp"
#include "../inventario/initializer.cpp"
#include "loadout.cpp"

#include <vector>
#include <string>
using namespace std;
class terminidiAlieniDifficile: public loadout
{
    public:
    

        virtual vector<categoria> inizializzatore()
        {
            return ptri->inizializzatoreTermindiAlieniDifficile();
        }

};

#endif