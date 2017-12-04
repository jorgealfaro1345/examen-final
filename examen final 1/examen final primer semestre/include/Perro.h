#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"
using namespace std;

class Perro : public Animal
{
    public:
        Perro(string );
        string Hablar();
        virtual ~Perro();

};

#endif // PERRO_H
