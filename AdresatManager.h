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
    PlikZAdresatami plikZAdresatami;


    public:
    AdresatManager(string nazwaPlikuZAdresatami) :
        plikZAdresatami (nazwaPlikuZAdresatami)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };

    void wypiszWszystkichAdresatow();
    void ustawIdZalogowanegoUzytkownika (int noweId);





};

#endif
