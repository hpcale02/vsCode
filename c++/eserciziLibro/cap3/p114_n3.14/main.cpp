//Class Employee
//Stipendio mensile/annuale di operatore/i
//hpc 08.04.2021

#include <iostream>
#include <string>
#include "ClassEmployee.h"
using namespace std;

int main()
{
    Employee operatore1( "Pippo", "Ciaone", 1200 );
    Employee operatore2( "Filippo", "Mattoni", 1300);

    operatore1.displayMessage();
    operatore2.displayMessage();

    return 0;
}