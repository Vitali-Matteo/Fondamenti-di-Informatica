#include<stdio.h>

#define L 10

int main(){

  int v[L];

  int c[L];

  int i;

  int temp;

  for(i = 0; i < L; i++){

    printf("Inserisci l'elemento %d della'array: ", i + 1);
    scanf("%d", &v[i]);

  }

  printf("Copio l'array.\n");

  for(i = 0; i < L / 2; i++){

    temp = v[i];

    v[i] = v[L - i - 1];

    v[L - i - 1] = temp;

  }

  printf("Stampo il vettore. \n");

  for(i = 0; i < L; i++){

    printf("L'elemento alla posizione %d del vettore è: %d. \n", i + 1, v[i]);

  }

  return 0;

}
