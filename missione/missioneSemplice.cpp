#include <vector>
#include "../inventario/initializer.cpp"
using namespace std;

class missioneSemplice
{
    public:
        vector<vector<arma*>> loadoutMissioneSemplice;
        initializer* ptri;
        missioneSemplice()
        {            
            ptri = new initializer();
            ptri->metodiMissioneSemplice(loadoutMissioneSemplice);
            
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
        
        void stampaLoadoutMissioneSemplice()
        {
            for(auto firstElement : loadoutMissioneSemplice)
            {
                for(auto secondElement : firstElement)
                {
                    cout << secondElement->nome << " | ";
                }

                cout << endl;
            }
        }
};