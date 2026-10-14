#ifndef ARMI_CPP
#define ARMI_CPP

#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

// #0 Arma
/*
    # classe base astratta
    # da i metodi di base
*/
class arma
{
    public:
        string nome;
        arma() = default;
        arma(const string& att): nome(att) {}
        virtual ~arma () = default;
        virtual string getNome() const { return nome;}
        virtual string getClasse() const { return "arma";}


        
        virtual void rimuoviClasseArma(vector<vector<arma*>>& loadout) { }
};

#endif