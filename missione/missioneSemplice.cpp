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
            vector<vector<arma*>> copia;
            copia.insert(copia.end(), loadoutMissioneSemplice.begin(), loadoutMissioneSemplice.end());

            for (int i = 0; i < 4; ++i)
            {
                random_device rd;
                mt19937 gen(rd());

                uniform_int_distribution<> dis_IndexTipoArma(0, copia.size() - 1);
                int indexTipoArma = dis_IndexTipoArma(gen);

                uniform_int_distribution<> dis_IndexArma(0, copia[indexTipoArma].size() - 1);
                int indexArma = dis_IndexArma(gen);

                cout << "Arma " << i + 1 <<": [ " << copia[indexTipoArma][indexArma]->getNome() << " ] " << endl;
            }            
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