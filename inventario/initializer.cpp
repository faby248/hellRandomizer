#ifndef INITIALIZER_CPP
#define INITIALIZER_CPP

#include "arma.cpp"

#include <vector>
#include <functional>
using namespace std;
class initializer
{
    public:
        
        // < ---- INIZIALIZZATORI LISTE ---- >
        // modificare qui quando si aggiunge un'arma al loadout
        categoria listaLeggeraMedia           () { return categoria(ARMA, true, {"MG-43", "M-105", "GL-21", "S-11", "RL-77"}); }
        categoria listaPesanteSenzaZaino      () { return categoria(ARMA, true, {"CQC-20", "MG-206", "RS-422", "APW-1", "PLAS-45", "ARC-3"}); }
        categoria listaPesanteConZaino        () { return categoria(ARMA | ZAINO, true, {"AC-8", "GL-28"}); }
        categoria listaAnticarroConsumabile   () { return categoria(NESSUNO , true, {"MLS-4X", "EAT-411","MS-11","EAT-17"}); }
        categoria listaAnticarroNormale       () { return categoria(ARMA, true, {"LAS-99"}); }
        categoria listaAnticarroConZaino      () { return categoria(ARMA | ZAINO, true, {"FAF-14", "StA-X3", "GR-8"}); }
        categoria listaIncendiario            () { return categoria(ARMA, true, {"FLAM-40", "LAS-98", "EAT-700"}); }
        categoria listaZainoSalto             () { return categoria(ZAINO, false, {"LIFT-182", "LIFT-860", "LIFT-850"}); }
        categoria listaZainoSupport           () { return categoria(ZAINO, false, {"B-1", "B-100"}); }
        categoria listaZainoSpara             () { return categoria(ZAINO, false, {"AX/AR-23", "AX/LAS-5"}); }
        categoria listaZainoScudo             () { return categoria(ZAINO, false, {"SH-32", "SH-51", "SH-20"}); }
        categoria listaVeicolo                () { return categoria(VEICOLO, false, {"TD-200", "M-103", "M-102", "EXO-49", "EXO-45"}); }
        categoria listaTorrettaLeggeraMedia   () { return categoria(TORRETTA, false, {"A/G-16", "A/MG-43", "A/M-12", "E/MG-101"}); }
        categoria listaFortificazione         () { return categoria(FORTIFICAZIONE, false, {"FX-12", "E/GL-21", "A/ARC-3", "MD-17", "MD-8", "MD-6", "MD-14"}); }
        categoria listaTorrettaAnticarro      () { return categoria(TORRETTA, false, { "A/MLS-4X", "A/AC-8", "E/AT-12" }); }
        categoria listaTorrettaSupport        () { return categoria(TORRETTA, false, {"A/M-23 EMS", "A/GM-17"}); }
        categoria listaTorrettaIncendiaria    () { return categoria(TORRETTA, false, {"A/FLAM-40", "A/LAS-98"}); }
        categoria listaOrbitale               () { return categoria(ORBITALE, false, {"orbitale di precisione", "orbitale gatling", "orbitale gas", "orbitale 120mm", "orbitale esplosivo aereo", "orbitale fumo", "orbitale elettrico", "orbitale 380mm", "orbitale mobile", "orbitale laser", "orbitale napalm", "orbitale railcannon"}); }
        categoria listaEagle                  () { return categoria(EAGLE, false, {"eagle strafing", "eagle random airstrike", "eagle grappolo", "eagle fumogeno", "eagle napalm", "eagle precisone 110mm", "eagle 500kg"}); }

        // INIZIALIZZATORE MISSIONE SEMPLICE
        vector<categoria> inizializzatoreMissioneSemplice()
        {
            vector<categoria> LoadoutMissioneSemplice;
            LoadoutMissioneSemplice.push_back(listaLeggeraMedia());
            LoadoutMissioneSemplice.push_back(listaPesanteSenzaZaino());
            LoadoutMissioneSemplice.push_back(listaPesanteConZaino());
            LoadoutMissioneSemplice.push_back(listaAnticarroConsumabile());
            LoadoutMissioneSemplice.push_back(listaIncendiario());
            LoadoutMissioneSemplice.push_back(listaZainoSalto());
            LoadoutMissioneSemplice.push_back(listaZainoSupport());
            LoadoutMissioneSemplice.push_back(listaZainoSpara());
            LoadoutMissioneSemplice.push_back(listaZainoScudo());
            LoadoutMissioneSemplice.push_back(listaVeicolo());
            LoadoutMissioneSemplice.push_back(listaTorrettaLeggeraMedia());
            LoadoutMissioneSemplice.push_back(listaFortificazione());
            LoadoutMissioneSemplice.push_back(listaTorrettaSupport());
            LoadoutMissioneSemplice.push_back(listaTorrettaIncendiaria());
            LoadoutMissioneSemplice.push_back(listaOrbitale());
            LoadoutMissioneSemplice.push_back(listaEagle());
            return LoadoutMissioneSemplice;
        }

        vector<categoria> inizializzatoreAutomatonDifficile()
        {
            vector<categoria> LoadoutAutomatonDifficile;
            LoadoutAutomatonDifficile.push_back(listaAnticarroConsumabile());   
            LoadoutAutomatonDifficile.push_back(listaAnticarroNormale());   
            LoadoutAutomatonDifficile.push_back(listaAnticarroConZaino());   
            LoadoutAutomatonDifficile.push_back(listaZainoSupport());   
            LoadoutAutomatonDifficile.push_back(listaZainoScudo());   
            LoadoutAutomatonDifficile.push_back(listaVeicolo());   
            LoadoutAutomatonDifficile.push_back(listaFortificazione());   
            LoadoutAutomatonDifficile.push_back(listaTorrettaAnticarro());   
            LoadoutAutomatonDifficile.push_back(listaOrbitale());   
            LoadoutAutomatonDifficile.push_back(listaEagle());
            return LoadoutAutomatonDifficile;
        }

        vector<categoria> inizializzatoreTermindiAlieniDifficile()
        {
            vector<categoria> LoadoutTermindiAlieniDifficile;
            LoadoutTermindiAlieniDifficile.push_back(listaPesanteSenzaZaino());
            LoadoutTermindiAlieniDifficile.push_back(listaPesanteConZaino());
            LoadoutTermindiAlieniDifficile.push_back(listaAnticarroConsumabile());
            LoadoutTermindiAlieniDifficile.push_back(listaAnticarroNormale());
            LoadoutTermindiAlieniDifficile.push_back(listaAnticarroConZaino());
            LoadoutTermindiAlieniDifficile.push_back(listaIncendiario());
            LoadoutTermindiAlieniDifficile.push_back(listaZainoSalto());
            LoadoutTermindiAlieniDifficile.push_back(listaZainoSupport());
            LoadoutTermindiAlieniDifficile.push_back(listaZainoSpara());
            LoadoutTermindiAlieniDifficile.push_back(listaZainoScudo());
            LoadoutTermindiAlieniDifficile.push_back(listaVeicolo());
            LoadoutTermindiAlieniDifficile.push_back(listaTorrettaLeggeraMedia());
            LoadoutTermindiAlieniDifficile.push_back(listaTorrettaAnticarro());
            LoadoutTermindiAlieniDifficile.push_back(listaTorrettaIncendiaria());
            LoadoutTermindiAlieniDifficile.push_back(listaOrbitale());
            LoadoutTermindiAlieniDifficile.push_back(listaEagle());
            return LoadoutTermindiAlieniDifficile;
        }
    };

#endif