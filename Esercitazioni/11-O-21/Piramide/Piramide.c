#include<stdio.h>

int main(){

  int n, i, k;

  printf("Inserisci il numero di righe che la piramide deve avere: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++){

    for(k = 0; k < (n - i); k++){

      printf(" ");

    }

    for(k = 0; k < 2 * i - 1; k++){

      printf("*");

    }

    printf("\n");

  }

  return 0;

}
