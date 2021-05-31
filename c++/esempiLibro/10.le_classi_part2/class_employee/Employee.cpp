#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"

int Employee::count = 0; //dato membro statico

//funzione membro statico
int Employee::getCounter()
{
    return count;
}

Employee::Employee(const char *const first, const char *const last)
{
    firstName = new char[strlen(first) + 1];
    strcpy(firstName, first);

    lastName = new char[strlen(last) + 1];
    strcpy(lastName, last);

    count++; // incremento del contatore statico

    cout << "Nome: " << firstName << "\tCognome: " << lastName << endl;
}

Employee::~Employee()
{
    delete[] firstName; //rilascia la memoria
    delete[] lastName;  //rilascia la memoria

    count--; //decremento del contatore static
}

const char *Employee::getFirstName() const
{
    //const prima del tipo di ritorno ==> non modifica ai dati private
    return firstName;
}

const char *Employee::getLastName() const
{
    return lastName;
}
