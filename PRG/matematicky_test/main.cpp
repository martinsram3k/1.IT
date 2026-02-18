#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    const int pocetOtazek = 10;
    const int maxCislo = 10;

    char operace;
    int vysledek;
    int odpoved;
    int pocetSpatnychOdpovedi = 0;

    cout << "------------------------------------" << endl;
    cout << "| +-*/ |  MATEMATICKY TEST  | +-*/ |" << endl;
    cout << "------------------------------------" << endl;

    for (int i = 0; i < pocetOtazek; i++)
    {
        int cislo1, cislo2, znamenko;
        bool nalezeno = false;

        // 1. LOGIKA: Nejprve najdeme validni cisla a spravny vysledek
        // Cyklus bezi, dokud nevygeneruje priklad, ktery vyhovuje tvym pravidlum
        while (!nalezeno)
        {
            cislo1 = rand() % maxCislo;
            cislo2 = rand() % maxCislo;
            znamenko = rand() % 4 + 1;

            if (znamenko == 1)
            { // Plus
                operace = '+';
                vysledek = cislo1 + cislo2;
                if (vysledek <= maxCislo && vysledek > 0 && cislo1 > 0 && cislo2 > 0) // Zajistime, ze vysledek bude v povolenem rozsahu a cisla budou nezaporna
                    nalezeno = true;
                    else if (vysledek == 0 || vysledek == 1)
                        {
                            nalezeno = false; // Zamezime scitani nulou nebo jednickou, ktere by mohlo zpusobit zmatek
                        }
            }
            else if (znamenko == 2)
            { // Minus
                operace = '-';
                vysledek = cislo1 - cislo2;
                if (vysledek > 0 && vysledek <= maxCislo && cislo1 >= cislo2 && cislo1 > 0 && cislo2 > 0) // Zajistime, ze nevznikne zaporne cislo a vysledek bude v povolenem rozsahu
                    nalezeno = true;
                    else if (vysledek == 0 || vysledek == 1)
                    {
                        nalezeno = false; // Zamezime odecteni nulou nebo jednickou, ktere by mohlo zpusobit zmatek
                    }

            }
            else if (znamenko == 3)
            { // Krat
                operace = '*';
                vysledek = cislo1 * cislo2;
                if (vysledek <= maxCislo && cislo1 != 0 && cislo2 != 0 && vysledek > 0 && cislo1 > 1 && cislo2 > 1) // Zajistime, ze vysledek bude v povolenem rozsahu a cisla budou nezaporna a nenulova
                    nalezeno = true;
                    else if (vysledek == 0 || vysledek == 1)
                    {
                        nalezeno = false; // Zamezime vynasobeni nulou, ktere by mohlo zpusobit zmatek
                    }
            }
            else if (znamenko == 4)
            { // Deleno
                operace = '/';
                // Nesmime delit nulou a chceme cele cislo (zbytek po deleni je 0)
                if (cislo2 != 0 && cislo1 % cislo2 == 0 && cislo1 > 0 && cislo2 > 0 && vysledek > 0)
                {
                    vysledek = cislo1 / cislo2;
                    if (vysledek <= maxCislo && vysledek > 1)
                        nalezeno = true;
                } else if (vysledek == 0 || vysledek == 1)
                {
                    nalezeno = false; // Zamezime deleni nulou a deleni jednickou, ktere by mohlo zpusobit zmatek
                }

            }
        }

        // 2. VYPIS: Ted uz mame spravna cisla i spravny vysledek v pameti
        int cisloPrikladu = i + 1;

        if (cisloPrikladu < 10)
        {
            // Odsazeni pro jednociferna cisla (1-9)
            cout << "       " << cisloPrikladu << ".  priklad: ";
        }
        else if (cisloPrikladu < 100)
        {
            // Odsazeni pro dvouciferna cisla (10-99) - o jednu mezeru mene
            cout << "      " << cisloPrikladu << ".  priklad: ";
        }
        else if (cisloPrikladu < 1000)
        {
            // Odsazeni pro trojciferna cisla (100-999) - o jednu mezeru mene
            cout << "     " << cisloPrikladu << ".  priklad: ";
        }
        else
        {
            // Odsazeni pro ctyrciferna cisla (1000+)
            cout << "   " << cisloPrikladu << ".  priklad: ";
        }

        // Samotne zobrazeni prikladu a nacteni odpovedi
        cout << cislo1 << " " << operace << " " << cislo2 << " = ";
        cin >> odpoved;

        // 3. KONTROLA
        if (odpoved == vysledek)
        {
            // Zde muzes neco vypsat, nebo nechat prazdne
        }
        else
        {
            pocetSpatnychOdpovedi++;
            cout << "   Chyba: " << vysledek << " je spravna odpoved." << endl;
        }
    }

    cout << "------------------------------------" << endl;
    cout << "Pocet prikladu:   " << pocetOtazek << endl;
    cout << "Spravne odpovedi: " << pocetOtazek - pocetSpatnychOdpovedi << endl;
    cout << "Spatne odpovedi:  " << pocetSpatnychOdpovedi << endl;
    cout << "Uspestnost:       " << (pocetOtazek - pocetSpatnychOdpovedi) * 100 / pocetOtazek << " %" << endl;
    cout << "------------------------------------" << endl;

    return 0;
}
