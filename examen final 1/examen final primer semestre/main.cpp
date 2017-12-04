#include <iostream>
#include <string>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

using namespace std;

int main()
{
    Animal *p, *g;
    p= new Perro("Fido");
    g= new Gato("Garfield");

    cout<<p->Hablar()<<endl;
    cout<<g->Hablar()<<endl;
    return 0;
}
