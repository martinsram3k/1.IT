#include <iostream>

using namespace std;

int main()
{
    int a=4;
    int b=2;

    int soucin =a*b;
    int podil =a/b;

    int min;
    int max;



    if (b==0) {
       cout << "nelze delit nulou";

    } else {

        if (a>b) {
            max=a;
            min=b;

        }

      cout << "cislo a = " << a << endl;
      cout << "cislo b = " << b << endl;
      cout << endl;
      cout << "soucin =  " << soucin << endl;
      cout << "podil =   " << podil << endl;
      cout << endl;
      cout << "min =     " << min << endl;
      cout << "max =     " << max << endl;

    }



     return 0;

}
