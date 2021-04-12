//es pag 114 v 3.11
//modificare la classe GrandeBook
//hpc 08.04.2021
#include <iostream>
using std::cout;
using std::endl;

#include "modificaClass.h"

GrandeBook::GrandeBook( string nameOfCourse, string nameOfProf)
{
    setCourseName( nameOfCourse );
    setProfName( nameOfProf);
}

void GrandeBook::setCourseName( string name )
{
    if(name.length() <= 25)
    {
        courseName = name;
    }
    else
    {
        courseName = name.substr( 0, 25 );
        cout << "il nome del corso inserito è troppo lungo (max25char)" << endl;
    }
}
string GrandeBook::getCourseName()
{
    return courseName;
}

void GrandeBook::setProfName( string name )
{
    if(name.length() <= 25)
    {
        profName = name;
    }
    else
    {
        profName = name.substr( 0, 25 );
        cout << "il nome del professore inserito è troppo lungo (max25char)" << endl;
    }
}

string GrandeBook::getProfName()
{
    return profName;
}

void GrandeBook::displayMessage()
{
    cout << "Corso: " << getCourseName() << "\nProfessore: " << getProfName() << endl << endl;
}