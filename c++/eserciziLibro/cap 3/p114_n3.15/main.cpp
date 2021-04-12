//Class Data
//Stampare dati
//hpc 08.04.2021

#include <iostream>
#include "ClassData.h"
using namespace std;

int main()
{
    Data data1(8, 4, 2021);
    Data data2(10, 4, 2021);
    Data data3(8, 10, 2021);
    Data data4(18, 12, 2021);

    data1.displayData();
    data2.displayData();
    data3.displayData();
    data4.displayData();

    return 0;
}