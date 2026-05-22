#include <iostream>

using namespace std;

bool cifryJsouVzestupne(int cislo) {

    if (cislo < 10) return true;

    int posledniCifra = cislo % 10;
    cislo /= 10;

    while (cislo > 0) {
        int aktualniCifra = cislo % 10;

        if (aktualniCifra + 1 != posledniCifra) {
            return false;
        }

        posledniCifra = aktualniCifra;
        cislo /= 10;
    }

    return true;
}

int main() {
    int cislo;
    int poradoveCislo = 1;
    int pocetSplnenych = 0;


    while (true) {
        cout << "Vlozte " << poradoveCislo << ". cislo: ";
        cin >> cislo;


        if (cislo == 0) {
            break;
        }

        if (cislo<10) {
             pocetSplnenych++;
        }

        if (cifryJsouVzestupne(cislo)) {
            pocetSplnenych++;
        }

        poradoveCislo++;
    }

    cout << "Pocet cisel se vzestupnymi ciframi: " << pocetSplnenych << endl;

    return 0;
}
