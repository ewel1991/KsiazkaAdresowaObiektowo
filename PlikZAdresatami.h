#ifndef PLIKZUADRESATAMI_h
#define PLIKZADRESATAMI_h



#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;

    //string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    //bool czyPlikJestPusty();
    //Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);


public:

    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami (NAZWAPLIKUZADRESATAMI)
    {

    };
    //void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //vector <Uzytkownik> wczytajUzytkownikowZPliku();

};

#endif
