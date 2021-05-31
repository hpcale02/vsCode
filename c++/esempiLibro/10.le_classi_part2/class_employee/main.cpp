//utilizzo di membri static
//hpc 28.05.2021

#include <iostream>
using namespace std;

#include "Employee.h"

int main()
{
    cout << "Il contatore iniziale: " << Employee::getCounter() << endl; //utilizzo diretto senzo creare un oggetto

    Employee *e1Ptr = new Employee("Susan", "Baker");
    Employee *e2Ptr = new Employee("Robert", "Jones");

    cout << "Ll numero di ogetti creati: " << e1Ptr->getCounter();

    cout << "\n\nEmployee 1: " << e1Ptr->getFirstName() << " " << e1Ptr->getLastName()
         << "\nEmployee 2: " << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << endl
         << endl;

    delete e1Ptr;
    e1Ptr = 0; //scollegare il puntatore dallo heap
    delete e2Ptr;
    e2Ptr = 0;

    cout << "Il numeor di ogetti dopo la distruzione: " << Employee::getCounter() << endl;
    return 0;
}