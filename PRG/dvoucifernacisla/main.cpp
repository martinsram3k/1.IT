#include <iostream>

using namespace std;

int main()
{
    for (int cislo=10; cislo<100; cislo++)
    {


    int cislo1 = cislo / 10;
    int cislo2 = cislo % 10 ;

    if (cislo1 != cislo2) {

    cout << cislo << endl;

    }



    }
    return 0;
}
