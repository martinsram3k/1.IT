#include <iostream>

using namespace std;

int main()
{

 int A=3666;

 int H=A/3600; // 2
 int M=(A/60)-(H*60); // 17
 int S=A-(H*3600)-(M*60);


 cout << "Hodiny:" << H << " " << endl;
 cout << "Minuty:" << M << " " << endl;
 cout << "Sekundy:" << S << " " << endl;



    return 0;
}
