#include<stdio.h>

#define N 1000

#define Ln 30

int main(){

  FILE* File;

  char Nome[Ln + 1];

  int v[N];

  int i;

  int n;

  int Nl;

  printf("Inserisci il nome del file: ");
  scanf("%s", Nome);

  File = fopen(Nome, "r");

  if(File){

    i = 0;

    Nl = 0;

    while(fscanf(File, "%d", &n) > 0){

      v[i] = n;

      i++;

      Nl++;

    }

    if(feof(File)){

      printf("Stampo il contenuto del file: \n");

      for(i = 0; i < Nl; i++){

	printf("Elemento %d del file: %d. \n", i + 1, v[i]);

      }

    }
    else{

      printf("Array troppo piccolo per contenere tutti i valori. \n");

    }

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}

      
