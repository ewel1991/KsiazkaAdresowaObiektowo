#ifndef ADRESATMANAGER_h
#define ADRESATMANAGER_h

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "Uzytkownik.h"
#include "PlikZAdresatami.h"
#include "UzytkownikManager.h"

using namespace std;

class AdresatManager
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;


    public:
    AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami (nazwaPlikuZAdresatami) {}

    void ustawIdZalogowanegoUzytkownika(int noweId);


};

#endif
