#include "KsiazkaAdresowa.h"

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    idZalogowanegoUzytkownika= uzytkownikManager.logowanieUzytkownika();
    adresatManager.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    adresatManager.wczytajAdresatowZalogowanegoUzytkownikaZPliku();

}


void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatManager.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatManager.dodajAdresata();
}


int KsiazkaAdresowa::wylogowanie()
{

    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        idZalogowanegoUzytkownika = uzytkownikManager.wylogowanieUzytkownika();
        adresatManager.wylogowanie();
        return idZalogowanegoUzytkownika;
    }
    else
        cout << "Nie jestes zalogowany" <<endl;

    return 0;

}


bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikManager.czyUzytkownikJestZalogowany();
}
