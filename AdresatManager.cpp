#include "AdresatManager.h"




void AdresatManager::ustawIdZalogowanegoUzytkownika (int noweId)
{
    if (noweId >=0)
        idZalogowanegoUzytkownika = noweId;
}

void AdresatManager::ustawIdOstatniegoAdresata (int noweId)
{
    if (noweId >=0)
        idOstatniegoAdresata = noweId;
}

int AdresatManager::pobierzIdOstatniegoAdresata()
{
    return idOstatniegoAdresata;
}

void AdresatManager:: wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}


void AdresatManager::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}

void AdresatManager::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}


void AdresatManager::dodajAdresata()
{

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    //dopiszAdresataDoPliku(adresat);

    ustawIdOstatniegoAdresata(++idOstatniegoAdresata);

}

Adresat AdresatManager::podajDaneNowegoAdresata()
{
    string imie = "", nazwisko = "";
    //int idOstatniegoAdresa;
    //idOstatniegoAdresata = adresat.pobierzIdOstatniegoAdresata();
    ustawIdOstatniegoAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata());
    cout << idOstatniegoAdresata << endl;

    adresat.ustawId (++idOstatniegoAdresata);
    cout << adresat.pobierzId() << endl;
    adresat.ustawIdUzytkownika (idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres (MetodyPomocnicze::wczytajLinie());

    return adresat;
}

