#include <iostream>

using namespace std;

int main()
{
    double vklad;
    double aktualniZustatek;
    double urokvklad;
    int pocetlet;

    cout << "Zadejte pociatecni vklad: ";
    if (!(cin >> vklad)) return 1;

    cout << "Zadejte urokove procento: ";
    if (!(cin >> urokvklad)) return 1;

    cout << "Zadejte pocet let: ";
    if (!(cin >> pocetlet)) return 1;

    double urokovaSazba = urokvklad / 100.0;

    aktualniZustatek = vklad;

    cout << endl;
    cout << "Vklad = " << vklad << " Kc" << endl;
    cout << "Urokova sazba = " << urokvklad << " %" << endl;
    cout << "Pocet let = " << pocetlet << " Let" << endl;
    cout << endl;

    for (int i = 1; i <= pocetlet; i++) {
        aktualniZustatek = aktualniZustatek + vklad;
        aktualniZustatek = aktualniZustatek * (1.0 + urokovaSazba);

        cout << i << ". rok : Zustatek = " << aktualniZustatek << " Kc" << endl;
    }

    cout << endl;
    cout << "Konecny zustatek po " << pocetlet << " letech: " << aktualniZustatek << " Kc" << endl;

    return 0;
}
