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

    void wyswietlDaneAdresata(Adresat adresat);


public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) :
        plikZAdresatami (nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {

        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    }


    //void ustawIdZalogowanegoUzytkownika (int noweId);
    //void ustawIdOstatniegoAdresata (int noweId);
    //int pobierzIdOstatniegoAdresata();
    void wyswietlWszystkichAdresatow();
    //void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();
    //void wylogowanie();
    Adresat podajDaneNowegoAdresata();





};

#endif
