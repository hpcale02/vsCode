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

//Operazione di input/output
//10 ==> legge una parola dalla tastiera e la trasferisce in un indirizzo di memoria specfifica
//11 ==> legge una parola da un indirizzo di memoria specifico e la visualizza sullo schermo

//Operazioni di caricamento/memorizzazione
//20 ==> Carica nell'accumulatore una parola presente in un indirizzo di memoria specifico
//21 ==> Memorizza in un indirizzo di memoria specifico la parola contenuta nell'accumulatore

//Operazioni aritmetiche
//30 ==> addiziona una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)
//31 ==> sottrae una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)
//32 ==> divide una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)
//33 ==> moltiplica una parola presente in un indirizzo specifico con la parola presente nell'accumulatore (risultato rimane nel accumulatore)

//Operazioni per il trasferimento del controllo
//40 ==> saltare all'indirizzo di memoria specificato
//41 ==> saltare all'indirizzo di memoria specificato se accumulatore è vuoto
//42 ==> saltare all'inidirizzo di memoria specificato se l'accumulatore vale 0
//43 ==> Alt! il programma è terminato

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void start();
void end();

//leggere il codice nella memoria
void writeSML(int[], const int);

void choose(const int, const int, int *, int *, int[], const int);

void dump(const int, const int, const int, const int, const int, const int *const);
void output(const char *const, int, int, bool);

const int SIZE_MEMORY = 100, MAX_WORD = 9999, MIN_WORD = -9999;
const int SENTINELLA = -99999;
int main()
{
    int memory[SIZE_MEMORY] = {0};
    int accumulator = 0000;
    int operationCode = 00; //prime due cifre
    //operationCode = instructionRegister / 100;
    int operand = 00; //ultime due cifre
    //operand = instructionRegister % 100
    int counter = 00; //indirizzo dell'istruzione successiva
    //instructionRegister = memory[ counter ];
    int instructionRegister = 0000; //da memoria a questo

    int k;

    start();

    do
    {
        writeSML(memory, counter);
        counter++;
        k = counter;
    } while (memory[counter - 1] != SENTINELLA);
    memory[counter - 1] = 0;
    cout << endl;

    end();
    cout << endl;

    for (int counter = 0; counter < k; counter++)
    {
        instructionRegister = memory[counter];

        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;

        choose(operationCode, operand, &counter, &accumulator, memory, instructionRegister);
    }
}

void choose(const int operationCode, const int operand, int *counterPtr, int *accumulatorPtr, int memory[], const int instructionRegister)
{
    switch (operationCode)
    {
    case 10: //read
        cout << "Inserisci un numero intero:  ";
        cin >> memory[operand];
        break;
    case 11: //write
        cout << "il numero di " << operand << ": ";
        cout << memory[operand] << endl;
        break;
    case 20: //load
        *accumulatorPtr = memory[operand];
        break;
    case 21: //store
        memory[operand] = *accumulatorPtr;
        break;
    case 30: //add
        *accumulatorPtr += memory[operand];
        break;
    case 31: //subtract
        *accumulatorPtr -= memory[operand];
        break;
    case 32: //divide
        *accumulatorPtr /= memory[operand];
        break;
    case 33: //multiply
        *accumulatorPtr *= memory[operand];
        break;
    case 40: //branch
        *counterPtr = operand;
        break;
    case 41: //branchNeg
        if (*accumulatorPtr < 0)
            *counterPtr = operand;
        break;
    case 42: //branchZero
        if (*accumulatorPtr == 0)
            *counterPtr = operand;
        break;
    case 43:
        cout << "*** Esecuzione di Simpletron tertminata ***" << endl
             << endl;
        dump(*accumulatorPtr, *counterPtr, instructionRegister, operationCode, operand, memory);
        break;
    default:
        break;
    }
}

void dump(const int acc, const int count, const int instructionReg, const int operatioCode, const int operand, const int *const memory)
{
    cout << "\nREGISTRI:" << endl;
    output("accumulator", 5, acc, true);
    output("counter", 2, count, false);
    output("instructionRegister", 5, instructionReg, true);
    output("operationCode", 2, operatioCode, false);
    output("operand", 2, operand, false);

    cout << "\n\nMEMORIA:" << endl;
    cout << setfill(' ') << setw(3) << ' ';

    for (int i = 0; i < 10; i++)
        cout << setw(5) << i << ' ';

    for (int i = 0; i < SIZE_MEMORY; i++)
    {
        if (i % 10 == 0)
            cout << '\n'
                 << setw(2) << i << ' ';

        cout << setiosflags(ios::internal | ios::showpos)
             << setw(5) << setfill('0') << memory[i] << ' '
             << resetiosflags(ios::internal | ios::showpos);
    }
    cout << endl;
}

void output(const char *const sPtr, int width, int value, bool sign)
{
    cout << setfill(' ') << setiosflags(ios::left) << setw(20) << sPtr << ' ';
    if (sign)
        cout << setiosflags(ios::showpos | ios::internal);

    cout << resetiosflags(ios::left) << setfill('0');

    if (width == 5)
        cout << setw(width) << value << '\n';
    else
        cout << setfill(' ') << setw(3) << ' ' << setw(width)
             << setfill('0') << value << '\n';

    if (sign)
        cout << resetiosflags(ios::showpos | ios::internal);
}

void writeSML(int memory[], const int count)
{
    if (count < 10)
        cout << "0" << count << " ? ";
    else
        cout << count << " ? ";

    cin >> memory[count];
}

void start()
{
    cout << "***                   Benvenuti in Simpletron!                   ***\n"
         << "***         Digitate il vostro programma un’istruzione           ***\n"
         << "*** (o una parola di dati) per volta. Io visualizzero’ il numero ***\n"
         << "***   dell’indirizzo di memoria e un punto interrogativo (?).    ***\n"
         << "*** Quindi voi dovrete digitare la parola per quella posizione.  ***\n"
         << "***   Premete il pulsante Fine per interrompere il programma.    ***"
         << endl;
}

void end()
{
    cout << "*** Caricamento del programma completato ***\n"
         << "***        Inizio dell’esecuzione        ***" << endl;
}