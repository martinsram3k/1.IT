#include <iostream>

using namespace std;

int main()
{
    double hmotnost;
    double vyska;
    int vysledek;

    cout << "Zadej svoji hmostnos v kg:" << endl;
    cin >> hmotnost;

    cout << "Zadej svoji vysku v m" << endl;
    cin >> vyska;


        vysledek=hmotnost/vyska;

        cout << endl;

    if (vysledek>40) {
        cout << "Obese" << endl;
    }

    if (vysledek<40 &&  vysledek>25) {
        cout << "Overweight" << endl;
    }

    if (vysledek<25) {
        cout << "Normal"<< endl;
    }
        cout << vysledek << endl;
    return 0;
}
