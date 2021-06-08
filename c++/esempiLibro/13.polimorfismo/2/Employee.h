#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

class Employee
{
public:
    Employee(const string &, const string &, const string &);
    ~Employee();

    void setFirstName(const string &);
    string getFirsteName()const;

    void setLastName(const string &);
    string getLastName() const;

    void setSocialSecurityNumber(const string &);

    string getSocialSecurityNumber() const;

    virtual double earnings() const = 0;
    virtual void print() const;
private:

};

#endif