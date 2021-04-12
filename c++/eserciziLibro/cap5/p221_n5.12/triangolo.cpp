// *           **********  **********           *
// **          *********    *********          **
// ***         ********      ********         ***
// ****        *******        *******        ****
// *****       ******          ******       *****
// ******      *****            *****      ******
// *******     ****              ****     *******
// ********    ***                ***    ********
// *********   **                  **   *********
// **********  *                    *  **********

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j <= i)
                cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 10; i > 0; i--)
    {
        for (int j = 10; j > 0; j--)
        {
            if (j <= i)
                cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j < i)
                cout << ' ';
            else
                cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j < i)
                cout << ' ';
            else
                cout << '*';
        }
        cout << endl;
    }

    return 0;
}