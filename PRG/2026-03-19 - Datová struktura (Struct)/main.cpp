#include <iostream>

using namespace std;

int main()
{
    struct Auto
    {
        string znacka;
        string model;
        int rok_vyroby;
    };


    Auto mojeAuto;
    mojeAuto.znacka= "Skoda";
    mojeAuto.model = "Octavia";
    mojeAuto.rok_vyroby = 2020;
    
    cout << mojeAuto.znacka << " " << mojeAuto.model << " " << mojeAuto.rok_vyroby << endl;
    
    return 0;
}