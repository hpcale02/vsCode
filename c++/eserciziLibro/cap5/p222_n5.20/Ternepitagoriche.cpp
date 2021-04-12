//calcolare il terne pitagorche di vari lati
//hpc 11.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side1, side2, hypotenuse;

    for (side1 = 1; side1 <= 500; side1++)
    {
        for (side2 = 1; side2 <= 500; side2++)
        {
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
            {
                if (pow(side1, 2) + pow(side2, 2) == pow(hypotenuse, 2))
                    cout << "hypotenuse: " << hypotenuse << "\t\tside1: " << side1 << "\tside2: " << side2 << endl;
            }
        }
    }

    return 0;
}