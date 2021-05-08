//simulazione la tartaruga e lerpa
//quadarato da 1 a 70 ==> parte da 1 raggiunge o sorpassa 70 vince
//timer di 1 tic al secondo ==> ogni tic aggiorna la posizione degli animali
//se scivola e cade al quadrato precedente all'1 ==> rimetterlo al 1
/************************************************************************/
//percedntuale con int i ==> 1 <= i <= 10
//tartaruga ==> 1<=i<=5 ==> passo veloce ==> 3R
//          ==> 6<=i<=7 ==> scivola ==> 6L
//          ==> 8<=i<=10 ==> passo lento ==> 1R
/************************************************************************/
//Lerpe ==> 1<=i<=2 ==> Riposo ==> 0
//      ==> 3<=i<=4 ==> Salto lungo ==> 9R
//      ==> i==5 ==> Scivolata lunga ==> 12L
//      ==> 6<=i<=8 ==> salto piccolo ==> 1R
//      ==> 9<=i<=10 ==> Scivolata piccola ==> 2L
/************************************************************************/
//la partita parte con lo spare ==> BANG !!!!! \n PARTITI !!!!!
//a ogni tic visualizzare una linea con 70 tacche
//posizione di tartaruga(T) / posizione di lerpa(L) / stesso posto (OUCH!!!)
//vittoria tartaruga ==> HA VINTO LA TARTARUGA!!! YAHOO!!!
//vittoria lerpa ==> HA VINTO LA LERPA!!! YUHOO!!!
//Vittoria entrambi ==> DIAMINE!!! HANNO PAREGGIATO!!!

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int END = 70;

void moveTartaruga(int *const);
void moveLerpa(int *const);
void lineaCampo(const int *const, const int *const);

int main()
{
    int posizioneTartaruga = 1;
    int posizioneLerpa = 1;
    int timer = 0;
    srand(time(0));

    cout << "BANG !!!!!\nPARTITIT !!!!!" << endl;
    while (posizioneLerpa != END && posizioneTartaruga != END)
    {
        moveTartaruga(&posizioneTartaruga);
        moveLerpa(&posizioneLerpa);
        lineaCampo(&posizioneLerpa, &posizioneTartaruga);
        timer++;
    }

    if (posizioneTartaruga >= posizioneLerpa)
        cout << "HA VINTO LA TARTARUGA!!! YAHOO!!!" << endl;
    else
        cout << "HA VINTO LA LERPA!!! YUHOO!!!" << endl;

    cout << "TEMPO TOTALE: " << timer << " SECONDI" << endl;
    return 0;
}

void moveTartaruga(int *const tartarugaPtr)
{
    int i = rand() % 10 + 1;

    if (i <= 5)
        *tartarugaPtr += 3;
    else if (i <= 7)
        *tartarugaPtr -= 6;
    else
        (*tartarugaPtr)++;

    if (*tartarugaPtr > END)
        *tartarugaPtr = END;

    if (*tartarugaPtr < 1)
        *tartarugaPtr = 1;
}

void moveLerpa(int *const lerpaPtr)
{
    int i = rand() % 10 + 1;

    if (i <= 4)
        *lerpaPtr += 9;
    else if (i == 5)
        *lerpaPtr -= 12;
    else if (i <= 8)
        (*lerpaPtr)++;
    else
        *lerpaPtr -= 2;

    if (*lerpaPtr > END)
        *lerpaPtr = END;

    if (*lerpaPtr < 1)
        *lerpaPtr = 1;
}

void lineaCampo(const int *const lerpaPtr, const int *const tartarugaPtr)
{
    if (*lerpaPtr > *tartarugaPtr)
        cout << setw(*tartarugaPtr) << 'T' << setw(*lerpaPtr - *tartarugaPtr) << 'L' << endl;
    else if (*lerpaPtr < *tartarugaPtr)
        cout << setw(*lerpaPtr) << 'L' << setw(*tartarugaPtr - *lerpaPtr) << 'T' << endl;
    else
        cout << setw(*lerpaPtr -3) << "OUCH!!!" << endl;
}