#ifndef METODYPOMOCNICZE_h
#define METODYPOMOCNICZE_h



#include <iostream>
#include <sstream>

using namespace std;

class MetodyPomocnicze
{
    public:
    static string konwerjsaIntNaString(int liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int konwersjaStringNaInt(string liczba);
};

#endif
