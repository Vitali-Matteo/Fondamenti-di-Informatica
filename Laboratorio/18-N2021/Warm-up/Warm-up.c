#include<stdio.h>

#define N 10

int main(){

  int v[N];

  int X;

  int i;

  int P, S;

  printf("Inserisci %d numeri: \n", N);

  for(i = 0; i < N; i++){

    scanf("%d", &v[i]);

  }

  do{

    printf("Inserisci un numero tra 0 e %d: ", N);
    scanf("%d", &X);

  }while((X < 0) || (X > N));

  P = 1;

  S = 0;

  for(i = 0; i < X; i++){

    S = S + v[i];

  }

  for(i = X; i < N; i++){

    P = P * v[i];

  }

  printf("Somma: %d. Prodotto: %d.\n", S, P);

  return 0;

}
