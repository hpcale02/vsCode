//fig 4.9 pag 131
//Definizione della classe GrandeBook che calcola la media
//hpc 09.04.2021

#include <iostream>
#include "GrandeBook.h"
using namespace std;

int main()
{
    GrandeBook myGrandeBook( "CS101 C++ Programming" );

    myGrandeBook.displayMessage();
    myGrandeBook.determinaMediaVoti();

    return 0;
}