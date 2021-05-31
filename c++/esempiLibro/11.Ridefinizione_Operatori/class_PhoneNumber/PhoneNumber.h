#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
    string areaCode; //prefisso di 3 cifre
    string exchange; //prime 3 cifre del numero
    string line; //ultime 4 cifre del numero
};

#endif