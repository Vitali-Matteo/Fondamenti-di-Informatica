#include<stdio.h>

#define L 5

int main(){

  int mat[L][L], matr[L][L];

  int i, k;

  printf("Inserisci la matrice %d X %d riga per riga: \n", L, L);

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      scanf("%d", &mat[i][k]);

    }

  }

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      matr[L - 1 - k][i] = mat[i][k];

    }

  }

  printf("Stampo la matrice ruotata di 90° in senso antiorario: \n");

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      printf("%d ", matr[i][k]);

    }

    printf("\n");

  }

  return 0;

}
