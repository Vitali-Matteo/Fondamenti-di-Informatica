#include<stdio.h>

#define Ln 30

int main(){

  FILE* File;

  char Nome[Ln + 1];

  int Ni;

  int i;

  int n;

  printf("Inserisci la stringa nome del file: ");
  scanf("%s", Nome);

  File = fopen(Nome, "w");

  if(File){

    do{

      printf("Inserisci il numero di inserimenti che vuoi fare: ");
      scanf("%d", &Ni);

    }while(Ni < 0);

    for(i = 0; i < Ni; i++){

      printf("Inseerisci il valore n. %d: ", i + 1);
      scanf("%d", &n);

      fprintf(File, "%d \n", n);

    }

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}
