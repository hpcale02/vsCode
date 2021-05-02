//Calcolo del cubo di una cariabile passata per valore
//hpc 02.05.2021

#include<iostream>
using namespace std;

int cubeByValue(int *);

int main(){
    int number = 5;

    cout << "il valore originale è " << number;

    number = cubeByValue(&number);
    cout << " \nIl valore nuovo del numero è " << number << endl;
    return 0;
}

int cubeByValue(int *nPtr){
    return *nPtr * *nPtr * *nPtr;
}