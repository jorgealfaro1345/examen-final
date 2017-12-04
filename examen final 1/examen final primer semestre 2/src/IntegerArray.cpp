#include "IntegerArray.h"

IntegerArray::IntegerArray(int _tamanhio)
{
    tamanhio=_tamanhio;
    dato= new int[tamanhio];
}

IntegerArray::IntegerArray(const IntegerArray &o)
{
    dato=new int[o.tamanhio];
    for(int i=0;i<o.tamanhio;i++)
    {
        dato[i]=o.dato[i];
    }
}

int IntegerArray::Mayor()
{
    for(int i=0;i<tamanhio;i++)
    {
        if(mayor<dato[i])
        {
            mayor=dato[i];
        }
    }
    return mayor;
}

int IntegerArray::el_tamanhio()
{
    return tamanhio;
}

IntegerArray::~IntegerArray()
{
    delete []dato;
}
