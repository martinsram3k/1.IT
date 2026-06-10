#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    int hod = 0;
    cout << "zmackni klavesu A pro hod" << endl;
    srand(time(0));

    while (true){

       if (GetKeyState('A') < 0)
    {

        int hodnota = rand() % 6+1;

        if (hodnota == 1) {
            cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;

    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        }

                   if (hodnota == 2) {
            cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;

    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        }


                if (hodnota == 3) {
            cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;

    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        }


                       if (hodnota == 5) {



   cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX    XXXX        XXXX    XX" << endl;
    cout << "XX    XXXX        XXXX    XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX          XXXX          XX" << endl;
    cout << "XX          XXXX          XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX    XXXX        XXXX    XX" << endl;
    cout << "XX    XXXX        XXXX    XX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        }


                if (hodnota == 6) {



   cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XX    XXXX        XXXX    XX" << endl;
    cout << "XX    XXXX        XXXX    XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX    XXXX        XXXX    XX" << endl;
    cout << "XX    XXXX        XXXX    XX" << endl;


    cout << "XX                        XX" << endl;


    cout << "XX    XXXX        XXXX    XX" << endl;
    cout << "XX    XXXX        XXXX    XX" << endl;


    cout << "XX                        XX" << endl;
    cout << "XX                        XX" << endl;


    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        }
        cout << "hodil jsi cislo: " << hodnota << endl;


    }

    }



    return 0;
}
