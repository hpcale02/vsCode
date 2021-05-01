//fig 3.11 p 94
//Definezione della classe GrandeBook. Questo file presenta l'interfaccia
//hpc 07.04.2021
#include <iostream>
using namespace std;

#include "GrandeBook.h"

GrandeBook::GrandeBook( string name )
{
    setCourseName( name );
}

void GrandeBook::setCourseName( string name )
{
    courseName = name;
}

string GrandeBook::getCourseName()
{
    return courseName;
}

void GrandeBook::displayMessage()
{
    cout << "Welcome to the GrandeBook for\n" << getCourseName() << "!" << endl;
}
