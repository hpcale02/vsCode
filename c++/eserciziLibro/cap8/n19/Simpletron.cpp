//un computer Simpletron
//legge solo un linguaggio macchina abbreviato SML
//accumulatore ==> messi i dati prima di usarli
//dati trattati in termine di parole ==> numero decimale a 4 cifre (+3364, -1293)
//capacità di memoria di 100 parole(00 - 01...99)
//prima istruzione nella locazione 00
//segno di un istruzione sempre positivo
//segno delle parole di dati puo essere anche negativo
//indirizzo di memori apuo contenere un/istruzione un dato/zona di memoria non utilizzata
//prime due cifre ==> codice operativo
//ultime due cifre ==> l'operando(indirizzo di memoria della parola con cui effettuare l'operazione)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Operazione di input/output
#define READ 10;  //legge una parola dalla tastiera e la trasferisce in un indirizzo di memoria specfifica
#define WRITE 11; //legge una parola da un indirizzo di memoria specifico e la visualizza sullo schermo

//Operazioni di caricamento/memorizzazione
#define LOAD 20;  //Carica nell'accumulatore una parola presente in un indirizzo di memoria specifico
#define STORE 21; //Memorizza in un indirizzo di memoria specifico la parola contenuta nell'accumulatore

//Operazioni aritmetiche
#define ADD 30;      //addiziona una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)
#define SUBTRACT 31; //sottrae una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)
#define DIVIDE 32;   //divide una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)
#define MULTIPLY 33; //moltiplica una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)

//Operazioni per il trasferimento del controllo
#define BRANCH 40;     //saltare all'indirizzo di memoria specificato
#define BRANCHNEG 41;  //saltare all'indirizzo di memoria specificato se accumulatore è vuoto
#define BRANCHZERO 42; //saltare all'inidirizzo di memoria specificato se l'accumulatore vale 0
#define HALT 43;       //Alt! il programma è terminato

void start();
void end();
void erroriFatali();
void dump();
// read:Mostra una casella di input “Inserisci un numero intero”. Legge il valoreinserito,
//      lo converte in un intero e lo memorizza nella posizione memory[operand ].
// load:accumulator = memory[ operand ];
// add:accumulator += memory[ operand ];
// branch:Parleremo tra breve di questa istruzione.
// halt:Visualizza il messaggio *** Esecuzione di Simpletron terminata ***

//visualizzar gli registri e il dump di memoria

void JTextField(int *countMemoriaPtr);

int main()
{
    int memory[100];
    int accumulator = 0000;
    int operationCode = 00; //prime due cifre
    //operationCode = instructionRegister / 100;
    int operand = 00; //ultime due cifre
    //operand = instructionRegister % 100
    int instructionCounter = 00; //indirizzo dell'istruzione successiva
    //instructionRegister = memory[ instructionCounter ];
    int instructionRegister = 0000; //da memoria a questo

    start();
    end();
}

void start()
{
    cout << "*** Benvenuti in Simpletron! ***/n"
         << "*** Digitate il vostro programma un’istruzione ***/n"
         << "*** (o una parola di dati) per volta. Io visualizzero’ il numero ***/n"
         << "*** dell’indirizzo di memoria e un punto interrogativo (?).  ***/n"
         << "*** Quindi voi dovrete digitare la parola per quella posizione. ***/n"
         << "*** Premete il pulsante Fine per interrompere il programma. ***"
         << endl;
}

void end()
{
    cout << "*** Caricamento del programma completato ***/n"
         << "*** Inizio dell’esecuzione ***" << endl;
}

void erroriFatali()
{
    cout << "*** Tentativo di dividere per zero ***/n"
         << "*** Esecuzione di Simpletron terminata a causa di un errore ***" << endl;

    dump();
}