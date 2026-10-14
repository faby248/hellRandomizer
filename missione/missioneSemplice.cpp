#ifndef MISSIONE_SEMPLICE_CPP
#define MISSIONE_SEMPLICE_CPP

#include "../inventario/arma.cpp"
#include "../inventario/armiDerivate.cpp"
#include "../inventario/initializer.cpp"
#include "missione.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class missioneSemplice: public missione
{
    public:
        vector<vector<arma*>> loadoutMissioneSemplice;
        initializer* ptri;
        
        // costruttore, l'inizializzazione del loadout vienelasciato alla classe initializer
        missioneSemplice()
        {            
            ptri = new initializer();
            ptri->inizializzatoreMissioneSemplice(loadoutMissioneSemplice);       
        }
        
        virtual void giveLoadout() const
        {

            for (int i = 0; i < 4; ++i)
            {
                // random_device rd;
                // mt19937 gen(rd());
                cout << "arma: " << (i + 1) << " | ";                
            }
            cout << endl;
        }
        
        void stampaLoadoutMissioneSemplice()
        {
            for(auto firstElement : loadoutMissioneSemplice)
            {
                for(auto secondElement : firstElement)
                {
                    cout << secondElement->nome << " | ";
                }

                cout << endl;
            }
        }
};

#endif