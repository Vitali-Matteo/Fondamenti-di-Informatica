#include<stdio.h>

#define L 5

int main(){

  int v[L], I[L];

  int i;

  for(i = 0; i < L; i++){

    printf("Inserisci elemento %d: ", i + 1);
    scanf("%d", &v[i]);

  }

  printf("Copio, inverto e stampo...\n");

  for(i = 0; i < L; i++){

    I[L - 1 - i] = v[i];

  }

  for(i = 0; i < L; i++){

    printf("Elemento %d del vettore: %d. \n", i + 1, I[i]);

  }

  return 0;

}
