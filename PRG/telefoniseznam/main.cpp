#include <iostream>
#include <map>
#include <string>

using namespace std;

void showMenu() {
    cout << "\n--------------------\n";
    cout << " TELEFONNI SEZNAM \n";
    cout << "--------------------\n";
    cout << "1) pridat jmeno\n";
    cout << "2) smazat jmeno\n";
    cout << "3) najit jmeno\n";
    cout << "4) vypsat seznam\n";
    cout << "5) konec\n";
    cout << "--------------------\n";
    cout << "Vase volba(1-5): ";
}

int main() {
    map<string, string> seznam;
    int volba;
    string jmeno, cislo;

    do {
        showMenu();
        cin >> volba;

        switch (volba) {
            case 1:
                cout << "jmeno: "; getline(cin, jmeno);
                cout << "cislo: "; getline(cin, cislo);
                seznam[jmeno] = cislo;
                break;
            case 2:
                cout << "jmeno: "; getline(cin, jmeno);
                seznam.erase(jmeno);
                break;
            case 3:
                cout << "jmeno: "; getline(cin, jmeno);
                if (seznam.count(jmeno)) {
                    cout << "Cislo: " << seznam[jmeno] << endl;
                } else {
                    cout << "Kontakt nenalezen." << endl;
                }
                break;
            case 4:
                cout << "\n--- SEZNAM ---" << endl;
                for (auto const& [name, phone] : seznam) {
                    cout << name << " : " << phone << endl;
                }
                break;
        }
    } while (volba != 5);

    return 0;
}
