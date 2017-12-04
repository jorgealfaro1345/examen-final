#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal
{
    private:
        string Nombre;
        int num_patas;

    public:
        Animal(string );
        virtual string Hablar()=0;
        virtual ~Animal();


};

#endif // ANIMAL_H
