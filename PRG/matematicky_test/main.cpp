#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    const int pocetOtazek = 10;
    const int maxCislo = 2;

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

        while (!nalezeno)
        {
            cislo1 = rand() % maxCislo;
            cislo2 = rand() % maxCislo;
            znamenko = rand() % 4 + 1;

            if (znamenko == 1)
            { // Plus
                operace = '+';
                vysledek = cislo1 + cislo2;
                if (vysledek <= maxCislo && vysledek > 0 && cislo1 > 0 && cislo2 > 0) 
                    nalezeno = true;
                    else if (vysledek == 0 || vysledek == 1)
                        {
                            nalezeno = false; 
                        }
            }
            else if (znamenko == 2)
            { // Minus
                operace = '-';
                vysledek = cislo1 - cislo2;
                if (vysledek > 0 && vysledek <= maxCislo && cislo1 >= cislo2 && cislo1 > 0 && cislo2 > 0) 
                    nalezeno = true;
                    else if (vysledek == 0 || vysledek == 1)
                    {
                        nalezeno = false; 
                    }

            }
            else if (znamenko == 3)
            { // Krat
                operace = '*';
                vysledek = cislo1 * cislo2;
                if (vysledek <= maxCislo && cislo1 != 0 && cislo2 != 0 && vysledek > 0 && cislo1 > 1 && cislo2 > 1) 
                    nalezeno = true;
                    else if (vysledek == 0 || vysledek == 1)
                    {
                        nalezeno = false; 
                    }
            }
            else if (znamenko == 4)
            { // Deleno
                operace = '/';
             
                if (cislo2 != 0 && cislo1 % cislo2 == 0 && cislo1 > 0 && cislo2 > 0 && vysledek > 0)
                {
                    vysledek = cislo1 / cislo2;
                    if (vysledek <= maxCislo && vysledek > 1)
                        nalezeno = true;
                } else if (vysledek == 0 || vysledek == 1)
                {
                    nalezeno = false; 
                }

            }
        }

       
        int cisloPrikladu = i + 1;

        if (cisloPrikladu < 10)
        {
            
            cout << "       " << cisloPrikladu << ".  priklad: ";
        }
        else if (cisloPrikladu < 100)
        {
           
            cout << "      " << cisloPrikladu << ".  priklad: ";
        }
        else if (cisloPrikladu < 1000)
        {
           
            cout << "     " << cisloPrikladu << ".  priklad: ";
        }
        else
        {
            
            cout << "   " << cisloPrikladu << ".  priklad: ";
        }

       
        cout << cislo1 << " " << operace << " " << cislo2 << " = ";
        cin >> odpoved;

       
        if (odpoved == vysledek)
        {
           
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