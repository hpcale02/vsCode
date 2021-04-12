//es n 4.24 pag 170
//hpc 10.04.2021
/*
if ( y == 8 )
    if ( x == 5 )
        cout << "@@@@@" << endl;
    else
        cout << "#####" << endl;
cout << "$$$$$" << endl;
cout << "&&&&&" << endl;
*/

#include <iostream>
using namespace std;

int main()
{
    // a)
    cout << "a)\n";
    int x = 5;
    int y = 8;

    if ( y == 8 )
    {
        if ( x == 5 )
            cout << "@@@@@" << endl;
        else
            cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl << endl;
    }

    //b) x = 5, y = 8
    cout << "b)\n";
    
    if ( y == 8 )
    {
        if ( x == 5 )
            cout << "@@@@@" << endl;
        else
        {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }
        cout << endl;
    }

    //c) x = 5, y = 8
    cout << "c)\n";
    if ( y == 8 )
    {
        if ( x == 5 )
            cout << "@@@@@" << endl;
        else
        {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    cout << "&&&&&" << endl << endl;
    }

    //d) x = 5, y = 7;
    cout << "d)\n";
    x = 5;
    y = 7;

    if ( y == 8 )
    {
        if ( x == 5 )
            cout << "@@@@@" << endl;
        else
        {}
    }
    cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;

    return 0;
}
