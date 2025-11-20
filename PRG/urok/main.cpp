#include <iostream>

using namespace std;

int main()
{
    int vklad = 9999;
    int vkladhold = 0;
    double urok = 1.33;
    int pocetlet = 10;

    cout << "pocastecni vklad: " << vklad << endl;

   for (int i = 0; i < (pocetlet + 1 ); i++) {

        cout << i << ". rok :" << endl;

        if (i == 0) {
            vkladhold = vklad * urok;
        } else {
            vkladhold = vkladhold * urok;
        }

    cout << vkladhold << endl;
  }

    return 0;
}
