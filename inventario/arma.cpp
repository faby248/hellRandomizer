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
        bool support;
        vector<string> stratagemmi;
        categoria(unsigned s, bool sup, const vector<string>& strat): slot(s), support(sup), stratagemmi(move(strat)) {}

        // non mi interessano i metodi di get
};

#endif