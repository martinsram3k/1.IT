#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void upravJmeno(string &jmeno) {
    if (!jmeno.empty()) {
        for (int i = 0; i < jmeno.length(); i++) {
            jmeno[i] = tolower(jmeno[i]);
        }
        jmeno[0] = toupper(jmeno[0]);
    }
}

int main() {
    string jmeno;
    cout << "Zadej jmeno: ";
    cin >> jmeno;

    upravJmeno(jmeno);

    cout << "Upravene jmeno: " << jmeno << endl;

    return 0;
}
