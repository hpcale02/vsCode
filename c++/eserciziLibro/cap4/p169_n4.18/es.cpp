//es n 4.18 pag 169
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    cout << "N\t10*N\t100*N\t1000*N\n" << endl;
    while ( i <= 5 )
    {
        cout << i << "\t" << i * 10 << "\t" << i * 100 << "\t" << i * 1000 << endl;
        i++;
    }
    
    return 0;
}