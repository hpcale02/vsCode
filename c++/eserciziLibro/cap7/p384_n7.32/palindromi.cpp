//una string palindroma e una tring che si legge allo stesso modo ìd asinistra a destra
//esempio radar anche ignorando gli spazzi
//hpc 28.04.2021

#include <iostream>
#include <string>
using namespace std;

bool testPalindrome(const string, int, int);

int main()
{
    string parola[] = {"radar",
                       "ablewasiereisawelba",
                       "amanaplanacanalpanama",
                       "ciao",
                       "miele"};
    for (int i = 0; i < 5; i++)
    {
        if (testPalindrome(parola[i], 0, parola[i].length()))
        {
            cout << "VERO" << endl;
        }
        else
        {
            cout << "FALSO" << endl;
        }
    }

    return 0;
}

bool testPalindrome(const string frase, int inizio, int fine)
{
    if (fine <= 1)
    {
        return true;
    }
    else if (frase[inizio] == frase[fine - 1] && testPalindrome(frase, inizio + 1, fine - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}