// #include "armi.cpp"
#include <armiDerivate.cpp>
// #include "vector" 
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

        initializer()
        {
            
            listaAnticarroNormale.insert(listaAnticarroNormale.end(),
            { new anticarroNormale("LAS-99") } );

            listaAnticarroConZaino.insert(listaAnticarroConZaino.end(),
            { new anticarroConZaino("FAF-14"), new anticarroConZaino("StA-X3"), new anticarroConZaino("GR-8") } );

            listaTorrettaAnticarro.insert(listaTorrettaAnticarro.end(),
            { new torrettaAnticarro("A/MLS-4X"), new torrettaAnticarro("A/AC-8"), new torrettaAnticarro("E/AT-12") } );
        
        }
 
        void initializerListaLeggeraMedia           (const vector<string>& lista) { for(auto nomeArma : lista ) listaLeggeraMedia.push_back             (new leggeraMedia(nomeArma)); }
        void initializerListaPesanteSenzaZaino      (const vector<string>& lista) { for(auto nomeArma : lista ) listaPesanteSenzaZaino.push_back        (new pesanteSenzaZaino(nomeArma)); }
        void initializerListaPesanteConZaino        (const vector<string>& lista) { for(auto nomeArma : lista ) listaPesanteConZaino.push_back          (new pesanteConZaino(nomeArma)); }
        void initializerListaAnticarroConsumabile   (const vector<string>& lista) { for(auto nomeArma : lista ) listaAnticarroConsumabile.push_back     (new anticarroConsumabile(nomeArma)); }
        void initializerListaAnticarroNormale       (const vector<string>& lista) { for(auto nomeArma : lista ) listaAnticarroNormale.push_back         (new anticarroNormale(nomeArma)); }
        void initializerListaAnticarroConZaino      (const vector<string>& lista) { for(auto nomeArma : lista ) listaAnticarroConZaino.push_back        (new anticarroConZaino(nomeArma)); }
        void initializerListaIncendiario            (const vector<string>& lista) { for(auto nomeArma : lista ) listaIncendiario.push_back              (new incendiario(nomeArma)); }
        void initializerListaZainoSalto             (const vector<string>& lista) { for(auto nomeArma : lista ) listaZainoSalto.push_back               (new zainoSalto(nomeArma)); }
        void initializerListaZainoSupport           (const vector<string>& lista) { for(auto nomeArma : lista ) listaZainoSupport.push_back             (new zainoSupport(nomeArma)); }
        void initializerListaZainoSpara             (const vector<string>& lista) { for(auto nomeArma : lista ) listaZainoSpara.push_back               (new zainoSpara(nomeArma)); }
        void initializerListaZainoScudo             (const vector<string>& lista) { for(auto nomeArma : lista ) listaZainoScudo.push_back               (new zainoScudo(nomeArma)); }
        void initializerListaVeicolo                (const vector<string>& lista) { for(auto nomeArma : lista ) listaVeicolo.push_back                  (new veicolo(nomeArma)); }
        void initializerListaTorrettaLeggeraMedia   (const vector<string>& lista) { for(auto nomeArma : lista ) listaTorrettaLeggeraMedia.push_back     (new torrettaLeggeraMedia(nomeArma)); }
        void initializerListaFortificazione         (const vector<string>& lista) { for(auto nomeArma : lista ) listaFortificazione.push_back           (new fortificazione(nomeArma)); }
        void initializerListaTorrettaAnticarro      (const vector<string>& lista) { for(auto nomeArma : lista ) listaTorrettaAnticarro.push_back        (new torrettaAnticarro(nomeArma)); }
        void initializerListaTorrettaSupport        (const vector<string>& lista) { for(auto nomeArma : lista ) listaTorrettaSupport.push_back          (new torrettaSupport(nomeArma)); }
        void initializerListaTorrettaIncendiaria    (const vector<string>& lista) { for(auto nomeArma : lista ) listaTorrettaIncendiaria.push_back      (new torrettaIncendiaria(nomeArma)); }
        void initializerListaOrbitale               (const vector<string>& lista) { for(auto nomeArma : lista ) listaOrbitale.push_back                 (new orbitale(nomeArma)); }
        void initializerListaEagle                  (const vector<string>& lista) { for(auto nomeArma : lista ) listaEagle.push_back                    (new eagle(nomeArma)); }
};

class missioneSemplice: public arma
{
    public:
        vector<vector<string>> loadoutMissioneSemplice;
        initializer* ptri;
        missioneSemplice()
        {
            ptri = new initializer();
            ptri->initializerListaLeggeraMedia          ({"MG-43", "M-105", "GL-21", "S-11", "RL-77"});
            ptri->initializerListaPesanteSenzaZaino     ({"CQC-20", "MG-206", "RS-422", "APW-1", "PLAS-45", "ARC-3"});
            ptri->initializerListaPesanteConZaino       ({"AC-8", "GL-28"});
            ptri->initializerListaAnticarroConsumabile  ({"MLS-4X", "EAT-411","MS-11","EAT-17"});
            ptri->initializerListaIncendiario           ({"FLAM-40", "LAS-98", "EAT-700"});
            ptri->initializerListaZainoSalto            ({"LIFT-182", "LIFT-860", "LIFT-850"});
            ptri->initializerListaZainoSupport          ({"B-1", "B-100"});
            ptri->initializerListaZainoSpara            ({"AX/AR-23", "AX/LAS-5"});
            ptri->initializerListaZainoScudo            ({"SH-32", "SH-51", "SH-20"});
            ptri->initializerListaVeicolo               ({"TD-200", "M-103", "M-102", "EXO-49", "EXO-45"});
            ptri->initializerListaTorrettaLeggeraMedia  ({"A/G-16", "A/MG-43", "A/M-12", "E/MG-101"});
            ptri->initializerListaFortificazione        ({"FX-12", "E/GL-21", "A/ARC-3", "MD-17", "MD-8", "MD-6", "MD-14"});
            ptri->initializerListaTorrettaSupport       ({"A/M-23 EMS", "A/GM-17"});
            ptri->initializerListaTorrettaIncendiaria   ({"A/FLAM-40", "A/LAS-98"});
            ptri->initializerListaOrbitale              ({"orbitale di precisione", "orbitale gatling", "orbitale gas", "orbitale 120mm", "orbitale esplosivo aereo", "orbitale fumo", "orbitale elettrico", "orbitale 380mm", "orbitale mobile", "orbitale laser", "orbitale napalm", "orbitale railcannon"});
            ptri->initializerListaEagle                 ({"eagle strafing", "eagle random airstrike", "eagle grappolo", "eagle fumogeno", "eagle napalm", "eagle precisone 110mm", "eagle 500kg"});

            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaLeggeraMedia.begin(),              ptri->listaLeggeraMedia.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaPesanteSenzaZaino.begin(),         ptri->listaPesanteSenzaZaino.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaPesanteConZaino.begin(),           ptri->listaPesanteConZaino.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaAnticarroConsumabile.begin(),      ptri->listaAnticarroConsumabile.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaIncendiario.begin(),               ptri->listaIncendiario.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaZainoSalto.begin(),                ptri->listaZainoSalto.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaZainoSupport.begin(),              ptri->listaZainoSupport.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaZainoSpara.begin(),                ptri->listaZainoSpara.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaZainoScudo.begin(),                ptri->listaZainoScudo.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaVeicolo.begin(),                   ptri->listaVeicolo.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaTorrettaLeggeraMedia.begin(),      ptri->listaTorrettaLeggeraMedia.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaFortificazione.begin(),            ptri->listaFortificazione.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaTorrettaSupport.begin(),           ptri->listaTorrettaSupport.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaTorrettaIncendiaria.begin(),       ptri->listaTorrettaIncendiaria.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaOrbitale.begin(),                  ptri->listaOrbitale.end());
            loadoutMissioneSemplice.insert(loadoutMissioneSemplice.end(), ptri->listaEagle.begin(),                     ptri->listaEagle.end());
        }
        
        virtual void giveLoadout() const
        {
            vector<vector<arma*>> copia;
            copia.insert(copia.end(), loadoutMissioneSemplice.begin(), loadoutMissioneSemplice.end());

            for (int i = 0; i < 4; ++i)
            {
                random_device rd;
                mt19937 gen(rd());

                uniform_int_distribution<> dis_IndexTipoArma(0, copia.size() - 1);
                int indexTipoArma = dis_IndexTipoArma(gen);

                uniform_int_distribution<> dis_IndexArma(0, copia[indexTipoArma].size() - 1);
                int indexArma = dis_IndexArma(gen);

                cout << "Arma " << i + 1 <<": [ " << copia[indexTipoArma][indexArma]->getNome() << " ] " << endl;


            }

            

            
        }
    };

class terminidiAlieniDifficile: public arma {
    public:
        vector<arma*> loadoutTerminidiAlieniDifficile;
        terminidiAlieniDifficile() {}
        virtual void giveLoadout() const {}
};


class automatonDifficile: public arma {
    public:
        vector<arma*> loadoutAutomatonDifficile;
        automatonDifficile() {}
        virtual void giveLoadout() const {}
};

class creazioneLoadoutFinale
{
    public:
        arma* ptr;
        void chiamaMetodo(int fazione, int difficolta, int giocatori)
        {
            arma* ptr;
            if (difficolta <= 5)  { ptr = new missioneSemplice(); }
            else if(fazione == 1) { ptr = new automatonDifficile(); }
            else if(fazione == 2) { ptr = new terminidiAlieniDifficile(); }

            for (int i = 0 ; i < giocatori; ++i) ptr->giveLoadout();
            delete ptr;
        }
};