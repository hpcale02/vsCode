#include <stdio.h>
#include <stdlib.h>
///OPERAZIONI DI IMPUT/OUTPUT///
#define READ 10
#define WRITE 11
///OPERAZIONI DI CARICAMENTO/IMMAGAZZINAMENTO///
#define LOAD 20 //ATTENZIONE: ALMENO PER IL PROGRAMMA DI ESEMPIO,QUESTA FUNZ.RISULTA SUPERFLUA//
#define STORE 21
///OPERAZIONI ARITMETICHE///
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
///OPERAZIONI DI TRASFERIMENTO DEL CONTROLLO///
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

///esempio di programma di 10 istruzioni da far eseguire//
//il programma somma 2 numeri//
//POSIZIONE NEL VETTORE MEMORY  COD.INSERITO
//          00                      1007        legge a
//          01                      1008        legge b
//          02                      2007        carica a nell'accumulatore
//          03                      3008        somma b all'accum.
//          04                      2109        memorizza il valore dell'accum. in c
//          05                      1109        stampa c
//          06                      4300        Halt
//          07                      0000        variab.a
//          08                      0000        variab.b
//          09                      0000        variab.c

int insertInstruction(int memory[100], int instructionCounter);
int Elaborate(int memory[100], int accumulator, int instructionCounter, int instructionRegister, int operationCode, int operand);
void dump(int memory[100]);
void cleanMemory(int memory[100]);

int main()
{
    int memory[100];
    int accumulator = 0000;
    int instructionCounter = 1;
    int instructionRegister = 0000;
    int operationCode = 00;
    int operand = 00;

    cleanMemory(memory);

    instructionCounter = insertInstruction(memory, instructionCounter);
    dump(memory);

    Elaborate(memory, accumulator, instructionCounter, instructionRegister, operationCode, operand);

    dump(memory);

    return 0;
}
int insertInstruction(int memory[100], int instructionCounter)
{
    do
    {
        printf("Inserisci l'istruzione %d: ", instructionCounter);
        scanf("%d", &memory[instructionCounter]);
        if (memory[instructionCounter] < -9999 || memory[instructionCounter] > 9999)
        {
            printf("\nL'istruzione non rientra nel range appropriato");
            printf("\nInserisci l'istruzione %d: ", instructionCounter);
            scanf("%d", &memory[instructionCounter]);
        }
        instructionCounter++;
    } while (memory[instructionCounter - 1] != 9999);

    return instructionCounter;
}
int Elaborate(int memory[100], int accumulator, int instructionCounter, int instructionRegister, int operationCode, int operand)
{
    int i;
    for (i = 1; i <= instructionCounter; i++)
    {
        instructionRegister = memory[i];
        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;
        switch (operationCode)
        {

        case READ:
        {
            printf("\?");
            scanf("%d", &memory[operand]);
        }
        break;

        case WRITE:
        {
            printf("%d", memory[operand]);
        }
        break;

        case LOAD:
        {
            accumulator = memory[operand];
        }
        break;

        case STORE:
        {
            memory[operand] = accumulator;
        }

        break;

        case ADD:
        {
            accumulator += memory[operand];
            if (accumulator > 9999 || accumulator < -9999)
            {
                printf("\nERRORE: Buffer Overflow");
                return 0;
            }
        }
        break;

        case SUBTRACT:
        {
            accumulator -= memory[operand];
            if (accumulator > 9999 || accumulator < -9999)
            {
                printf("\nERRORE: Buffer Overflow");
                return 0;
            }
        }

        break;

        case DIVIDE:
        {
            if (memory[operand] == 0)
            {
                printf("\nL'operazione di divisione non pu貌 essere eseguita\n"
                       "Non si pu貌 dividere per 0!\n"
                       "***Sympletron execution terminated***");
                return 0;
            }
            else
            {
                accumulator /= memory[operand];
                if (accumulator > 9999 || accumulator < -9999)
                {
                    printf("\nERRORE: Buffer Overflow");
                    return 0;
                }
            }
        }

        break;

        case MULTIPLY:
        {
            accumulator *= memory[operand];
            if (accumulator > 9999 || accumulator < -9999)
            {
                printf("\nERRORE: Buffer Overflow");
                return 0;
            }
        }
        break;

        case BRANCH:
        {
            i = operand - 1;
        }
        break;

        case BRANCHNEG:
        {
            if (accumulator < 0)
            {
                i = operand - 1;
            } //nell'operazione di salto 猫 importane decrementare di 1 la i per compensare il fatto//
        }     //che il ciclo for  aumenta automaticamente di 1 il contatore i//
        break;

        case BRANCHZERO:
        {
            if (accumulator == 0)
            {
                i = operand - 1;
            }
        }
        break;

        case HALT:
        {
            printf("\n***PROGRAM FINISHED***");
            return 0;
        }
        break;

        } //fine switch//

    } //fine ciclo for//
    return 0;
}

void cleanMemory(int memory[100])
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        memory[i] = 0000;
    }
}

void dump(int memory[])
{
    int i;
    printf("\n\nMEMORY DUMP:\n\n");
    for (i = 1; i <= 100; i++)
    {
        printf("%04d%c", memory[i], i % 10 == 0 ? '\n' : '\t');
    }
}