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
        virtual vector<string> giveLoadout() const {}
};

#endif