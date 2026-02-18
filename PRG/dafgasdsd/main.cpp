#include <iostream>
#include <string>
#include <algorithm> // Pro funkci transform

using namespace std;

void upravJmeno() {
    string jmeno;
    cout << "Zadej jmeno (1 slovo): ";
    cin >> jmeno;

    if (!jmeno.empty()) {
        // Pøevedeme úplnì celé jméno na malá písmena
        for (int i = 0; i < jmeno.length(); i++) {
            jmeno[i] = tolower(jmeno[i]);
        }
        // První písmeno zmìníme na velké
        jmeno[0] = toupper(jmeno[0]);
    }

    cout << "Upravene jmeno: " << jmeno << endl;
}
