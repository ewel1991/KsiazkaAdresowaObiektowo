#ifndef ADRESATMANAGER_h
#define ADRESATMANAGER_h

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "Adresat.h"
#include "Uzytkownik.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatManager
{
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;
    Adresat adresat;


    void wyswietlDaneAdresata(Adresat adresat);


    public:
    AdresatManager(string nazwaPlikuZAdresatami) :
        plikZAdresatami (nazwaPlikuZAdresatami)
    {
    };

    void ustawIdZalogowanegoUzytkownika (int noweId);
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();





};

#endif
