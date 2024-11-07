#include "Uzytkownik.h"

void Uzytkownik::ustawId (int noweId)
{
    if (noweId >=0)
        id = noweId;
}


void Uzytkownik::ustawIdZalogowanegoUzytkownika (int noweId)
{
    if (noweId >=0)
        idZalogowanegoUzytkownika = noweId;
}


void Uzytkownik::ustawLogin(string nowyLogin)
{
    login = nowyLogin;
}
void Uzytkownik::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
}

int Uzytkownik::pobierzId()
{
    return id;
}

int Uzytkownik::pobierzIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}


string Uzytkownik::pobierzLogin()
{
    return login;
}
string Uzytkownik::pobierzHaslo()
{
    return haslo;
}
