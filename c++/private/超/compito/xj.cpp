#include<iostream>
using namespace std;

int main(){
    int n;
    int somma = 0;
    int cont = 0;
    int vai;
    int media;

    do{
        cin >> n;
    }while(n <= 0);

    while(cont < n){
        cin >> vai;
        somma += vai;
        cont++;
    }

    media = somma / n;

    cout << media << endl;
    return 0;
}