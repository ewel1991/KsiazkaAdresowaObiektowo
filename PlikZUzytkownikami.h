#ifndef PLIKZUZYTKOWNIKAMI_h
#define PLIKZUZYTKOWNIKAMI_h



#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

class PlikTekstowy;

using namespace std;

class PlikZUzytkownikami: public PlikTekstowy
{
    //const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);


public:

    //PlikZUzytkownikami(string nazwaPlikuZUzytkownikami) :  NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuZUzytkownikami){};
    PlikZUzytkownikami(string nazwaPliku) :  PlikTekstowy(nazwaPliku){};

    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();

};

#endif
