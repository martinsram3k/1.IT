#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int SIRKA = 50;
    int VYSKA = 15;

    system("cls");
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, {0, 3});

    // horni radek
    for (int i = 0; i <= SIRKA; i++)
        cout << "X";
    cout << endl;

    // stred
    for (int j = 0; j <= VYSKA; j++) {
        cout << "X";
        for (int i = 0; i <= SIRKA - 2; i++)
            cout << " ";
        cout << "X";
        cout << endl;
    }

    // dolni radek
    for (int i = 0; i <= SIRKA; i++)
        cout << "X";
    cout << endl;

    cout << endl << endl << endl << endl << endl;

    return 0;
}
