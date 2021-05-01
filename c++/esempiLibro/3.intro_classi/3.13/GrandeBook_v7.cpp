//fig 3.17 p 102
//Verifica della classe GrandeBook dopo la separazione della suan interfaccia dall'implementazione
//hpc 08.04.2021

#include <iostream>
using std::cout;
using std::endl;

#include "GrandeBook.h"

int main()
{
    //creazione di due oggetti GrandeBook
    GrandeBook grandeBook1( "SC101 Introduction to Programming in C++" );
    GrandeBook grandeBook2( "CS102 C++ Data Structures" );
    
    //viasualizza il nome inizaile del corso per ogni oggetto GrandeBook
    cout << "grandeBook1 created for course: " << grandeBook1.getCourseName() 
    << "\ngrandeBook2 created for course: " << grandeBook2.getCourseName() << endl;

    //modifica del nome del corso di myGrabdeBook (con una string valida)
    grandeBook1.setCourseName( "CS101 C++ Programming" );

    //visualizza il nome dopo la correzione 
    cout << "\ngrandeBook1's course name is: "
    << grandeBook1.getCourseName()
    << "\ngrandeBook2's course name is: "
    << grandeBook2.getCourseName() << endl;

    return 0;
}