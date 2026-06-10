// Martin Sramek

#include <iostream>

int main() {
    int i;
    int c;
    int soucin = 1;
    int soucet = 0;
    int cifra;

    std::cout << "Zadejte prirozene cislo : ";

    std::cin >> i;
    c = i;

        if (c>9999){
            return 0;
        }

        if (c<1){
            return 0;
        }

        while (c > 0) {

            cifra = c % 10;

            soucet += cifra;

            c /= 10;

            soucin *= cifra;

        }

    std::cout << "Ciferny soucet = " << soucet << std::endl;

    std::cout << "Ciferny soucin = " << soucin << std::endl;

    return 0;
}
