#include <iostream>

using namespace std;

int main()
{

    int cislo;
    int soucet = 0;

    do {
        cout << "vlozte cislo: ";
        cin >> cislo;
        cout << endl;
        soucet+=cislo;
    } while (cislo!=0);
    cout << "soucet vsechn vlozenich cisel je: " << soucet << endl;


    return 0;
}
