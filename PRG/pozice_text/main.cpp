#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system("cls");
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(output, {10, 1});
    cout << "XXXXXXXXXXXXXXX";

    for (int i = 2; i <= 6; i++) {
        SetConsoleCursorPosition(output, {10, i});
        cout << "X             X";
    }

    SetConsoleCursorPosition(output, {10, 7});
    cout << "XXXXXXXXXXXXXXX";

    SetConsoleCursorPosition(output, {10, 10});
    return 0;
}
