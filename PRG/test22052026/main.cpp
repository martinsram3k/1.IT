#include <iostream>

using namespace std;

bool cifryJsouVzestupne(int c)
{

    if (c < 10)
        return true;

    int posleni = c % 10;
    c /= 10;

    while (c > 0)
    {
        int aktualni = c % 10;

        if (aktualni + 1 != posleni)
        {
            return false;
        }

        posleni = aktualni;
        c /= 10;
    }

    return true;
}

int main()
{
    int c;
    int splnene = 0;

    for (int pocetzadani = 1; pocetzadani > 0; pocetzadani++)
    {

        cout << "Vlozte " << pocetzadani << ". cislo: ";
        cin >> c;

        if (c == 0)
        {

            cout << "Pocet cisel se vzestupnymi ciframi: " << splnene << endl;
            pocetzadani = -1;
            return 0;
        }
        else if (c < 10)
        {
            splnene++;
        }

        if (cifryJsouVzestupne(c))
        {
            splnene++;
        }
    }

    return 0;
}
