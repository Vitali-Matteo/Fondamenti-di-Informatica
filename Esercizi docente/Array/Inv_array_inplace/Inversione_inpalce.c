#include<stdio.h>

#define L 5

int main(){

  int v[L];

  int i, temp;

  for(i = 0; i < L; i++){

    printf("Inserisci l'elemento di posizione %d: ", i + 1);
    scanf("%d", &v[i]);

  }

  printf("Faccio  e stampo l'inversione... \n");

  for(i = 0; i < L / 2; i++){

    temp = v[L - i - 1];

    v[L - 1 - i] = v[i];

    v[i] = temp;

  }

  for(i = 0; i < L; i++){

    printf("Elemento %d del vettore è: %d. \n", i + 1, v[i]);

  }

  return 0;

}

    
