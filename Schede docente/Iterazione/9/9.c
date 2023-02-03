#include<stdio.h>

int main(){

  int n, nb, r, M, i, e, P;

  printf("Inserisci un numero positivo: ");
  scanf("%d", &n);

  while(n < 0){

    printf("Il numero %d inserito non è corretto. Reinserisci: ", n);
    scanf("%d", &n);

  }

  M = n;

  i = 0;

  while(n > 0){ 

    r = n % 2;

    P = 1;

    for(e = 0; e < i; e++){

      P = P * 10;

    }

    nb = P * r + nb;

    i = i + 1;

    n = n / 2;

  }

  printf("Il numero %d in binario è: %d. \n", M, nb);

  return 0;

}
