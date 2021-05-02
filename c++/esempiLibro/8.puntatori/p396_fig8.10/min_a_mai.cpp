//convertire una stringa da minuscolo a maiuscolo
//islower() (minuscolo) == toupper() (maiuscolo)
//hpc 02.05.2021

#include <iostream>
#include <cctype>
using namespace std;

void convertToUppercase(char *);

int main()
{
    char phrase[] = "characters and $32.98";

    cout << "the phrase before converion is: " << phrase << endl;
    convertToUppercase(phrase);

    cout << "The phrase after conversion is: " << phrase << endl;
    return 0;
}

void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0')
    {
        if (islower(*sPtr))         // se il carattere è maiuscolo
            *sPtr = toupper(*sPtr); // convertirlo in maiuscolo
        sPtr++;
    }
}