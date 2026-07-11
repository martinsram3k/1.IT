#include <iostream>
#include "vypocty.h"

using namespace std;

int main()
{
    double aritmetickyPrumer = 0;
    int pocetSudychCisel = 0;

    zpracujCisla(aritmetickyPrumer, pocetSudychCisel);

    if (aritmetickyPrumer != -1)
    {
        cout << "Pocet zadanych sudych cisel: " << pocetSudychCisel << endl;
        cout << "Aritmeticky prumer vsech cisel je: " << aritmetickyPrumer ;

    }
    else
    {
        cout << "\nNebylo zadano zadne platne cislo pro vypocet prumeru.\n";
    }

    return 0;
}
