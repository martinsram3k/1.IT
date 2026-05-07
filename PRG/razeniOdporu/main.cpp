#include <iostream>
#include "razeni.h"

using namespace std;

int main() {
    double r1 = 50;
    double r2 = 100;

    cout << "Seriove zapojeni rezistoru " << r1 << " ohmu a " << r2 << " ohmu je " << seriove(r1, r2) << " ohmu." << endl;
    cout << "Paralelni zapojeni rezistoru " << r1 << " ohmu a " << r2 << " ohmu je " << paralelni(r1, r2) << " ohmu." << endl;


    return 0;
}
