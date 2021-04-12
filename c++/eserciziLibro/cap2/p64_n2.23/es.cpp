//esercizio libro pag.64 num.2.23
//5 numeri interi e vedere il minimo e il massimo
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){

    //dichiarare i variabili
    int number1, number2, number3, number4, number5;

    //inserire i variabili
    cout << "inserisci 5 numeri interi: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    //trovare il numero maggiore
    if(number1 > number2){
        if (number1 > number3){
            if (number1 > number4){
                if (number1 > number5){
                    cout << "il numero piu grande è " << number1 << endl;
                }
            }
        }   
    }
    if(number2 > number1){
        if (number2 > number3){
            if (number2 > number4){
                if (number2 > number5){
                    cout << "il numero piu grande è " << number2 << endl;
                }
            }
        }   
    }
    if(number3 > number1){
        if (number3 > number2){
            if (number3 > number4){
                if (number3 > number5){
                    cout << "il numero piu grande è " << number3 << endl;
                }
            }
        }  
    }
    if(number4 > number1){
        if (number4 > number2){
            if (number4 > number3){
                if (number4 > number5){
                    cout << "il numero piu grande è " << number4 << endl;
                }
            }
        } 
    }
    if(number5 > number1){
        if (number5 > number2){
            if (number5 > number3){
                if (number5 > number4){
                    cout << "il numero piu grande è " << number5 << endl;
                }
            }
        } 
    }  


    //trivare il numero minore
    if(number1 < number2){
        if (number1 < number3){
            if (number1 < number4){
                if (number1 < number5){
                    cout << "il numero piu piccolo è " << number1 << endl;
                }
            }
        }   
    }
    if(number2 < number1){
        if (number2 < number3){
            if (number2 < number4){
                if (number2 < number5){
                    cout << "il numero piu piccolo è " << number2 << endl;
                }
            }
        }   
    }
    if(number3 < number1){
        if (number3 < number2){
            if (number3 < number4){
                if (number3 < number5){
                    cout << "il numero piu piccolo è " << number3 << endl;
                }
            }
        }  
    }
    if(number4 < number1){
        if (number4 < number2){
            if (number4 < number3){
                if (number4 < number5){
                    cout << "il numero piu piccolo è " << number4 << endl;
                }
            }
        } 
    }
    if(number5 < number1){
        if (number5 < number2){
            if (number5 < number3){
                if (number5 < number4){
                    cout << "il numero piu piccolo è " << number5 << endl;
                }
            }
        } 
    }

    return 0;
}