#include<stdio.h>

int main(){

  FILE* File;

  int n;

  File = fopen("Input.bin", "rb");

  if(File){

    while(fread(&n, sizeof(int), 1, File) > 0){

      printf("Elemento del file: %d. \n", n);

    }

  }
  else{

    printf("Errore nell'apertura del file. \n");

  }

  return 0;

}

      
