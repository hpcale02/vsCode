#include <iostream>
using namespace std;

#include "Employee.h"

int main()
{
    Date birth(7, 24, 1949);
    Date hire(3, 12, 1988);
    Employee manager("Bob", "Blue", birth, hire);

    cout << endl;
    manager.print();

    //testare Data con valori invalidi
    cout << "\ntest Data (valori invalidi)" << endl;
    Date lastDayOff(14, 35, 1994); //mese giorno invalido
    cout << endl;
    return 0;
}