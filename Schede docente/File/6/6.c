#include<stdio.h>

int main(){

  FILE* File;

  int Ni;

  int i;

  int n;

  File = fopen("ciao.bin", "wb");

  if(File){

    do{

      printf("Inserisci il numero di elementi che vuoi mettere nel file: ");
      scanf("%d", &Ni);

    }while(Ni < 0);

    for(i = 0; i < Ni; i++){

      printf("Inserisci il valore %d: ", i + 1);
      scanf("%d", &n);

      fwrite(&n, sizeof(int), 1, File);

    }

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}
