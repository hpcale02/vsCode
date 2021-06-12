#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);

int main()
{
    cout << fixed << setprecision(2);

    SalariedEmployee salariedEmplyee("john", "Smith", "111-11-1111", 800);
    HourlyEmployee hourlyEmployee("Karenn", "Price", "222-22-2222", 16.75, 40);
    CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("bob", "Lewis", "444-44-4444", 5000, .04, 300);

    cout << "Employee processed individually using static biding:\n\n";

    salariedEmplyee.print();
    cout << "\nearned $" << salariedEmplyee.earnings() << "\n\n";

    hourlyEmployee.print();
    cout << "\nearned $" << hourlyEmployee.earnings() << "\n\n";

    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";

    basePlusCommissionEmployee.print();
    cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";

    vector<Employee *> employees(4);

    employees[0] = &salariedEmplyee;
    employees[1] = &hourlyEmployee;
    employees[2] = &commissionEmployee;
    employees[3] = &basePlusCommissionEmployee;

    cout << "Employees processed polymorphically via dynamic biding:\n\n";

    for (size_t i = 0; i < employees.size(); i++)
        virtualViaPointer(employees[i]);

    cout << "Virtual function calls made off base-class references:\n\n";

    for(size_t i = 0; i < employees.size(); i++)
        virtualViaReference(*employees[i]);

    return 0;
}

void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}