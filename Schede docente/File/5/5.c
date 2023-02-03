#include<stdio.h>

int main(){

  int n;

  fprintf(stdout, "%s",  "Inserisci un numero intero: ");

  fscanf(stdin, "%d", &n);

  fprintf(stdout, "Hai inserito in STDIN il numero: %d. \n", n);

  return 0;

}

  
