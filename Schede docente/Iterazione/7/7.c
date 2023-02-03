#include<stdio.h>

int main(){

  int n, M, nc, r;

  printf("Inserisci un numero positivo: ");
  scanf("%d", &n);

  nc = 0;

  M = n;

  while(n > 0){

    r = n % 10;

    n = n / 10;

    nc = 10 * nc + r;

  }

  printf("Il numero %d al contrario è: %d. \n", M, nc);

  return 0;

}
