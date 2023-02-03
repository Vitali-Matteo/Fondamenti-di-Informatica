#include<stdio.h>

#define N 8

int Kminimo(int A[], int K, int La);

int main(){

  int A[N];

  int K;

  int i;

  int Irf;

  printf("Inserisci il valore di K: ");
  scanf("%d", &K);

  printf("Inserisci i %d elementi dell'array: ", N);

  for(i = 0; i < N; i++){

    scanf("%d", &A[i]);

  }

  Irf = Kminimo(A, K, N);

  printf("Il valore cercato è: %d. \n", Irf);

  return 0;

}

int Kminimo(int A[], int K, int La){

  int i, k;

  int Indice;

  Indice = -1;

  for(i = K; i < La - K && Indice == -1; i++){

    Indice = i;

    for(k = i - K; k < i + K + 1; k++){

      if((A[k] <=A[i]) && (k != i)){

	Indice = -1;

      }

    }

  }

  return Indice;

}
