#ifndef ADRESATMANAGER_h
#define ADRESATMANAGER_h

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatManager
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    int idUsuwanegoAdresata;

    void wyswietlDaneAdresata(Adresat adresat);
    char wybierzOpcjeZMenuEdycja();


public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) :
        plikZAdresatami (nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {

        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }



    void wyswietlWszystkichAdresatow();
    void dodajAdresata();
    void edytujAdresata();
    void usunAdresata();
    int pobierzIdUsunietegoAdresata();
    Adresat podajDaneNowegoAdresata();
    int podajIdWybranegoAdresata();
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);






};

#endif
