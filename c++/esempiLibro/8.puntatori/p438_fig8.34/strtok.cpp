//Utilizzo di strtok(separare una stringa)
//hpc 03.05.2021

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[] = "This is a sentence eith 7 tokens";
    char *tokenPtr;

    cout << "The string to be tokenized is: " << sentence << endl;

    cout << "\nThe tokens are:" << endl;

    //inizia la divisione della frase
    tokenPtr = strtok(sentence, " ");

    while (tokenPtr != NULL)
    {
        cout << tokenPtr << endl;
        tokenPtr = strtok(NULL, " "); //token successivo
    }

    cout << "\nAfter strtok, snetence = " << sentence << endl;
    return 0;
}