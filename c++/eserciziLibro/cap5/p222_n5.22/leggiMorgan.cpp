//leggi di morgan 
//!(condizione1 && condizione2) ==> (!condizione1 || !condizione2)
//!(condizione1 || condizione2) ==> (!condizione1 && !condizione2)
//hpc 12.04.2021

#include <iostream>
using namespace std;

int main()
{

    cout << "1 = false; 0 = true" << endl;
    cout << "!(true && true): " << !(true && true) << "\t(!true || !true): " << (!true || !true) << endl;
    cout << "!(true || true): " << !(true || true) << "\t(!true && !true): " << (!true && !true) << endl;

    cout << "!(true && false): " << !(true && false) << "\t(!true || !false): " << (!true || !false) << endl;
    cout << "!(true || false): " << !(true || false) << "\t(!true && !false): " << (!true && !false) << endl;

    cout << "!(false && false): " << !(false && false) << "\t(!false || !false): " << (!false || !false) << endl;
    cout << "!(false || false): " << !(false || false) << "\t(!false && !false): " << (!false && !false) << endl;

    return 0;
}