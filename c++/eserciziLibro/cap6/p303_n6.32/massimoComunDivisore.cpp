//trovare il MCD di 2 numeri
//hpc 17.04.2021

#include <iostream>
using namespace std;

int massimoComunDivisore(int &, int &);

int main()
{
    int n1, n2;
    cout << "inserisci due numeri: ";
    cin >> n1 >> n2;

    cout << "massimo comun divisore tra " << n1 << " e " << n2 << " ==> " << massimoComunDivisore(n1, n2) << endl;

    return 0;
}

int massimoComunDivisore(int &num1, int &num2)
{
    int mcd;

    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            mcd = i;
    }

    return mcd;
}