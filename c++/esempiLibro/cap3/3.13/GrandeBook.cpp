#include <iostream>
using namespace std;

#include "GrandeBook.h"

GrandeBook::GrandeBook( string name )
{
    setCourseName( name );
}

void GrandeBook::setCourseName( string name )
{
    if(name.length() <= 25) //se name è lungo 25 caratteri o meno
        courseName = name;

    if(name.length() > 25) //se name è più lungo di 25 caratteri
    {
        courseName = name.substr( 0, 25 ); //troncare i primi 25 caratteri

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n" 
        << "Limiting courseaName to first 25 characters.\n" << endl;
    }
}

string GrandeBook::getCourseName()
{
    return courseName;
}

void GrandeBook::displayMessage()
{
    cout << "Welcome to the GrandeBook for\n" << getCourseName() << "!" << endl;
}