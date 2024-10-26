#ifndef KSIAZKAADRESOWA_h
#define KSIAZKAADRESOWA_h


#include <iostream>

#include "UzytkownikManager.h"

using namespace std;

class KsiazkaAdresowa
{

UzytkownikManager uzytkownikManager;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

};

#endif
