#ifndef MISSIONE_SEMPLICE_CPP
#define MISSIONE_SEMPLICE_CPP

#include "../inventario/arma.cpp"
#include "../inventario/initializer.cpp"
#include "loadout.cpp"

#include <vector>
#include <string>
using namespace std;

class missioneSemplice: public loadout
{
    public:
        
        virtual vector<categoria> inizializzatore()
        {
            return ptri->inizializzatoreMissioneSemplice();
        }

};

#endif