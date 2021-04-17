// a) 1 <= n <= 25
// b) 1 <= n <= 100
// c) 0 <= n <= 9
// d) 1000 <= n <= 1112
// e) -1 <= n <= 1
// f) -3 <= n <= 11
//hpc 17.04.2021

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    srand(time(0));

    // a) 1 <= n <= 25
    cout << (1 + rand() % 25) << endl;

    // b) 1 <= n <= 100
    cout << (1 + rand() % 100) << endl;

    // c) 0 <= n <= 9
    cout << (0 + rand() % 9) << endl;

    // d) 1000 <= n <= 1112
    cout << (1000 + rand() % 1112) << endl;

    // e) -1 <= n <= 1
    cout << (-1 + rand() % 1) << endl;

    // f) -3 <= n <= 11
    cout << (-3 + rand() % 11) << endl;

    return 0;
}