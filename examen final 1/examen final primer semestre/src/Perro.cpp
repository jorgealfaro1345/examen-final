#include "Perro.h"
#include "Animal.h"
#include <string>

using namespace std;

Perro::Perro(string _Nombre) : Animal(_Nombre)
{

}

string Perro::Hablar()
{
    return "wau wau";
}

Perro::~Perro()
{
    //dtor
}
