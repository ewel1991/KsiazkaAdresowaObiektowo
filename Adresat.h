#ifndef ADRESAT_h
#define ADRESAT_h

#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:

    void ustawId (int noweId);
    void ustawIdUzytkownika (int noweIdUzytkownika);
    void ustawImie (string noweImie);
    void ustawNazwisko (string noweNazwisko);
    void ustawNumerTelefonu (string nowyNumerTelefonu);
    void ustawEmail (string nowyEmail);
    void ustawAdres (string nowyAdres);


    int pobierzId();
    int pobierzIdUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();


};


#endif
