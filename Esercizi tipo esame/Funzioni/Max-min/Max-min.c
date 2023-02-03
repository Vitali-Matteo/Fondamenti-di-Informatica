#include<stdio.h>

#define N 100

void Maxmin(int v[], int La, int* Max, int* min);

int main(){

  int v[N];

  int La;

  int Max, min;

  int i;

  do{

    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &La);

  }while((La < 0) || (La > N));

  printf("Inserisci gli elementi dell'array: \n");

  for(i = 0; i < La; i++){

    scanf("%d", &v[i]);

  }

  Maxmin(v, La, &Max, &min);

  printf("La somma massima contigua è: %d. \n", Max);

  printf("La somma minima contigua è: %d. \n", min);

  return 0;

}

void Maxmin(int v[], int La, int* Max, int* min){

  int i, k;

  int S;

  S = 0;

  for(k = 0; k < 7; k++){

    S = S + v[k];

  }

  *Max = S;

  *min = S;

  for(i = 0; i <= La - 7; i++){

    S = 0;

    for(k = i; k < i + 7; k++){

      S = S + v[k];

    }

    if(S > *Max){

      *Max = S;

    }

    if(S < *min){

      *min = S;

    }

  }

}
