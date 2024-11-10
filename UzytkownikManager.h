#ifndef UZYTKOWNIKMANAGER_h
#define UZYTKOWNIKMANAGER_h

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikManager
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    PlikZUzytkownikami plikZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);


    public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami (nazwaPlikuZUzytkownikami)
    {
    idZalogowanegoUzytkownika = 0;
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();

    };
    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void ustawIdZalogowanegoUzytkownika (int noweeId);
    int pobierzIdZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();

};

#endif
