#include <iostream>

using namespace std;

double vyjadri_x(double b1, double c1, double a1, double y) {
    return (c1 - b1 * y) / a1;
}

void vyres_dosazovanim(double a1, double b1, double c1, double a2, double b2, double c2) {
    if (a1 != 0) {
        double jmenovatel = (a2 * (-b1 / a1)) + b2;
        double pravastrana = c2 - (a2 * (c1 / a1));

        if (jmenovatel != 0) {
            double y = pravastrana / jmenovatel;
            double x = vyjadri_x(b1, c1, a1, y);

            cout << "--- Reseni soustavy ---" << endl;
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        } else {
            cout << "Soustava nema jednoznacne reseni (deleni nulou u jmenovatele)." << endl;
        }
    } else {
        cout << "Tento zpusob vypoctu nelze provest (koeficient a1 je nula, nelze vyjadrit x)." << endl;
    }
}

int main() {
    double a1, b1, c1, a2, b2, c2;

    cout << "Zadej koeficienty pro 1. rovnici (ve tvaru: a1 b1 c1):" << endl;
    cout << "a1 = "; cin >> a1;
    cout << "b1 = "; cin >> b1;
    cout << "c1 = "; cin >> c1;

    cout << endl;

    cout << "Zadej koeficienty pro 2. rovnici (ve tvaru: a2 b2 c2):" << endl;
    cout << "a2 = "; cin >> a2;
    cout << "b2 = "; cin >> b2;
    cout << "c2 = "; cin >> c2;

    vyres_dosazovanim(a1, b1, c1, a2, b2, c2);

    return 0;
}
