#include "indice.h"

void inserisci(indice* I, stringa n, int p){
     indice temp;
     if((*I)==NULL || (*I)->nome >n){
                   temp=malloc(sizeof(elist));
                   strcpy(temp->nome,n);
                   temp->pag=p;
                   temp->next= (*I);
                   (*I)=temp;
                   }
                   
                   else inserisci((*I)->next , n, p);
}

int cerca_supp(indice I, stringa n, int p){
    if(!strcmp(I->nome, n)) return 1;
    else return cerca(I->next, n, p);
    return 0;
}

int cerca(indice* I, stringa n, int p){
    if(cerca_supp(I,n,p)) return 1;
    else{ inserisci(*I,n,p);
          return 0;
          }
}

FILE* rec_crea_file(char c,indice I){
      //FILE* temp = fopen("parole.txt","w");
      if(I->nome[0]==c) //scrivi su file
      rec_crea_file(c,I->next);           
}
