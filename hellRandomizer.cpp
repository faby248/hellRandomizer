#include <iostream>
#include <string>
#include "missione/creazioneLoadout.cpp"

/*
Obiettivo: randomizzare loadout di Helldivers 2.

Ragionamento: manteniamo una certa coerenza.
1 - il loadout cambia in base a un certo range della difficoltà: <= 5 accettate tutte le armi, > 5 solo armi che hanno anticarro o speciali.
2 - non posso avere 4 elementi dello stesso tipo, una volta selezionato un elemento, nelle celle successive viene escluso dalla selezione.
3 - armi con backpack escludono la selezione di backpack.
4 - veicoli limitati a 1.
*/
using namespace std;

int main ()
{
    
    int sceltaFazione = 0;
    int difficolta = 0;
    int numeroGiocatori = 0;

    // fazione della missione
    while(sceltaFazione != 1 && sceltaFazione != 2)
    {
        cout << "Inserire fazione della missione: - 1 = automaton; - 2 = Terminidi / Alieni" << endl;
        cin >> sceltaFazione;
    }
    cout << endl;

    // difficoltà missione
    while(difficolta <= 0 || difficolta > 10)
    {
        cout << "Inserire difficolta missione compresa tra 1 e 10: ";
        cin >> difficolta;
    }
    cout << endl;

    // numero giocatori
    while(numeroGiocatori <= 0 || numeroGiocatori > 4)
    {
        cout << "Inserire numero giocatori: ";
        cin >> difficolta;
    }
    cout << endl;
    
    creazioneLoadoutFinale result;
    result.chiamaMetodo(sceltaFazione, difficolta, numeroGiocatori);

    return 0;
}
