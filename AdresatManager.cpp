#include "AdresatManager.h"




void AdresatManager::ustawIdZalogowanegoUzytkownika (int noweId)
{
    if (noweId >=0)
        idZalogowanegoUzytkownika = noweId;
}

void AdresatManager:: wyswietlWszystkichAdresatow(vector <Adresat> &adresaci)
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



