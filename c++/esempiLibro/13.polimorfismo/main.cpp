#include <iostream>
#include <iomanip>
using namespace std;

#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
    CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
    CommissionEmployee *commissionEmployeePtr = 0;

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

    cout << fixed << setprecision(2);

    cout << "Print base-class and derived-class objects:\n"
         << endl;
    commissionEmployee.print();
    cout << endl
         << endl;
    basePlusCommissionEmployee.print();

    commissionEmployeePtr = &commissionEmployee;
    cout << "\n\nCalling print with base-class pointer to"
         << "\nbase-class object invokes base-class print function:\n"
         << endl;
    commissionEmployeePtr->print();

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling print with derived-class pointer to"
         << "\nderived-class object invokes derived-class print function:\n"
         << endl;
    basePlusCommissionEmployeePtr->print();

    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling print eith base-class pointer to derivered-class object"
         << "\ninvokes base-class print function on that derived-class object:\n\n";
    commissionEmployeePtr->print();
    cout << endl;
    
    return 0;
}