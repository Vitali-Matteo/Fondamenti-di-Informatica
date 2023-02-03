#include<stdio.h>

#define N 50

int main(){

  int n, i, Max;

  printf("Inserisci il valore numero 1: ");
  scanf("%d", &n);

  Max = n;

  for(i = 1; i < N; i++){

    printf("Inserisci il valore numero %d: ", i + 1);
    scanf("%d", &n);

    if(n > Max){

      Max = n;

    }

  }

  printf("Dei 50 valori inseriti, il massimo è: %d. \n", Max);

  return 0;

}
  
