#include<stdio.h>

int main(){

  int n;

  int i, c, k;

  printf("Inserisci l'altezza della piramide: ");
  scanf("%d", &n);

  i = 1;

  while(i <= n){

    c = 0;

    while(c < (2 * n - 1 - (2 * i - 1)) / 2){

      printf(" ");

      c = c + 1;

    }

    k = 0;

    while(k < 2 * i - 1){

      printf("*");

      k = k + 1;

    }

    printf("\n");

    i = i + 1;

  }

  return 0;

}

  

    
