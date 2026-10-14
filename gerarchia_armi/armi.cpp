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
        arma(const string& att): nome(att) {}
        virtual ~arma () = 0;        
        virtual void giveLoadout() const {/* metodo che viene implementato dalle derivate in base al tipo di missione */}
        virtual string getNome() const {}
        virtual string getClasse() const {}
        virtual void rimuoviClasseArma(vector<vector<arma*>>& loadout) { }
};