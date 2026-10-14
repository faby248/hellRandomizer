#ifndef MISSIONE_CPP
#define MISSIONE_CPP

#include "inventario/arma.cpp"
#include "inventario/armiDerivate.cpp"
#include "inventario/initializer.cpp"

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class missione
{
    public:
        virtual void giveLoadout() const 
        {}
};

#endif