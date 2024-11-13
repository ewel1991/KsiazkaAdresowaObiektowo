#ifndef PLIKZUADRESATAMI_h
#define PLIKZADRESATAMI_h


#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

class PlikTekstowy;

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    //const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void edytujWybranaLinieWPliku(Adresat adresat);

public:

/*
    PlikZAdresatami(string nazwaPlikuZAdresatami) :  NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
    };
    */
    PlikZAdresatami(string nazwaPliku) :  PlikTekstowy(nazwaPliku)
    {
        idOstatniegoAdresata = 0;
    };



    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata (int noweId);
    int pobierzIdOstatniegoAdresata();
    bool dopiszAdresataDoPliku(Adresat adresat);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    int pobierzZPlikuIdOstatniegoAdresata();
    //void zaktualizujDaneWybranegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);

};

#endif
