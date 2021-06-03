//classe date con operatore ++ (pre/pos)
//hpc 03.06.2021

#include <iostream>
using namespace std;

#include "Date.h"

int main()
{
    Date d1;
    Date d2(12, 27, 1992);
    Date d3(0, 99, 8045);

    cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3;
    cout << "\n\nd2 += 7 is " << (d2 += 7);

    d3.setDate(2, 28, 1992);
    cout << "\n\n  d3 is " << d3;
    cout << "\n++d3 is " << ++d3 << " (anno bisestile)";

    Date d4(7, 13, 2002);

    cout << "\n\nTesting operatore di preincremento:"
         << "\n  d4 is " << d4
         << "\n++d4 is " << ++d4
         << "\n  d4 is " << d4;

    cout << "\n\nTesting operatore di posincremento:"
         << "\n  d4 is " << d4
         << "\nd4++ is " << d4++
         << "\n  d4 is " << d4 << endl;

    return 0;
}