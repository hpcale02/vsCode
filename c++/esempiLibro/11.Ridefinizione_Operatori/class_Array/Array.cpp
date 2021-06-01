#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "Array.h"

//costruttore di default
Array::Array(int arraySize)
{
    size = (arraySize > 0 ? arraySize : 10);
    ptr = new int[size]; //crea spazio per l'array basato su puntatori

    for (int i = 0; i < size; i++)
        ptr[i] = 0;
}

//costruttore di copia
Array::Array(const Array &arrayToCopy)
    : size(arrayToCopy.size)
{
    ptr = new int[size];

    for (int i = 0; i < size; i++)
        ptr[i] = arrayToCopy.ptr[i];
}

Array::~Array()
{
    delete[] ptr; //rilasciare lo spazio di memoria dell'Array
}

int Array::getSize() const
{
    return size;
}

//ridefinzione operartore =
const Array &Array::operator=(const Array &right)
{
    if (&right != this) //evita l'autoassegnamento
    {
        //per array di dimensioni diversi
        if (size != right.size)
        {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }

        for (int i = 0; i < size; i++)
            ptr[i] = right.ptr[i];
    }

    return *this;
}

//ridefinizione operatore ==
bool Array::operator==(const Array &right) const
{
    if (size != right.size)
        return false;

    for (int i = 0; i < size; i++)
        if (ptr[i] != right.ptr[i])
            return false;

    return true;
}

//ridefinizione opratore [] costante
int Array::operator[](int subscript) const
{
    //verifica
    if (subscript < 0 || subscript >= size)
    {
        cerr << "\nError: Subscript " << subscript
             << " out of range" << endl;
        exit(1);
    }

    return ptr[subscript]; //ritornare una copia di questo elemto
}

//ridefinizione operatore []
int &Array::operator[](int subscript)
{
    //verifica
    if (subscript < 0 || subscript >= size)
    {
        cerr << "\nError: Subscript " << subscript
             << " out of range" << endl;
        exit(1);
    }

    return ptr[subscript]; //ritornare un riferimento
}

istream &operator>>(istream &input, Array &a)
{
    for (int i = 0; i < a.size; i++)
        input >> a.ptr[i];

    return input;
}

ostream &operator<<(ostream &output, const Array &a)
{
    int i;

    for(i = 0; i < a.size; i++)
    {
        output << setw(12) << a.ptr[i];

        if((i+1) % 4 == 0)
        output << endl;
    }

    return output;
}