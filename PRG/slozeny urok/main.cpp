#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double P = 1000;
    double vklad = 1000;
    double r = 0.05;
    int t = 10;
    double h = P;

    cout << fixed << setprecision(1);

    cout << "Rocni prehled slozeneho uroku s rocnimi vklady" << endl;
    cout << "Rok\tStav po vkladu\t\tUrok\tKonecna hodnota" << endl;

    cout << 0 << "\t" << h << "\t\t\t" << 0.0 << "\t" << h << endl;

    for (int i = 1; i <= t; ++i) {
        h += vklad;

        double stavPoVkladu = h;
        double urok = h * r;

        h += urok;

        cout << i << "\t" << stavPoVkladu << "\t\t\t" << urok << "\t" << h << endl;
    }

    cout << "Konecna hodnota po " << t << " letech: " << h << " Kc" << endl;

    return 0;
}
