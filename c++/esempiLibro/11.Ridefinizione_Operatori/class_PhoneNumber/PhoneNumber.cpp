#include <iomanip>
using namespace std;

#include "PhoneNumber.h"

//ridefinizione dell'operatore di inserimento nello stream cout << ...
ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output << "(" << number.areaCode << ") "
           << number.exchange << "-" << number.line;
    return output;
}

//ridefinizione dell'operatore di estraszione nello stream cin >> ...
istream &operator>>(istream &input, PhoneNumber &number)
{
    input.ignore(); //salta la parentesi aperta '('
    input >> setw(3) >> number.areaCode; //inserimetno del prefisso
    input.ignore(2); // salta la parentesi chiusa ')' e gli spazi
    input >> setw(3) >> number.exchange; // prime 3 cifre del numero
    input.ignore(); //salta il trattino (-)
    input >> setw(4) >> number.line; //input della parte restante
    return input;
}
