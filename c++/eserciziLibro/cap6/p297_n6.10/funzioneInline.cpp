//funzione iunline di nome sphereVolumr ch ecalcola il volume di una sfera con il raggio
//hpc 16.04.2021

#include <iostream>
using namespace std;

inline double sphereVolume(const double raggio)
{
    return (4 / 3) * 3.14159 * pow(raggio, 3);
}
int main()
{
    double raggio;
    cout << "iniseriscil il raggio della sfera: ";
    cin >> raggio;
    cout << sphereVolume(raggio) << endl;

    return 0;
}