//Class Invoice ==> Rapressentare la fattura la fattura di vendita di un componente
//hpc 08.04.2021

#include <iostream>
#include <string>
using namespace std;

#include "ClassInvoice.h"

int main()
{
    Invoice Oggetto1( "CS101", "matita", 50, 1);
    Invoice Oggetto2( "CS102", "gomma", 30, 2);

    Oggetto1.displayMessage();
    Oggetto2.displayMessage();

    return 0;
}