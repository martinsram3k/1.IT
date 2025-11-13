#include <iostream>

int main() {
    int d1, d2;
    int i;

    std::cout << "delitel (Bum) = ";
    std::cin >> d1;

    if (d1 <= 0) {
        std::cerr << "Delitel musi byt kladne";
        return 1;
    }

    std::cout << "delitel (Bac) = ";
    std::cin >> d2;

    if (d2 <= 0) {
        std::cerr << "Delitel musi byt kladne";
        return 1;
    }

    for (i = 1; i <= 100; ++i) {
        
        if (i % d1 == 0 && i % d2 == 0) {
            std::cout << "BumBac";
        } else if (i % d1 == 0) {
            std::cout << "Bum";
        } else if (i % d2 == 0) {
            std::cout << "Bac";
        } else {
            std::cout << i;
        }

        if (i < 100) {
            if (i == 50) {
                std::cout << "\n";
                std::cout << "\n";
            } else {
                std::cout << ", "; 
            }
        } else {
            std::cout << "\n";
        }
    }

    return 0;
}