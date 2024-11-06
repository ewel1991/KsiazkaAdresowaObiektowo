#ifndef KSIAZKAADRESOWA_h
#define KSIAZKAADRESOWA_h


#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{

    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;
    int idZalogowanegoUzytkownika;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami)
    {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    };

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wypiszWszystkichUzytkownikow();
    void wyswietlWszystkichAdresatow();

    //void dodajAdresata();
    void wypiszWszystkichAdresatow();


};

#endif
