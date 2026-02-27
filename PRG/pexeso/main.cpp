#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int n = 2;

int main() {
    srand(time(0));

    int plocha[n][n];
    int stav[n][n];
    int cisla[n * n];

    for (int i = 0; i < (n * n) / 2; i++) {
        cisla[i * 2] = i + 1;
        cisla[i * 2 + 1] = i + 1;
    }

    for (int i = (n * n) - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = cisla[i];
        cisla[i] = cisla[j];
        cisla[j] = temp;
    }

    int idx = 0;
    for (int r = 0; r < n; r++) {
        for (int s = 0; s < n; s++) {
            plocha[r][s] = cisla[idx++];
            stav[r][s] = 1;
        }
    }

    int pokusy = 0;
    int hotovo = 0;

    while (hotovo < (n * n) / 2) {
        system("cls");

        for (int r = 0; r < n; r++) {
            for (int radek_karty = 0; radek_karty < 5; radek_karty++) {
                if (radek_karty == 2) cout << n - r << " ";
                else cout << "  ";

                for (int s = 0; s < n; s++) {
                    if (stav[r][s] == 0) {
                        cout << "          ";
                    } else if (stav[r][s] == 1) {
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
        for (int s = 0; s < n; s++) cout << "    " << (char)('A' + s) << "     ";
        cout << endl;

        string tah;
        cout << "\nZvol dvojici (napr. a1b2): ";
        cin >> tah;

        if (tah.length() < 4) continue;

        int s1 = tolower(tah[0]) - 'a';
        int r1 = n - (tah[1] - '0');
        int s2 = tolower(tah[2]) - 'a';
        int r2 = n - (tah[3] - '0');

        if (r1 < 0 || r1 >= n || s1 < 0 || s1 >= n || r2 < 0 || r2 >= n || s2 < 0 || s2 >= n) continue;
        if (stav[r1][s1] == 0 || stav[r2][s2] == 0 || (r1 == r2 && s1 == s2)) continue;

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
        for (int s = 0; s < n; s++) cout << "    " << (char)('A' + s) << "     ";
        cout << endl;

        if (plocha[r1][s1] == plocha[r2][s2]) {
            cout << "\nShoda! Vyckej na Enter...";
            stav[r1][s1] = 0;
            stav[r2][s2] = 0;
            hotovo++;
        } else {
            cout << "\nNespravne. Vyckej na Enter...";
            stav[r1][s1] = 1;
            stav[r2][s2] = 1;
        }

        cin.ignore(1000, '\n');
        getchar();
    }

    cout << "\nKonec hry! Pocet pokusu: " << pokusy << endl;

    return 0;
}
