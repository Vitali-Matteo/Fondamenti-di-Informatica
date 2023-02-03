#include<stdio.h>

#define N 4

int main(){

  float Mat[N][N];

  int i, k;

  printf("Inserisci la matrice riga per riga: \n");

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      scanf("%f", &Mat[i][k]);

    }

  }

  printf("Stampo la diagonale principale: \n");

  for(i = 0; i < N; i++){

    printf("%f \n", Mat[i][i]);

  }

  return 0;

}

