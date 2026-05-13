#include <iostream>

using namespace std;

double vyjadri_x(double b1, double c1, double a1, double y) {
    return (c1 - b1 * y) / a1;
}

void vyres_dosazovanim(double a1, double b1, double c1, double a2, double b2, double c2) {
    double jmenovatel = (a2 * (-b1 / a1)) + b2;
    double pravastrana = c2 - (a2 * (c1 / a1));

    if (a1 != 0 && jmenovatel != 0) {
        double y = pravastrana / jmenovatel;
        double x = vyjadri_x(b1, c1, a1, y);

        cout << "Reseni:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        cout << "Tento zpusob vypoctu nelze provest (deleni nulou)." << endl;
    }
}

int main() {
    double a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    vyres_dosazovanim(a1, b1, c1, a2, b2, c2);

    return 0;
}
