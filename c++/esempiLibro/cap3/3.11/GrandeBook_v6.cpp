//fig 3.13 p 97
//Verifica della classe GrandeBook dopo la separazione della suan interfaccia dall'implementazione
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::endl;

#include "GrandeBook.h"

int main()
{
    //creazione di due oggetti GrandeBook
    GrandeBook grandeBook1( "SC101 Introduction to C++ Programmer" );
    GrandeBook grandeBook2( "SC102 Data Structures in C++" );
    
    //viasualizza il nome inizaile del corso per ogni oggetto GrandeBook
    cout << "grandeBook1 created for course: " << grandeBook1.getCourseName() 
    << "\ngrandeBook2 created for course: " << grandeBook2.getCourseName() << endl;

    return 0;
}