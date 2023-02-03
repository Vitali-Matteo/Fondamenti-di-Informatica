#include<stdio.h>

int main(){

  int n, F;

  printf("Inserisci un numero qualsiasi: ");
  scanf("%d", &n);

  while(n < 0){

    printf("Hai inserito %d che è un valore scorretto. Riprova: ", n);
    scanf("%d", &n);

  }

  F = 1;

  printf("Il fattoriale di %d è: ", n);
  

  while(n != 0){

    F = F * n;

    n = n - 1;

  }

  printf("%d.\n", F);

  return 0;

}
