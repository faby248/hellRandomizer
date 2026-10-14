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
        initializer* ptri;
        static mt19937 gen;
        loadout(): ptri(new initializer()) {}
        virtual vector<string> giveLoadout() const = 0;
};

mt19937 loadout::gen(random_device{}());

#endif