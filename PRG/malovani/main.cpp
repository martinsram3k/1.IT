#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int pocetOtocek;
    cout << "Zadej pocet otocek: ";
    cin >> pocetOtocek;


    int celkemZatacek = pocetOtocek * 4;

    system("cls");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


    int x = 30;
    int y = 15;
    int maxy = 0;

    int smer = 0;
    int delka_strany = 1;
    int ujito = 0;
    int hotoveZatacky = 0;

    while (hotoveZatacky < celkemZatacek + 1) {


        SetConsoleCursorPosition(h, { (short)(x * 2), (short)(y * 1) });
        cout << "X";
        Sleep(30);

        ujito = ujito + 1;


        if (ujito >= delka_strany) {
            ujito = 0;
            smer = smer + 1;

            if (smer == 4) {
                smer = 0;
            }

            hotoveZatacky = hotoveZatacky + 1;

            if (hotoveZatacky % 2 == 0) {
                delka_strany = delka_strany + 2;
            }
        }



        if (smer == 0) x = x + 1;
        else if (smer == 1) y = y + 1;
        else if (smer == 2) x = x - 1;
        else if (smer == 3) y = y - 1;



    }

    SetConsoleCursorPosition(h, { 0, (short) 17 + 2 * pocetOtocek });
    return 0;
}
