#include <iostream>

using namespace std;

int main()
{
    int input;
    int x = input;
    int bin = 0;
    int place = 1;

    cout << "zadej desitkove cislo: " ;
    cin >> input;
    cout << endl;

    if (input == 0) {
        return 0;
    } else {

       while (x > 0){

        int bit = x % 2;
        bin = bin + bit + place;
        place += 10;
        x /= 2;


       }

    }




    cout << "binarni zapis cisla je: " << bin;
    return 0;
}
