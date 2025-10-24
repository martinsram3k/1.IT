#include <iostream>

using namespace std;

int main()
{
    double hmotnost;
    double vyska;
    int vysledek;

    cout << "Zadej svoji hmostnos v kg:" << endl;
    cin >> hmotnost;

    cout << "Zadej svoji vysku v cm" << endl;
    cin >> vyska;

    if (hmotnost>0 && vyska>0) {
        vysledek=hmotnost*vyska;
    }

    cout << vysledek << endl;
    return 0;
}
