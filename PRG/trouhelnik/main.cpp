#include <iostream>
using namespace std;

int main() {

   double a, b, c;
   int s = 1;


   cout << "Vlož èíslo A: ";
   cin >> a;

   cout << "Vlož èíslo B: ";
   cin >> b;

    cout << "Vlož èíslo C: ";
   cin >> c;
   cout << endl;

   if (a+b<c) {

    s = 0;

   }

   if (b+c<a) {

    s = 0;

   }

     if (c+a<b) {

    s = 0;

   }

   if (s == 0) {
    cout << "trouhelník nejde " << s << endl;
   }

   if (s == 1) {
    cout << "trouhelník jde " << s << endl;
   }

}
