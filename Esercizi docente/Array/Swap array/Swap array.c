#include<stdio.h>

#define L 5

int main(){

  int array[L];

  int i;

  int temp;

  for(i = 0; i < L; i++){

    printf("Inserisci l'elemento di posizione %d dell'array: ", i);
    scanf("%d", &array[i]);

  }

  printf("Stampo l'array così come lo hai inserito. \n");

  for(i = 0; i < L; i++){

    printf("L'elemento in posizione %d dell'array è: %d. \n", i, array[i]);

  }

  printf("Faccio lo swap dell'array... \n");

  for(i = 0; i < L / 2; i++){

    temp = array[i];

    array[i] = array[L - 1 -i];

    array[L - i -1] = temp;

  }

  printf("Stampo l'array invertito. \n");

  for(i = 0; i < L; i++){

    printf("L'elemento in posizione %d dell'array è: %d.\n", i, array[i]);

  }

  return 0;

}
