//hpc 04.06.2021

#include <iostream>
#include <iomanip>
using namespace std;

#include "BasePlusCommissionEmployee.h"

int main()
{
    BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

    cout << fixed << setprecision(2);

    cout << "Employee information obtained by get function:\n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is " << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate()
         << "\nBase salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000);

    cout << "\nUpdated employee information output by print function:\n" << endl;
    employee.print();

    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
    
    return 0;
}