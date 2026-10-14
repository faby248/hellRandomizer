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