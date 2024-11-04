#ifndef ADRESATMANAGER_h
#define ADRESATMANAGER_h

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatManager
{
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;


    void wyswietlDaneAdresata(Adresat adresat);


    public:
    AdresatManager(string nazwaPlikuZAdresatami) :
        plikZAdresatami (nazwaPlikuZAdresatami)
    {
    };

    void ustawIdZalogowanegoUzytkownika (int noweId);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void dodajAdresata();





};

#endif
