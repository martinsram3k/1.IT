#include <iostream>

using namespace std;

int main()
{
    int vlozeneCislo;
    double soucetCisel = 0;
    int pocetCisel = 0;
    int pocetSudychCisel = 0;

    while (true)
    {
        cout << "Vlozte " << pocetCisel + 1 << ". cislo: ";
        cin >> vlozeneCislo;

        if (vlozeneCislo == 0)
        {
            break;
        }
        else if (vlozeneCislo < 0)
        {
            cout << "Zaporna cisla nejsou povolena, zkus to znovu.\n";
            continue;
        }
        else if (vlozeneCislo > 0)
        {
            soucetCisel += vlozeneCislo;
            pocetCisel++;

            if (vlozeneCislo % 2 == 0)
            {
                pocetSudychCisel++;
            }
        }
    }

    if (pocetCisel > 0)
    {
        double aritmetickyPrumer = soucetCisel / pocetCisel;
        cout << "\nAritmeticky prumer zadanych cisel je: " << aritmetickyPrumer << "\n";
        cout << "Pocet zadanych sudych cisel: " << pocetSudychCisel << "\n";
    }
    else
    {
        cout << "\nNebylo zadano zadne platne cislo pro vypocet prumeru.\n";
    }

    return 0;
}
