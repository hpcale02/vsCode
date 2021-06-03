#include <iostream>
using namespace std;

#ifndef ARRAY_H
#define ARRAY_H

class Array
{
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, Array &);

public:
    //explicit costruttore di un argomento
    explicit Array(int = 10); // cpstruttore di default
    Array(const Array &);     //costruttore di copia
    ~Array();

    int getSize() const;

    const Array &operator=(const Array &); //operatore di assegnamento

    bool operator==(const Array &) const;     //operatore di ugualianza
    bool operator!=(const Array &right) const //operatore di disugualianza
    {
        return !(*this == right);
    }

    int operator[](int) const; //operatori di indicizzazione per oggetti costanti
    int &operator[](int);      //operatori di indicizzazione per oggetti non costanti

private:
    int size;
    int *ptr; //puntatore al primo elemento dell'array interno
};

#endif