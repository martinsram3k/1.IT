#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int penize = 0;
    int sazka = 0;

    cout << "Kolik chces penez = ";
    cin >> penize;
    cout << endl;

    while (penize > 0) {
        cout << "Jaka bude sazka = ";
        cin >> sazka;
        cout << endl;

        if (sazka == 0) break;

        if (penize >= sazka) {
            int slot1 = rand() % 100 + 5;
            int slot2 = rand() % 100 + 8;
            int slot3 = rand() % 100 + 2;
            int slotD = slot1 + slot2 + slot3;

            if (slotD % 2 == 0) {
                penize = penize - sazka;
                penize = penize + (sazka * 2);
                cout << "Tva vyhra je = " << sazka * 2 << endl;
                cout << "Tvuj zustatek je = " << penize << endl;
                cout << endl;
            } else {
                penize = penize - sazka;
                cout << "Tentokrat to nevyslo" << endl;
                cout << "Tvuj zustatek je = " << penize << endl;
                cout << endl;
            }
        } else {
            cout << "Dosli ti penize" << endl;
            break;
        }
    }

    return 0;
}
