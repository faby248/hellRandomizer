#ifndef TERMINIDI_ALIENI_DIFFICILI_CPP
#define TERMINIDI_ALIENI_DIFFICILI_CPP

#include "../inventario/arma.cpp"
#include "../inventario/initializer.cpp"
#include "loadout.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class terminidiAlieniDifficile: public loadout
{
    public:
        virtual void giveLoadout() const
        {
            cout << "| " ;
            for (int i = 0; i < 4; ++i)
            {
                // random_device rd;
                // mt19937 gen(rd());
                cout << "arma: " << (i + 1) << " | ";                
            }
            cout << endl;
        }
};

#endif