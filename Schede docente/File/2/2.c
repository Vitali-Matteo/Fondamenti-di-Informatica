#include<stdio.h>

int main(){

  FILE* File;

  char c;

  File = fopen("Ciao.txt", "r");

  if(File){

    while(fscanf(File, "%c", &c) > 0){ /*Oppure fscanf(File, " %c", &c); che svuota il buffer*/

      printf("Carattere letto: %c. \n", c);

      fscanf(File, "%*c");

    }

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}

      
