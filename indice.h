#include <stdio.h>
#include <string.h>
#ifndef indice_h
#define indice_h

typedef char stringa[20];
/*esercizio #1 10%*/
typedef struct elem{
        stringa nome;
        int pag;
        struct elem* next;
        }elist;
        
typedef elist* indice;

/*esercizio #2 35%*/
void inserisci(indice*,stringa,int);
/*esercizio #3 30%*/
int cerca_supp(indice,stringa,int);
int cerca(indice*,stringa,int);
/*esercizio #4 25%*/
FILE* rec_crea_file(char,indice);


#endif
