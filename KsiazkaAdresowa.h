#ifndef KSIAZKAADRESOWA_h
#define KSIAZKAADRESOWA_h


#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{

    UzytkownikManager uzytkownikManager;

    AdresatManager *adresatManager;

    const string NAZWA_PLIKU_Z_ADRESATAMI;




public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikManager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        adresatManager = NULL;
    };



    ~KsiazkaAdresowa()
    {
        delete adresatManager;
        adresatManager = NULL;
    }



    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void edytujAdresata();
    void wyswietlWszystkichAdresatow();
    void wypiszWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    void wylogowanie();
    bool czyUzytkownikJestZalogowany();


};

#endif
