//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = 7;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j + i < 4 || i - j > 4)
            {
                cout << ' ';
            }
        }
        
        if (x < 10)
        {
            for (int j = 0; j < x; j++)
            {
                cout << '*';
            }
            x += 2;
        }
        else
        {
            for (int j = 0; j < y; j++)
            {
                cout << '*';
            }
            y -= 2;
        }
        cout << endl;
    }

    return 0;
}