//Utilizzo di strlen (calcolare la lunghezza)
//hpc 03.05.2021

#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char *s1 = "abcdefghijklmnopqrstuvwxyz";
    char *s2 = "four";
    char *s3 = "Boston";

    cout << "The length of \"" << s1 << "\" is " << strlen(s1)
         << "\nThe length of \"" << s2 << "\" is " << strlen(s2)
         << "\nThe length of \"" << s3 << "\" is " << strlen(s3) << endl;
    return 0;
}