#ifndef PLIKTEKSTOWY_h
#define PLIKTEKSTOWY_h


#include <iostream>
#include <fstream>


using namespace std;

class PlikTekstowy
{

const string NAZWA_PLIKU;

public:

    PlikTekstowy (string nazwaPliku) : NAZWA_PLIKU(nazwaPliku){}
    bool czyPlikJestPusty();
    string pobierzNazwePliku();



};

#endif
