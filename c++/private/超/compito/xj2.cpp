#include<iostream>
using namespace std;

int main(){
    int a, b;

    do{
        cin >> a;
        cin >> b;
    }while(a == b);

    for(int i = a+1; i < b; i++){
        cout << i << endl;
    }
    return 0;
}