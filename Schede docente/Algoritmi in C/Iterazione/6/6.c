#include<stdio.h>

#define N 50

int main(){

  int n, i, M;

  printf("Inserisci il numero 1: ");
  scanf("%d", &n);

  M = n;

  for(i = 1; i < N; i++){

    printf("Inserisci il numero %d: ", i);
    scanf("%d", &n);

    if(n > M){

      M = n;

    }

  }

  printf("Il massimo tra i %d numeri inseriti è: %d. \n", N, M);

  return 0;

}
