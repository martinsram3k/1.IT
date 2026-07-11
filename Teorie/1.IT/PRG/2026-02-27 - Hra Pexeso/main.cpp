#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int n = 2;

int main() {
    srand(time(0));
    long start = time(0);

    int plocha[n][n];
    int stav[n][n];
    int cisla[n * n];

    for (int i = 0; i < (n * n) / 2; i++) {
        cisla[i * 2] = i + 1;
        cisla[i * 2 + 1] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        int i1 = rand() % (n * n);
        int i2 = rand() % (n * n);
        int pomoc = cisla[i1];
        cisla[i1] = cisla[i2];
        cisla[i2] = pomoc;
    }

    int p = 0;
    for (int r = 0; r < n; r++) {
        for (int s = 0; s < n; s++) {
            plocha[r][s] = cisla[p];
            stav[r][s] = 1;
            p++;
        }
    }

    int pokusy = 0;
    int spravne = 0;
    int hotovo = 0;

    while (hotovo < (n * n) / 2) {
        system("cls");

        for (int r = 0; r < n; r++) {
            for (int radek_karty = 0; radek_karty < 5; radek_karty++) {
                if (radek_karty == 2) {
                    cout << n - r << " ";
                } else {
                    cout << "  ";
                }

                for (int s = 0; s < n; s++) {
                    if (stav[r][s] == 0) {
                        cout << "          ";
                    } else if (stav[r][s] == 1) {
                        if (radek_karty == 0 || radek_karty == 4) {
                            cout << "XXXXXXXXX ";
                        } else {
                            cout << "X       X ";
                        }
                    } else {
                        if (radek_karty == 0 || radek_karty == 4) {
                            cout << "XXXXXXXXX ";
                        } else if (radek_karty == 2) {
                            cout << "X   " << plocha[r][s] << "   X ";
                        } else {
                            cout << "X       X ";
                        }
                    }
                }
                cout << endl;
            }
            cout << endl;
        }

        cout << "    ";
        for (int s = 0; s < n; s++) {
            char pismeno = 'A' + s;
            cout << "    " << pismeno << "     ";
        }
        cout << endl;

        string tah;
        cout << "zadej dvojici (napr. a1b2): ";
        cin >> tah;

        if (tah.length() < 4) {
            continue;
        }

        int s1 = tolower(tah[0]) - 'a';
        int r1 = n - (tah[1] - '0');
        int s2 = tolower(tah[2]) - 'a';
        int r2 = n - (tah[3] - '0');

        if (r1 < 0 || r1 >= n || s1 < 0 || s1 >= n || r2 < 0 || r2 >= n || s2 < 0 || s2 >= n) {
            continue;
        }
        if (stav[r1][s1] == 0 || stav[r2][s2] == 0 || (r1 == r2 && s1 == s2)) {
            continue;
        }

        stav[r1][s1] = 2;
        stav[r2][s2] = 2;
        pokusy++;

        system("cls");
        for (int r = 0; r < n; r++) {
            for (int radek_karty = 0; radek_karty < 5; radek_karty++) {
                if (radek_karty == 2) cout << n - r << " ";
                else cout << "  ";
                for (int s = 0; s < n; s++) {
                    if (stav[r][s] == 0) cout << "          ";
                    else if (stav[r][s] == 1) {
                        if (radek_karty == 0 || radek_karty == 4) cout << "XXXXXXXXX ";
                        else cout << "X       X ";
                    } else {
                        if (radek_karty == 0 || radek_karty == 4) cout << "XXXXXXXXX ";
                        else if (radek_karty == 2) cout << "X   " << plocha[r][s] << "   X ";
                        else cout << "X       X ";
                    }
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << "    ";
        for (int s = 0; s < n; s++) {
            char pismeno = 'A' + s;
            cout << "    " << pismeno << "     ";
        }
        cout << endl;

        if (plocha[r1][s1] == plocha[r2][s2]) {
            cout << "Shoda! zmackni Enter...";
            stav[r1][s1] = 0;
            stav[r2][s2] = 0;
            spravne++;
            hotovo++;
        } else {
            cout << "Nespravne. zmackni Enter...";
            stav[r1][s1] = 1;
            stav[r2][s2] = 1;
        }

        cin.ignore(1000, '\n');
        getchar();
    }

    long konec = time(0);
    int celkem = konec - start;

    cout << "Konec hry" << endl;
    cout << "Pocet pokusu: " << pokusy << endl;
    cout << "Spravne: " << spravne << endl;
    cout << "Hra trvala: " << celkem << " sekund." << endl;

    return 0;
}
