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

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);


public:

    PlikZUzytkownikami(string nazwaPliku) :  PlikTekstowy(nazwaPliku){};

    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();

};

#endif
