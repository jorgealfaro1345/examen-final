#include "Gato.h"
#include <string>

using namespace std;

Gato::Gato(string _Nombre) : Animal(_Nombre)
{

}

string Gato::Hablar()
{
    return "miau miau";
}

Gato::~Gato()
{
    //dtor
}
