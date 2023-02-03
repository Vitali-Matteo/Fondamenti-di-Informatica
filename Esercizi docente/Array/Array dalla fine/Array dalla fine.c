#include<stdio.h>

#define L 20

int main(){

  int array[L];

  int n;

  int i;

  for(i = 0; i < L; i++){

    printf("Inserisci il valore da mettere nella cella %d dell'array: ", i);
    scanf("%d", &array[i]);

  }

  printf("Stampo l'array nell'ordine in cui hai inserito gli elementi. \n");

  for(i = 0; i < L; i++){

    printf("Elemento %d dell'array: %d. \n", i, array[i]);

  }

  printf("Stampo l'array in ordine inverso. \n");

  for(i = L - 1; i >= 0; i--){

    printf("L'elemento %d nell'array è: %d. \n", i, array[i]);

  }

  return 0;

}
