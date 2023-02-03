#include<stdio.h>

int main(){

  FILE* File;

  int i;

  File = fopen("Ciao.txt", "w");

  if(File){

    for(i = 0; i < 10; i++){

      fprintf(File, "%c \n", (char) i + '0');

    }

    fclose(File);

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}
      
