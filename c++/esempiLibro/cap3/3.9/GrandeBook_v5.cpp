//fig 3.9 pag 89
//Inclusione della classe GrandeBook dal file GrandeBook.h per l'utilizzo in main
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::endl;

#include "GrandeBook.h" //inclusione della definizione della classe GrandeBook

int main()
{
    GrandeBook grandeBook1( "CS101 Introduction to C++ Programming" );
    GrandeBook grandeBook2( "CS102 Data stuctures C++" );

    cout << "grandeBook1 created for course: " << grandeBook1.getCourseName() 
    << "\ngrandeBook2 created for course: " << grandeBook2.getCourseName() << endl;

    return 0;
}
