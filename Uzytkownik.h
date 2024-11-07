#ifndef UZYTKOWNIK_h
#define UZYTKOWNIK_h

#include <iostream>

using namespace std;

class Uzytkownik
{
int id;
int idZalogowanegoUzytkownika;
string login;
string haslo;

public:
    void ustawId (int noweId);
    void ustawIdZalogowanegoUzytkownika (int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    int pobierzIdZalogowanegoUzytkownika();
    string pobierzLogin();
    string pobierzHaslo();


};


#endif
