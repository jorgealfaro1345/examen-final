#include <iostream>
#include "USCurrency.h"

using namespace std;

USCurrency operator+(USCurrency x, USCurrency y)
{
    USCurrency w(0,0);
    w.dollars=x.dollars+y.dollars;
    w.cents=x.cents+y.cents;
    if(w.cents>=100)
    {
        w.dollars+=1;
        w.cents-=100;
    }
    return w;
}

ostream& operator<<(ostream &output,const USCurrency &x)
{
    output<<"USCurrency: "<<"$"<<x.dollars<<"."<<x.cents;
    return output;
}

int main()
{
    USCurrency a(2,50);
    USCurrency b(1,75);
    USCurrency c=a+b;
    cout<<c<<endl;
    return 0;
}
