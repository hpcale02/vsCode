//Fig 6.9 Pag 241
//lancio di un dato 6 milione di volte
//hpc 12.04.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int frequenza1 = 0;
    int frequenza2 = 0;
    int frequenza3 = 0;
    int frequenza4 = 0;
    int frequenza5 = 0;
    int frequenza6 = 0;
    int face;

    for (int i = 1; i < 6000000; i++)
    {
        face = 1 + rand() % 6;

        switch (face)
        {
        case 1:
            frequenza1++;
            break;

        case 2:
            frequenza2++;
            break;

        case 3:
            frequenza3++;
            break;

        case 4:
            frequenza4++;
            break;

        case 5:
            frequenza5++;
            break;

        case 6:
            frequenza6++;
            break;

        default:
            cout << "il programma non dovrebbe arrivare qua!" << endl;
            break;
        }
    }
    cout << "faccia" << setw(13) << "frequenza" << endl;

    cout << "\t1" << setw(13) << frequenza1
         << "\n\t2" << setw(13) << frequenza2
         << "\n\t3" << setw(13) << frequenza3
         << "\n\t4" << setw(13) << frequenza4
         << "\n\t5" << setw(13) << frequenza5
         << "\n\t6" << setw(13) << frequenza6 << endl;

    return 0;
}