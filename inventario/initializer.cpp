#include "armiDerivate.cpp"
using namespace std;
class initializer
{
    public:
        vector<arma*>           listaLeggeraMedia;
        vector<arma*>      listaPesanteSenzaZaino;
        vector<arma*>        listaPesanteConZaino;
        vector<arma*>   listaAnticarroConsumabile; 
        vector<arma*>       listaAnticarroNormale;
        vector<arma*>      listaAnticarroConZaino;
        vector<arma*>            listaIncendiario;
        vector<arma*>             listaZainoSalto;
        vector<arma*>           listaZainoSupport;
        vector<arma*>             listaZainoSpara;
        vector<arma*>             listaZainoScudo;
        vector<arma*>                listaVeicolo;
        vector<arma*>   listaTorrettaLeggeraMedia;
        vector<arma*>         listaFortificazione;
        vector<arma*>      listaTorrettaAnticarro;
        vector<arma*>        listaTorrettaSupport;
        vector<arma*>    listaTorrettaIncendiaria;
        vector<arma*>               listaOrbitale;
        vector<arma*>                  listaEagle;
 
        void initializerListaLeggeraMedia           () { for(auto nomeArma : {"MG-43", "M-105", "GL-21", "S-11", "RL-77"} )listaLeggeraMedia.push_back(new leggeraMedia(nomeArma)); }
        void initializerListaPesanteSenzaZaino      () { for(auto nomeArma : {"CQC-20", "MG-206", "RS-422", "APW-1", "PLAS-45", "ARC-3"} ) listaPesanteSenzaZaino.push_back(new pesanteSenzaZaino(nomeArma)); }
        void initializerListaPesanteConZaino        () { for(auto nomeArma : {"AC-8", "GL-28"} ) listaPesanteConZaino.push_back(new pesanteConZaino(nomeArma)); }
        void initializerListaAnticarroConsumabile   () { for(auto nomeArma : {"MLS-4X", "EAT-411","MS-11","EAT-17"} ) listaAnticarroConsumabile.push_back(new anticarroConsumabile(nomeArma)); }
        void initializerListaAnticarroNormale       () { for(auto nomeArma : {"LAS-99"} ) listaAnticarroNormale.push_back(new anticarroNormale(nomeArma)); }
        void initializerListaAnticarroConZaino      () { for(auto nomeArma : {"FAF-14", "StA-X3", "GR-8"} ) listaAnticarroConZaino.push_back(new anticarroConZaino(nomeArma)); }
        void initializerListaIncendiario            () { for(auto nomeArma : {"FLAM-40", "LAS-98", "EAT-700"} ) listaIncendiario.push_back(new incendiario(nomeArma)); }
        void initializerListaZainoSalto             () { for(auto nomeArma : {"LIFT-182", "LIFT-860", "LIFT-850"} ) listaZainoSalto.push_back(new zainoSalto(nomeArma)); }
        void initializerListaZainoSupport           () { for(auto nomeArma : {"B-1", "B-100"} ) listaZainoSupport.push_back(new zainoSupport(nomeArma)); }
        void initializerListaZainoSpara             () { for(auto nomeArma : {"AX/AR-23", "AX/LAS-5"} ) listaZainoSpara.push_back(new zainoSpara(nomeArma)); }
        void initializerListaZainoScudo             () { for(auto nomeArma : {"SH-32", "SH-51", "SH-20"} ) listaZainoScudo.push_back(new zainoScudo(nomeArma)); }
        void initializerListaVeicolo                () { for(auto nomeArma : {"TD-200", "M-103", "M-102", "EXO-49", "EXO-45"} ) listaVeicolo.push_back(new veicolo(nomeArma)); }
        void initializerListaTorrettaLeggeraMedia   () { for(auto nomeArma : {"A/G-16", "A/MG-43", "A/M-12", "E/MG-101"} ) listaTorrettaLeggeraMedia.push_back(new torrettaLeggeraMedia(nomeArma)); }
        void initializerListaFortificazione         () { for(auto nomeArma : {"FX-12", "E/GL-21", "A/ARC-3", "MD-17", "MD-8", "MD-6", "MD-14"} ) listaFortificazione.push_back(new fortificazione(nomeArma)); }
        void initializerListaTorrettaAnticarro      () { for(auto nomeArma : { "A/MLS-4X", "A/AC-8", "E/AT-12" } ) listaTorrettaAnticarro.push_back(new torrettaAnticarro(nomeArma)); }
        void initializerListaTorrettaSupport        () { for(auto nomeArma : {"A/M-23 EMS", "A/GM-17"} ) listaTorrettaSupport.push_back(new torrettaSupport(nomeArma)); }
        void initializerListaTorrettaIncendiaria    () { for(auto nomeArma : {"A/FLAM-40", "A/LAS-98"} ) listaTorrettaIncendiaria.push_back(new torrettaIncendiaria(nomeArma)); }
        void initializerListaOrbitale               () { for(auto nomeArma : {"orbitale di precisione", "orbitale gatling", "orbitale gas", "orbitale 120mm", "orbitale esplosivo aereo", "orbitale fumo", "orbitale elettrico", "orbitale 380mm", "orbitale mobile", "orbitale laser", "orbitale napalm", "orbitale railcannon"} ) listaOrbitale.push_back(new orbitale(nomeArma)); }
        void initializerListaEagle                  () { for(auto nomeArma : {"eagle strafing", "eagle random airstrike", "eagle grappolo", "eagle fumogeno", "eagle napalm", "eagle precisone 110mm", "eagle 500kg"} ) listaEagle.push_back(new eagle(nomeArma)); }

        void metodiMissioneSemplice(vector<vector<arma*>>& popolaLoadoutMissioneSemplice)
        {
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
        }
};