#include<stdio.h>

#define N 20

int main(){

  int v[N];

  int Sing[N];

  int i, k;

  int dim;

  int trovato;

  for(i = 0; i < N; i++){

    printf("Inserisci elemento %d del vettore: ", i + 1);
    scanf("%d", &v[i]);

  }

  dim = 0;

  for(i = 0; i < N; i++){

    trovato = 0;

    for(k = i + 1; k < N; k++){

      if(v[i] == v[k]){

	trovato = 1;

	dim++;

      }

    }

  }

  printf("Stampo il vettore senza duplicati: \n");

  for(i = 0; i < dim; i++){

    printf("%d ", Sing[i]);

  }

  printf("La lunghezza del vettore senza duplicati è: %d.\n ", dim);

  return 0;

}

      

  
