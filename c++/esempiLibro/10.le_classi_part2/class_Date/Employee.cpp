#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"
#include "Date.h"

Employee::Employee(const char *const first, const char *const last, const Date &dateOfBirth, const Date &dateOfHire)
    : birthDate(dateOfBirth),
      hireDate(dateOfHire)
{
    //copia first int firstName
    int length = strlen(first);
    length = (length < 25 ? length : 24);
    strncpy(firstName, first, length);
    firstName[length] = '\0';

    //copia last in lastName
    length = strlen(last);
    length = (length < 25 ? length : 24);
    strncpy(lastName, last, length);
    lastName[length] = '\0';

    cout << "Costruttore: " << firstName << ' ' << lastName << endl;
}

void Employee::print() const
{
    cout << lastName << ", " << firstName << "\tassunto: ";
    hireDate.print();
    cout << "\tCompleanno: ";
    birthDate.print();
    cout << endl;
}

Employee::~Employee()
{
    cout << "Distruttore di Employee" << endl;
}