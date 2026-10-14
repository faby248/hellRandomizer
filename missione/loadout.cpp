#ifndef MISSIONE_CPP
#define MISSIONE_CPP

#include "../inventario/arma.cpp"
#include "../inventario/initializer.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class loadout
{
    public:
        // puntatore per chiamare la classe di inizializzazione adeguata
        initializer* ptri;
        static mt19937 gen;
        loadout(): ptri(new initializer()) {}
        // costruttore del load out, restituisce il loadout che viene poi stampato
        virtual vector<string> giveLoadout()
        {
            // chiamata polimorfa del metodo "inizializzatore()"
            vector<categoria> disponibili = inizializzatore();
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
        virtual vector<categoria> inizializzatore() = 0;
};

mt19937 loadout::gen(random_device{}());

#endif