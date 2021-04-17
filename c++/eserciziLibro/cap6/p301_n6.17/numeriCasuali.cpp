//numeri casuali tra
//2, 4, 6, 8, 10
//3, 5, 7, 9, 11
//6, 10, 14, 18, 22

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x, y, z;
    srand(time(0));
    do
    {
        x = (2 + rand() % 9);
    } while (x % 2 != 0);
    cout << x << endl;

    do
    {
        y = (3 + rand() % 9);
    } while (y % 2 == 0);
    cout << y << endl;

    do
    {
        z = (6 + rand() % 17);
    } while ((z - 6) % 4 != 0);
    cout << z << endl;

    return 0;
}
