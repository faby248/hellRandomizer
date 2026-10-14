#include <iostream>
#include "missione/creazioneLoadout.cpp"

using namespace std;

int main ()
{
    
    int sceltaFazione = 0;
    int difficolta = 0;
    int numeroGiocatori = 0;

    // difficoltà missione
    while(difficolta <= 0 || difficolta > 10)
    {
        cout << "Inserire difficolta missione compresa tra 1 e 10: ";
        cin >> difficolta;
    }
    // cout << endl;

    // se la difficoltà è <= 5, non ha senso chiedere la fazione
    if (difficolta > 5) {
        // fazione della missione
        while(sceltaFazione != 1 && sceltaFazione != 2)
        {
            cout << "Inserire fazione della missione: - 1 = automaton; - 2 = Terminidi / Alieni" << endl;
            cin >> sceltaFazione;
        }
        // cout << endl;
    }
    // numero giocatori
    while(numeroGiocatori <= 0 || numeroGiocatori > 4)
    {
        cout << "Inserire numero giocatori: ";
        cin >> numeroGiocatori;
    }
    // cout << endl;
    
    creazioneLoadoutFinale result;
    result.chiamaMetodo(sceltaFazione, difficolta, numeroGiocatori);

    return 0;
}
