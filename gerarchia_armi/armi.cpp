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
        virtual         ~arma () = 0;        
        virtual void    giveLoadout() const = 0;                                /* metodo che viene implementato dalle derivate in base al tipo di missione */ 
        virtual string  getNome() const = 0;                                    /* metodo per avere il nome dell'oggetto arma */ 
        virtual string  getClasse() const = 0;                                  /* metodo per avere il nome della classe */ 
        virtual void    rimuoviClasseArma(vector<vector<arma*>>& loadout) = 0;  /* metodo per rimuovere la classe "opposta" */
};