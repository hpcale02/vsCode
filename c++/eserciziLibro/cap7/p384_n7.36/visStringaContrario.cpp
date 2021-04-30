//visualizzare una string aal contrario utilizzando una funzione riucorsiva
//hpc 30.04.2021

#include <iostream>
using namespace std;

void stringReverse(char[], int);

int main()
{
    char parola[] = {'c', 'i', 'a', 'o'};

    stringReverse(parola, sizeof(parola));

    return 0;
}

void stringReverse(char ch[], int lunghezza)
{
    if (lunghezza == 0)
    {
        cout << endl;
        return;
    }
    cout << ch[lunghezza - 1];
    stringReverse(ch, lunghezza - 1);
}