#include<stdio.h>

int main(){

  int n;
  int F;

  F = 1;

  printf("Inserisci il valore di n di cui calcolare il fattoriale: ");
  scanf("%d", &n);

  while(n > 0){

    F = F * n;

    n = n - 1;

  }

  printf("Il fattoriale è: %d. \n", F);

  return 0;

}
