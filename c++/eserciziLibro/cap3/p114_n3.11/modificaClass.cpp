//es pag 114 v 3.11
//modificare la classe GrandeBook
//hpc 08.04.2021

#include <iostream>
using namespace std;

#include "modificaClass.h"

int main()
{
    GrandeBook grandeBook1( "Matematica", "Alfonso" );
    GrandeBook grandeBook2( "Italiano", "Pippo" );

    grandeBook1.displayMessage();
    grandeBook2.displayMessage();

    return 0;
}
