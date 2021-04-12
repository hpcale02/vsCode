//esercizio libro pag.64 num.2.26
//visionare una scacchiera con 8 istruzioni di output e poi ridurre i numeri di istruzioni più possibile
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){ 
    //versione 8 istruzioni di output
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n\n";

    //versione ridotto
    cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n";

    return 0;
}