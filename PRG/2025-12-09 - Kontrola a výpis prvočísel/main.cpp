#include <iostream>

using namespace std;

int main()
{
   double cislo = 0;
   double m;
   double l;
   double ma;

   while(true){

    cout << "Zadej prvoèíslo: ";
    cin >> l;
    cout << endl;

    if (l!=0){

        m+=l;
        if (l>ma) {ma = l;}

    } else {
    cout << "Maximum: " << ma << endl;
    return 0;
    }


   }



}
