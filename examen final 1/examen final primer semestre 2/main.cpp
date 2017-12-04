#include <iostream>
#include <IntegerArray.h>

using namespace std;

int main()
{
    IntegerArray a(3);
    a.dato[0] = 4; a.dato[1] = 2;a.dato[2]=1;
    IntegerArray b(a);

    cout << b.dato[1] << endl;
    cout<<a.Mayor()<<endl;
    cout<<a.el_tamanhio()<<endl;
}
