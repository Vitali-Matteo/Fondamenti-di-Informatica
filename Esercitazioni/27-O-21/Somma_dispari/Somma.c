#include<stdio.h>

int Somma(int a, int b);

int main(){

  int a, b;

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &b);

  printf("La somma di tutti i numeri dispari tra %d e %d è: %d. \n", (a < b) * a + (b < a) * b, (a > b) * a + (b > a) * b, Somma(a, b));

  return 0;

}

int Somma(int a, int b){

  int A, B;

  int i;

  int S;

  S = 0;

  A = (a >= b) * a + (b > a) * b;

  B = (a >= b) * b + (b > a) * a;

  for(i = B; i <= A; i++){

    if(i % 2 == 1){

      S = S + i;

    }

  }

  return S;

}
