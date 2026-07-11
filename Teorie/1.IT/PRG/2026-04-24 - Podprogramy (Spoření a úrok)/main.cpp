#include <iostream>

using namespace std;


double castkaPoRoce(double aktualniCastka, double urok)
{
    return aktualniCastka + (aktualniCastka / 100 * urok);
}


int main()
{
    double vCastka;
    int pocetLet;

    cout << "Zadej vstupni castku: " << endl;
    cin >> vCastka;
    cout << "Zadej pocet let sporeni: " << endl;
    cin >> pocetLet;

    for (int i = 0; i < pocetLet; i++)
    {
       double urok;
       cout << "Zadej urok % v " << i + 1 << ". roce : " << endl;
       cin >> urok;

       vCastka = castkaPoRoce(vCastka, urok);

       cout << "Castka po " << i + 1 << ". roce: " << vCastka << endl;
    }

    return 0;
}
