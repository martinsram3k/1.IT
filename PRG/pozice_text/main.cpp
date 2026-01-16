#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int SIRKA, VYSKA;
    int hrac_x, hrac_y;

    cout << "Zadej sirku" << endl;
    cin >> SIRKA;
    cout << "Zadej vysku" << endl;
    cin >> VYSKA;

    system("cls");
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

    hrac_x = SIRKA / 2;
    hrac_y = (VYSKA / 2) + 4;

    for (int i = 0; i < SIRKA; i++) {
        SetConsoleCursorPosition(output, { (short)i, 3 });
        cout << "X";
    }
    for (int j = 1; j <= VYSKA; j++) {
        SetConsoleCursorPosition(output, { 0, (short)(3 + j) });
        cout << "X";
        SetConsoleCursorPosition(output, { (short)(SIRKA - 1), (short)(3 + j) });
        cout << "X";
    }
    for (int i = 0; i < SIRKA; i++) {
        SetConsoleCursorPosition(output, { (short)i, (short)(3 + VYSKA + 1) });
        cout << "X";
    }

    while (true) {
        SetConsoleCursorPosition(output, { (short)hrac_x, (short)hrac_y });
        cout << " ";

        if (GetKeyState('W') < 0) hrac_y--;
        if (GetKeyState('S') < 0) hrac_y++;
        if (GetKeyState('A') < 0) hrac_x--;
        if (GetKeyState('D') < 0) hrac_x++;

        if (hrac_x < 1) hrac_x = 1;
        if (hrac_x > SIRKA - 2) hrac_x = SIRKA - 2;
        if (hrac_y < 4) hrac_y = 4;
        if (hrac_y > VYSKA + 3) hrac_y = VYSKA + 3;

        SetConsoleCursorPosition(output, { (short)hrac_x, (short)hrac_y });
        cout << "O";

        SetConsoleCursorPosition(output, { 0, VYSKA+5});
                cout << "Pozice hrace " << "X= " << hrac_x
                << " Y= " << hrac_y;


        Sleep(50);
    }

    return 0;
}
