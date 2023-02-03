#include<stdio.h>

#define DIM 5

void Stampa(int n);

int main(){

  int i;

  int Q[DIM];

  for(i = 0; i < DIM; i++){

    do{

      printf("Inserisci il numero intero che rappresenta il lato: ");
      scanf("%d", &Q[i]);

    }while(Q[i] < 0);

  }

  printf("Stampo i vari quadrati: \n");

  for(i = 0; i < DIM; i++){

    printf("Valore %d: %d. \n", i + 1, Q[i]);

    Stampa(Q[i]);

    printf("\n\n");

  }

  return 0;

}

void Stampa(int n){

  int i, k;

  for(i = 0; i < n; i++){

    for(k = 0; k < n; k++){

      printf("* ");

    }

    printf("\n");

  }

}
