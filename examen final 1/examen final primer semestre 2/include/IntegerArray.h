#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H


class IntegerArray
{

    public:
        int *dato, tamanhio,mayor=0;
        IntegerArray(int);
        IntegerArray(const IntegerArray &o);
        int Mayor();
        int el_tamanhio();
        virtual ~IntegerArray();
};

#endif // INTEGERARRAY_H
