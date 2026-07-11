#include <iostream>

using namespace std;

struct Kontakt {
    char jmeno[50];
    char telefonniCislo[20];
    int vek;
    bool aktivni = false;
};

void showMenu() {
    cout << "\n--------------------\n";
    cout << "  TELEFONNI SEZNAM  \n";
    cout << "--------------------\n";
    cout << "1) Pridat jmeno\n";
    cout << "2) Smazat jmeno\n";
    cout << "3) Najit jmeno\n";
    cout << "4) Vypsat seznam\n";
    cout << "5) Konec\n";
    cout << "--------------------\n";
    cout << "Vase volba (1-5): ";
}

bool jsouStejne(const char* s1, const char* s2) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) return false;
        i++;
    }
    return s1[i] == s2[i];
}

int main() {
    const int MAX_KONTAKTU = 100;
    Kontakt seznam[MAX_KONTAKTU];
    int volba;
    char hledaneJmeno[50];

    do {
        showMenu();
        cin >> volba;

        switch (volba) {
            case 1: {
                for (int i = 0; i < MAX_KONTAKTU; i++) {
                    if (!seznam[i].aktivni) {
                        cout << "jmeno: ";
                        cin >> seznam[i].jmeno;
                        cout << "cislo: ";
                        cin >> seznam[i].telefonniCislo;
                        cout << "vek: ";
                        cin >> seznam[i].vek;
                        seznam[i].aktivni = true;
                        break;
                    }
                }
                break;
            }
            case 2: {
                cout << "jmeno ke smazani: ";
                cin >> hledaneJmeno;
                for (int i = 0; i < MAX_KONTAKTU; i++) {
                    if (seznam[i].aktivni && jsouStejne(seznam[i].jmeno, hledaneJmeno)) {
                        seznam[i].aktivni = false;
                        break;
                    }
                }
                break;
            }
            case 3: {
                cout << "hledane jmeno: ";
                cin >> hledaneJmeno;
                bool nalezeno = false;
                for (int i = 0; i < MAX_KONTAKTU; i++) {
                    if (seznam[i].aktivni && jsouStejne(seznam[i].jmeno, hledaneJmeno)) {
                        cout << "Cislo: " << seznam[i].telefonniCislo << " (Vek: " << seznam[i].vek << ")" << endl;
                        nalezeno = true;
                        break;
                    }
                }
                if (!nalezeno) cout << "Kontakt nenalezen." << endl;
                break;
            }
            case 4:
                cout << "\n--- SEZNAM ---" << endl;
                for (int i = 0; i < MAX_KONTAKTU; i++) {
                    if (seznam[i].aktivni) {
                        cout << seznam[i].jmeno << " : " << seznam[i].telefonniCislo << " | Vek: " << seznam[i].vek << endl;
                    }
                }
                break;
        }
    } while (volba != 5);

    return 0;
}
