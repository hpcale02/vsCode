//con vertire celsus in fahrenheit o viceversa
// celsius 0° a 100°
//fahrenheit 32° a 212°
//0 : 100 = 0: 180
//hpc 17.04.2021

#include <iostream>
using namespace std;

double celsius(double);
double fahrenheit(double);

int main()
{
    cout << "celsius\t\tfahrenheit" << endl;
    for (int i = 0 ; i <= 100; i++)
    {
        cout << i << "\t\t" << fahrenheit(i) << endl;
    }

    return 0;
}

double celsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheit(double celsius)
{
    return 32 + celsius * 9 / 5;
}