#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h"

class Employee
{
public:
    Employee(const char *const, const char *const, const Date &, const Date &);
    void print() const;
    ~Employee();

private:
    char firstName[25];
    char lastName[25];
    const Date birthDate; //composizione: oggetto membro
    const Date hireDate; //composizione. oggetto membro
};

#endif