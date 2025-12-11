#include <iostream>

int main() {
    int cislo_vstup;
    int cislo_k_praci;
    int ciferny_soucin = 1;
    int ciferny_soucet = 0;
    int cifra;

    std::cout << "Zadejte prirozene cislo : ";
    std::cin >> cislo_vstup;

    cislo_k_praci = cislo_vstup;

    while (cislo_k_praci > 0) {
        cifra = cislo_k_praci % 10;
        ciferny_soucet += cifra;

        ciferny_soucin *= cifra;
        cislo_k_praci /= 10;
    }

    std::cout << "Ciferny soucet = " << ciferny_soucet << std::endl;
    std::cout << "Ciferny soucin = " << ciferny_soucin << std::endl;

    return 0;
}
