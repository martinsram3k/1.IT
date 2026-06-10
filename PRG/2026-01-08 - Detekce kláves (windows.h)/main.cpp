#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    bool jeStisknutaKlavesaA = GetKeyState("A") < 0;

    cout << "Hello world!" << endl;
    return 0;
}
