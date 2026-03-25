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
            
            cislo1 = rand() % (maxCislo + 1);
            cislo2 = rand() % (maxCislo + 1);
            znamenko = rand() % 4 + 1;

            if (znamenko == 1) // Sčítání
            {
                operace = '+';
                vysledek = cislo1 + cislo2;
                // Podmínka: výsledek nesmí přesáhnout limit
                if (vysledek <= maxCislo) nalezeno = true;
            }
            else if (znamenko == 2) // Odčítání
            {
                operace = '-';
                vysledek = cislo1 - cislo2;
               
                if (vysledek >= 0) nalezeno = true;
            }
            else if (znamenko == 3) // Násobení
            {
                operace = '*';
                vysledek = cislo1 * cislo2;
              
                if (vysledek <= maxCislo) nalezeno = true;
            }
            else if (znamenko == 4) // Dělení
            {
                operace = '/';
                
                if (cislo2 != 0 && cislo1 % cislo2 == 0) 
                {
                    vysledek = cislo1 / cislo2;
                    nalezeno = true;
                }
            }
        }

        int cisloPrikladu = i + 1;
   
        cout << (cisloPrikladu < 10 ? "   " : "  ") << cisloPrikladu << ". priklad: ";
        cout << cislo1 << " " << operace << " " << cislo2 << " = ";
      
        if (!(cin >> odpoved)) {
            cin.clear();
            cin.ignore(1000, '\n');
            odpoved = -1; 
        }

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
  
    cout << "Uspesnost:        " << (pocetOtazek - pocetSpatnychOdpovedi) * 100 / pocetOtazek << " %" << endl;
    cout << "------------------------------------" << endl;

    return 0;
}