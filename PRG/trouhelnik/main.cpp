#include <iostream>
using namespace std;

int main() {

   double a = 10;
   double b = 10;
   double c = 10;
   double s = 1;

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
    cout << "trouhelník nejde" << s << endl;
   }

   if (s == 1) {
    cout << "trouhelník jde" << s << endl;
   }

}
