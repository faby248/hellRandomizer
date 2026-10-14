#ifndef ARMI_DERIVATE_CPP
#define ARMI_DERIVATE_CPP

#include "arma.cpp"
using namespace std;
// #1 LeggeraMedia, difficoltà d'uso: tutto <= 5
class leggeraMedia: virtual public arma
{
    public:
        leggeraMedia() = default;
        leggeraMedia(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "leggeraMedia"; }


};

// #2 PesanteSenzaZaino difficoltà d'uso: tutto <= 5, terminidi > 5, alieni > 5
class pesanteSenzaZaino: virtual public arma
{
    public:
        pesanteSenzaZaino() = default;
        pesanteSenzaZaino(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "pesanteSenzaZaino"; }
    };

// #3 PesanteConZaino difficoltà d'uso: tutto <= 5, terminidi > 5, alieni > 5
class pesanteConZaino: virtual public arma
{
    public:
        pesanteConZaino() = default;
        pesanteConZaino(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "pesanteConZaino"; }
};

// #4 AnticarroConsumabile difficoltà d'uso: tutto 
class anticarroConsumabile: virtual public arma
{
    public:
        anticarroConsumabile() =default;
        anticarroConsumabile(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "anticarroConsumabile"; }
};

// #5 AnticarroNormale difficoltà d'uso: tutto > 5
class anticarroNormale: virtual public arma
{
    public:
        anticarroNormale() = default;
        anticarroNormale(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "anticarroNormale"; }
};

// #6 AnticarroConZaino difficoltà d'uso: tutto > 5
class anticarroConZaino: virtual public arma
{
    public:
        anticarroConZaino() = default;
        anticarroConZaino(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "anticarroConZaino"; }
};

// #7 Incendiario difficoltà d'uso: tutto <= 5, terminidi > 5, alieni > 5
class incendiario: virtual public arma
{
    public:
        incendiario() = default;
        incendiario(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "incendiario"; }
};

// #8 ZainoSalto difficoltà d'uso: tutto <= 5, , terminidi > 5, alieni > 5
class zainoSalto: virtual public arma
{
    public:
        zainoSalto() = default;
        zainoSalto(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "zainoSalto"; }
};

// #9 ZainoSupport difficoltà d'uso: tutto 
class zainoSupport: virtual public arma
{
    public:
        zainoSupport() = default;
        zainoSupport(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "zainoSupport"; }
};

// #10 ZainoSpara difficoltà d'uso: tutto <= 5, terminidi > 5, alieni > 5
class zainoSpara: virtual public arma
{
    public:
        zainoSpara() = default;
        zainoSpara(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "zainoSpara"; }
};

// #11 ZainoScudo difficoltà d'uso: tutto 
class zainoScudo: virtual public arma
{
    public:
        zainoScudo() = default;
        zainoScudo(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "zainoScudo"; }
};

// #12 Veicolo difficoltà d'uso: tutto 
class veicolo: virtual public arma
{
    public:
        veicolo() = default;
        veicolo(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "veicolo"; }
};

// #13 TorretteLeggereMedie difficoltà d'uso: tutto <= 5, terminidi > 5, alieni > 5
class torrettaLeggeraMedia: virtual public arma
{
    public:
        torrettaLeggeraMedia() = default;
        torrettaLeggeraMedia(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "torrettaLeggeraMedia"; }
};

// #14 Fortificazione difficoltà d'uso: tutto <= 5, bot > 5
class fortificazione: virtual public arma
{
    public:
        fortificazione() = default;
        fortificazione(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "fortificazione"; }
};

// #15 TorretteAnticarro difficoltà d'uso: tutto > 5
class torrettaAnticarro: virtual public arma
{
    public:
        torrettaAnticarro() = default;
        torrettaAnticarro(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "torrettaAnticarro"; }
};

// #16 TorretteSupport difficoltà d'uso: tutto <= 5
class torrettaSupport: virtual public arma
{
    public:
        torrettaSupport() = default;
        torrettaSupport(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "torrettaSupport"; }
};

// #17 TorrettaIncendiaria difficoltà d'uso: tutto <= 5, terminidi > 5, alieni > 5
class torrettaIncendiaria: virtual public arma
{
    public:
        torrettaIncendiaria() = default;
        torrettaIncendiaria(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "torrettaIncendiaria"; }
};

// #18 Orbitale difficoltà d'uso: tutto
class orbitale: virtual public arma
{
    public:
        orbitale() = default;
        orbitale(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "orbitale"; }
};

// #19 Eagle difficoltà d'uso: tutto
class eagle: virtual public arma
{
    public:
        eagle() = default;
        eagle(const string& att): arma(att) {}
        virtual string getNome() const override { return nome; }
        virtual string getClasse() const { return "eagle"; }
};

#endif