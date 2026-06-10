#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double cislo = 123.456789;

    cout << "cislo = " << cislo << endl << endl;

    printf("|");
    printf("%10s", "XX");
    printf("|");
    printf("%10i", 123);
    printf("|");
    printf("%15.3f", cislo);
    printf("|");

    printf("\n\n");

    printf("|");
    printf("%-10s", "XX");
    printf("|");
    printf("|");
    printf("%-10i", 123);
    printf("|");
    printf("%-15.3f", cislo);
    printf("|");

    printf("\n\n");

    return 0;
}
