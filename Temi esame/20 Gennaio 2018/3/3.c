#include<stdio.h>

int main(){

  FILE *File;

  int n;

  int i;

  int Ndiv;

  File = fopen("Risultati.txt", "w");

  if(File){

    printf("Inserisci la sequenza di valori: \n");

    scanf("%d", &n);

    while(n > 0){

      Ndiv = 0;

      i = 2;

      while(i <= n / 2){

	if(n % i == 0){

	  Ndiv++;

	}

	i++;

      }

      fprintf(File, "%d -> %d \n", n, Ndiv);

      scanf("%d", &n);

    }

  }
  else{

    printf("Errore nella creazione del file. \n");

  }

  return 0;

}
