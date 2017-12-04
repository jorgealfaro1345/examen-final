#ifndef USCURRENCY_H
#define USCURRENCY_H


class USCurrency
{
    public:
        int dollars;
        int cents;
        USCurrency(int ,int );
        virtual ~USCurrency();
};

#endif // USCURRENCY_H
