//classe employee senza ereditarietà
//hpc 

#include <iostream>
#include <iomanip>
using namespace std;

#include "CommissionEmployee.h"

int main()
{
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06);

    cout << fixed << setprecision(2);

    cout << "Employee information obtained by get function:\n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is " << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate() << endl;

    employee.setGrossSales(8000);
    employee.setCommissionRate(.1);

    cout << "\nUpdated employee information output by print function:\n" << endl;
    employee.print();

    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
    
    return 0;
}