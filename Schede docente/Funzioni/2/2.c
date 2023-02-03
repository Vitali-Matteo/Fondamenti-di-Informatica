#include<stdio.h>

void Max(int a, int b, int* max);

int main(){

  int a, b, c;

  int max;

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &b);

  printf("Inserisci il terzo numero: ");
  scanf("%d", &c);

  Max(a, b, &max);

  Max(c, max, &max);

  printf("Il massimo numero tra %d, %d e %d è: %d. \n", a, b, c, max);

  return 0;

}

void Max(int a, int b, int* max){

  if(a > b){

    *max = a;

  }
  else{

    *max = b;

  }

}
