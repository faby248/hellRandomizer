#ifndef INITIALIZER_CPP
#define INITIALIZER_CPP

#include "arma.cpp"
using namespace std;
class initializer
{
    public:
 
        // < ---- INIZIALIZZATORI LISTE ---- >
        // modificare qui quando si aggiunge un'arma al loadout
        vector<string> listaLeggeraMedia           () { return {"MG-43", "M-105", "GL-21", "S-11", "RL-77"}; }
        vector<string> listaPesanteSenzaZaino      () { return {"CQC-20", "MG-206", "RS-422", "APW-1", "PLAS-45", "ARC-3"}; }
        vector<string> listaPesanteConZaino        () { return {"AC-8", "GL-28"}; }
        vector<string> listaAnticarroConsumabile   () { return {"MLS-4X", "EAT-411","MS-11","EAT-17"}; }
        vector<string> listaAnticarroNormale       () { return {"LAS-99"}; }
        vector<string> listaAnticarroConZaino      () { return {"FAF-14", "StA-X3", "GR-8"}; }
        vector<string> listaIncendiario            () { return {"FLAM-40", "LAS-98", "EAT-700"}; }
        vector<string> listaZainoSalto             () { return {"LIFT-182", "LIFT-860", "LIFT-850"}; }
        vector<string> listaZainoSupport           () { return {"B-1", "B-100"}; }
        vector<string> listaZainoSpara             () { return {"AX/AR-23", "AX/LAS-5"}; }
        vector<string> listaZainoScudo             () { return {"SH-32", "SH-51", "SH-20"}; }
        vector<string> listaVeicolo                () { return {"TD-200", "M-103", "M-102", "EXO-49", "EXO-45"}; }
        vector<string> listaTorrettaLeggeraMedia   () { return {"A/G-16", "A/MG-43", "A/M-12", "E/MG-101"}; }
        vector<string> listaFortificazione         () { return {"FX-12", "E/GL-21", "A/ARC-3", "MD-17", "MD-8", "MD-6", "MD-14"}; }
        vector<string> listaTorrettaAnticarro      () { return { "A/MLS-4X", "A/AC-8", "E/AT-12" }; }
        vector<string> listaTorrettaSupport        () { return {"A/M-23 EMS", "A/GM-17"}; }
        vector<string> listaTorrettaIncendiaria    () { return {"A/FLAM-40", "A/LAS-98"}; }
        vector<string> listaOrbitale               () { return {"orbitale di precisione", "orbitale gatling", "orbitale gas", "orbitale 120mm", "orbitale esplosivo aereo", "orbitale fumo", "orbitale elettrico", "orbitale 380mm", "orbitale mobile", "orbitale laser", "orbitale napalm", "orbitale railcannon"}; }
        vector<string> listaEagle                  () { return {"eagle strafing", "eagle random airstrike", "eagle grappolo", "eagle fumogeno", "eagle napalm", "eagle precisone 110mm", "eagle 500kg"}; }

        // INIZIALIZZATORE MISSIONE SEMPLICE
        void inizializzatoreMissioneSemplice()
        {   
            /*
            initializerListaLeggeraMedia           ();
            initializerListaPesanteSenzaZaino      ();
            initializerListaPesanteConZaino        ();
            initializerListaAnticarroConsumabile   ();
            initializerListaIncendiario            ();
            initializerListaZainoSalto             ();
            initializerListaZainoSupport           ();
            initializerListaZainoSpara             ();
            initializerListaZainoScudo             ();
            initializerListaVeicolo                ();
            initializerListaTorrettaLeggeraMedia   ();
            initializerListaFortificazione         ();
            initializerListaTorrettaSupport        ();
            initializerListaTorrettaIncendiaria    ();
            initializerListaOrbitale               ();
            initializerListaEagle                  ();

            popolaLoadoutMissioneSemplice.push_back(listaLeggeraMedia);
            popolaLoadoutMissioneSemplice.push_back(listaPesanteSenzaZaino);
            popolaLoadoutMissioneSemplice.push_back(listaPesanteConZaino);
            popolaLoadoutMissioneSemplice.push_back(listaAnticarroConsumabile);
            popolaLoadoutMissioneSemplice.push_back(listaIncendiario);
            popolaLoadoutMissioneSemplice.push_back(listaZainoSalto);
            popolaLoadoutMissioneSemplice.push_back(listaZainoSupport);
            popolaLoadoutMissioneSemplice.push_back(listaZainoSpara);
            popolaLoadoutMissioneSemplice.push_back(listaZainoScudo);
            popolaLoadoutMissioneSemplice.push_back(listaVeicolo);
            popolaLoadoutMissioneSemplice.push_back(listaTorrettaLeggeraMedia);
            popolaLoadoutMissioneSemplice.push_back(listaFortificazione);
            popolaLoadoutMissioneSemplice.push_back(listaTorrettaSupport);
            popolaLoadoutMissioneSemplice.push_back(listaTorrettaIncendiaria);
            popolaLoadoutMissioneSemplice.push_back(listaOrbitale);
            popolaLoadoutMissioneSemplice.push_back(listaEagle);
            */
        }

        void inizializzatoreAutomatonDifficile()
        {
            /*
            initializerListaAnticarroConsumabile   ();
            initializerListaAnticarroNormale       ();
            initializerListaAnticarroConZaino      ();
            initializerListaZainoSupport           ();
            initializerListaZainoScudo             ();
            initializerListaVeicolo                ();
            initializerListaFortificazione         ();
            initializerListaTorrettaAnticarro      ();
            initializerListaOrbitale               ();
            initializerListaEagle                  ();

            popolaLoadoutAutomatonDifficile.push_back(listaAnticarroConsumabile);
            popolaLoadoutAutomatonDifficile.push_back(listaAnticarroNormale);
            popolaLoadoutAutomatonDifficile.push_back(listaAnticarroConZaino);
            popolaLoadoutAutomatonDifficile.push_back(listaZainoSupport);
            popolaLoadoutAutomatonDifficile.push_back(listaZainoScudo);
            popolaLoadoutAutomatonDifficile.push_back(listaVeicolo);
            popolaLoadoutAutomatonDifficile.push_back(listaFortificazione);
            popolaLoadoutAutomatonDifficile.push_back(listaTorrettaAnticarro);
            popolaLoadoutAutomatonDifficile.push_back(listaOrbitale);
            popolaLoadoutAutomatonDifficile.push_back(listaEagle);
            */
        }

        void inizializzatoreTermindiAlieniDifficile()
        {
            /*
            initializerListaPesanteSenzaZaino      ();
            initializerListaPesanteConZaino        ();
            initializerListaAnticarroConsumabile   ();
            initializerListaAnticarroNormale       ();
            initializerListaAnticarroConZaino      ();
            initializerListaIncendiario            ();
            initializerListaZainoSalto             ();
            initializerListaZainoSupport           ();
            initializerListaZainoSpara             ();
            initializerListaZainoScudo             ();
            initializerListaVeicolo                ();
            initializerListaTorrettaLeggeraMedia   ();
            initializerListaTorrettaAnticarro      ();
            initializerListaTorrettaIncendiaria    ();
            initializerListaOrbitale               ();
            initializerListaEagle                  ();

            popolaLoadoutTermindiAlieniDifficile.push_back(listaPesanteSenzaZaino);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaPesanteConZaino);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaAnticarroConsumabile);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaAnticarroNormale);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaAnticarroConZaino);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaIncendiario);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaZainoSalto);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaZainoSupport);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaZainoSpara);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaZainoScudo);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaVeicolo);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaTorrettaLeggeraMedia);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaTorrettaAnticarro);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaTorrettaIncendiaria);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaOrbitale);
            popolaLoadoutTermindiAlieniDifficile.push_back(listaEagle);
            */
        }
    };

#endif