//scrivere un programma ricorsiva main con count 1 de
//incrementare count e visualizzate ogni volta che richiamte main
//hpc 19.04.2021

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    count++;
    cout << count << endl;

    main();
}