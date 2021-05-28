//Chiamata in cascata di funzioni membro
//hpc 28.05.2021

#include <iostream>
using namespace std;

#include "Time.hpp"

int main()
{
    Time t;

    //chiamata in cascata
    t.setHour(18).setMinute(30).setSecond(22);

    cout << "Forato Universale: ";
    t.printUniversal();

    cout << "\nFormato Standard: ";
    t.printStandard();

    cout << "\n\nNuovo tempo Standard: ";
    t.setTime(20, 20, 20).printStandard();
    cout << endl;

    return 0;
}