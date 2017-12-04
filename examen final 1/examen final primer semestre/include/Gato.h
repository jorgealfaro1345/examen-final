#ifndef GATO_H
#define GATO_H
#include "Animal.h"
#include <string>

using namespace std;

class Gato : public Animal
{
    public:
        Gato(string);
        string Hablar();
        virtual ~Gato();
};

#endif // GATO_H
