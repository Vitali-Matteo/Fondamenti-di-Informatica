#include<stdio.h>

#define N 10

void Somme_prefisse(int A[], int Ne, int B[]);

int main(){

  int A[N];

  int B[N];

  int i;

  for(i = 0; i < N; i++){

    printf("Inserisci l'elemento %d dell'array: ", i + 1);
    scanf("%d", &A[i]);

  }

  Somme_prefisse(A, N, B);

  printf("Stampo il vettore delle somme prefisse: \n");

  for(i = 0; i < N; i++){

    printf("\t%d", B[i]);

  }

  return 0;

}

void Somme_prefisse(int A[], int Ne, int B[]){

  int i, k;

  int S;

  for(i = 0; i < Ne; i++){

    S = 0;

    for(k = 0; k <= i; k++){

      S = S + A[k];

    }

    B[i] = S;

  }

}
