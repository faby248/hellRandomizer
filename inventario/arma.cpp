#ifndef ARMI_CPP
#define ARMI_CPP

#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

enum Slot : unsigned {
    NESSUNO        = 0,
    ARMA           = 1 << 0,
    ZAINO          = 1 << 1,
    TORRETTA       = 1 << 2,
    FORTIFICAZIONE = 1 << 3,
    VEICOLO        = 1 << 4,
    ORBITALE       = 1 << 5,
    EAGLE          = 1 << 6
};

class categoria
{   
    public:
        unsigned slot;
        bool supporto;
        vector<string> stratagemmi;
        categoria(unsigned s, bool sup, const vector<string>& strat): slot(s), supporto(sup), stratagemmi(move(strat)) {}

        unsigned getSlot() const { return slot; }
        bool isSupporto() const { return supporto; }
    
        // Sorteggia un nome e lo toglie da questa categoria (precondizione: non vuota)
        string estrai(mt19937& gen) {
            size_t a = uniform_int_distribution<size_t>(0, stratagemmi.size() - 1)(gen);
            string scelto = stratagemmi[a];
            stratagemmi.erase(stratagemmi.begin() + a);
            return scelto;
        }
    
        // La categoria non è più selezionabile dato lo stato attuale del loadout?
        bool inConflitto(unsigned occupati, int nSupporto) const {
            return stratagemmi.empty()
                || (slot & occupati)
                || (nSupporto >= 2 && supporto);
        }
        
};

#endif