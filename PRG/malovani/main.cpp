#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int celkovyPocet;
    cout << "zadej celkovy pocet znaku: ";
    cin >> celkovyPocet;

    system("cls");
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);


    int x = 2;
    int y = 2;

    int smer = 0;


    int delka_strany = 20;
    int ujito_v_smeru = 0;
    int pocet_zatacek = 0;

    for (int i = 0; i < celkovyPocet; i++) {
        SetConsoleCursorPosition(output, { (short)(x * 2), (short)y });
        cout << "X";
        Sleep(30);

        ujito_v_smeru++;


        if (ujito_v_smeru >= delka_strany) {
            ujito_v_smeru = 0;
            smer = (smer + 1) % 4;
            pocet_zatacek++;



            if (pocet_zatacek % 2 == 0) {
                delka_strany -= 2;
            }
        }

        if (delka_strany <= 0) break;


        if (smer == 0) x++;
        else if (smer == 1) y++;
        else if (smer == 2) x--;
        else if (smer == 3) y--;
    }


    SetConsoleCursorPosition(output, { 0, 25 });
    return 0;
}
