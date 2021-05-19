#include <iostream>
#include "Time.hpp"
using namespace std;

int main()
{
    Time t;

    cout << "The initial universal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();

    t.setTime(13, 27, 6);
    cout << "\nThe universal time after setTime is ";
    t.printUniversal();
    cout << "\nThe standard time after setTime is ";
    t.printStandard();

    t.setTime(99, 99, 99);
    cout << "\nThe universal time after invalid settings is ";
    t.printUniversal();
    cout << "\nThe standard time after invalid settings is ";
    t.printStandard();

    return 0;
}