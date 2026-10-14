#ifndef TERMINIDI_ALIENI_DIFFICILI_CPP
#define TERMINIDI_ALIENI_DIFFICILI_CPP

#include "../inventario/arma.cpp"
#include "../inventario/initializer.cpp"
#include "loadout.cpp"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class terminidiAlieniDifficile: public loadout
{
    public:
    
        virtual vector<string> giveLoadout() const
        {
            vector<categoria> disponibili;
            ptri->inizializzatoreTermindiAlieniDifficile(disponibili);
            vector<string> loadout;
            unsigned occupati = 0;
            int nSupporto = 0;

            while (loadout.size() < 4 && !disponibili.empty())
            {
                size_t t = uniform_int_distribution<size_t>(0, disponibili.size() - 1)(gen);
                categoria& c = disponibili[t];
            
                loadout.push_back(c.estrai(gen));
                occupati |= c.getSlot();
                if (c.isSupporto()) ++nSupporto;
            
                disponibili.erase(remove_if(disponibili.begin(), disponibili.end(),
                    [&](const categoria& x) { return x.inConflitto(occupati, nSupporto); }),
                    disponibili.end());
            }
            return loadout;
        }
};

#endif