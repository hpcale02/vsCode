//Fig6.12 pag 253
//esempio di utilizzo di visuabilità diveri
//variabili locali automatiche e alle variabili locali statiche
//auto ==> durante l'esecuzione di quel blocco
//register ==> memorizzato nel registro del CPU
//staic ==> fa diventare voraibili locali in variabili globali
//extern ==> variabili globali o nomi delle funzioni;
//hpc 12.04.2021

#include <iostream>
using namespace std;

void useLocal(void);
void useStaticlocal(void);
void useGlobal(void);

int x = 1; //variabile globale

int main()
{
    int x = 5; // varaibile locale

    cout << "locaò x ini main's outer scope is " << x << endl;

    {              //inizia un nuovo ambito di visibilita
        int x = 7; //nasconde x dall'ambito di visibilità esterno
        cout << "locaò x ini main's inner scope is " << x << endl;
    }

    cout << "locaò x ini main's outer scope is " << x << endl;

    useLocal();       //useLocal ha una variabile locale x
    useStaticlocal(); // useStaticLocal ha una variabile locale x
    useGlobal();      //useGlobal utilizza una variabile globale x
    useLocal();       //useLocal inizailizza la sua variabile locale x
    useStaticlocal(); //la variabile locale statica x mantiene il suo valore precedente
    useGlobal();      //la variabile globale x mantiene il suo valore

    cout << "\nlocal x in main is " << x << endl;
    return 0;
}

//useLocal inizializza la variabile locale x a ogni chiamata
void useLocal(void)
{
    int x = 25;

    cout << "\nlocal x is " << x << " on entering useLocal" << endl;
    x++;
    cout << "local x is " << x << " on exiting useLocal" << endl;
}

//useStaticlocal inizializza la variabile x solo la prima volta che la funzione è chiamata
//il valore di x viene mantenuto tra due successive chiamate delle funzione
void useStaticLocal(void)
{
    static int x = 50;

    cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
    x++;
    cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
}

//useGlobal modifica la variabile globale x a ogni chiamata
void useGlobal(void)
{
    cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "global x is " << x << " on exiting useGlobal" << endl;
}