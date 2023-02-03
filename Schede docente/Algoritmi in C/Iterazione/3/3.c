#include<stdio.h>

int main(){

  int n, N;
  int F;

  F = 1;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &n);

  N = n;  

  while(n > 0){

    F = F * n;

    n--;

  }

  printf("Il fattoriale di %d è: %d. \n", N, F);

  return 0;

}
