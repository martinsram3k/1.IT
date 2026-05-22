#include "vypocty.h"
#include <iostream>

using namespace std;

void zpracujCisla(double &prumer, int &sudePocet)
{
    int vlozeneCislo;
    double soucetCisel = 0;
    int pocetCisel = 0;
    sudePocet = 0;

    while (true)
    {
        cout << "Vlozte " << pocetCisel + 1 << ". cislo: ";
        cin >> vlozeneCislo;

        if (vlozeneCislo == 0)
        {
            break;
        }

        else if (vlozeneCislo > 0)
        {
            soucetCisel += vlozeneCislo;
            pocetCisel++;

            if (vlozeneCislo % 2 == 0)
            {
                sudePocet++;
            }
        }
    }

    if (pocetCisel > 0)
    {
        prumer = soucetCisel / pocetCisel;
    }
    else
    {
        prumer = -1;
    }
}
