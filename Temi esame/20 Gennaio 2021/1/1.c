#include<stdio.h>

#define N 10

void LavoraArr(int arr[], int La, int* Trovato, int* Max, int* qMax);

int main(){

  int arr[N];

  int i;

  int Trovato;

  int Max, qMax;

  printf("Inserisci gli %d elemente dell'array: \n", N);

  for(i = 0; i < N; i++){

    scanf("%d", &arr[i]);

  }

  LavoraArr(arr, N, &Trovato, &Max, &qMax);

  printf("Trovato: %d. Massimo: %d. Quasi massimo: %d. \n", Trovato, Max, qMax);

  return 0;

}


void LavoraArr(int arr[], int La, int* Trovato, int* Max, int* qMax){

  int i, k;

  *Trovato = 0;

  for(i = 0; i < La; i++){

    for(k = i + 1; k < La; k++){

      if(arr[i] + arr[k] == 17){

	*Trovato = 1;

      }

    }

  }

  *Max = arr[0];

  for(i = 0; i < La; i++){

    if(arr[i] > *Max){

      *Max = arr[i];

    }

  }

  *qMax = 0;

  for(i = 0; i < La; i++){

    if((arr[i] > *qMax) && (arr[i] < *Max)){

      *qMax = arr[i];

    }

  }

}
