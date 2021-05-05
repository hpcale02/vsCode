#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
    do{
        cin >> n;
    }while(n < 0);
    
    if(n % 2 != 0)
        n--;

    while(n > 0){
        n -= 2;

        cout << n << endl;
    }
    return 0;
}