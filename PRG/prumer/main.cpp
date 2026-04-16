#include <iostream>

using namespace std;

double prumer(double a, double b) {
    double p = (a+b)/2;
    return p;
}

int main()
{
    cout << "vypocet prumeru" << endl;
    double a=2;
    double b=3;
    double prumers = prumer(a, b);
    cout << prumers << endl;
    return 0;
}
