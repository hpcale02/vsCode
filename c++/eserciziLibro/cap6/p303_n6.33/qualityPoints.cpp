//una funzione qualityPoints
//4 ==> 100-90
//3 ==> 89-80
//2 ==> 79-70
//1 ==> 69-60
//0 ==> < 60
//hpc 17.04.2021

#include<iostream>
using namespace std;

int qualityPoints(int);

int main(){
    int media;
    cout << "media: ";
    cin >> media;

    cout << qualityPoints(media) << endl;

    return 0;
}

int qualityPoints(int media){
    if(media >= 90)
    return 4;
    else if(media >= 80)
    return 3;
    else if(media >= 70)
    return 2;
    else if(media >= 60)
    return 1;
    else
    return 0;
}