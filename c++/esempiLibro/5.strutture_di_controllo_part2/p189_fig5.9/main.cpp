//fig 5.11 pag 189
//hpc 10.04.2021

#include "GrandeBook.h"

int main()
{
    GrandeBook myGrandeBook ( "CS101 C++ Programming");

    myGrandeBook.displayMessage();
    myGrandeBook.inputVoti();
    myGrandeBook.displayVoti();

    return 0;
}