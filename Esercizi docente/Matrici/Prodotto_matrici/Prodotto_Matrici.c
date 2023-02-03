#include<stdio.h>

#define L 4

int main(){

  int A[L][L], B[L][L], P[L][L];

  int i, k, j;

  int S;

  printf("Inserisci la prima matrice %d X %d: \n", L, L);

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      scanf("%d", &A[i][k]);

    }

  }

  printf("Inserisci la seconda matrice %d X %d: \n", L, L);

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      scanf("%d", &B[i][k]);

    }

  }

  for(i = 0; i < L; i++){

    S = 0;

    for(k = 0; k < L; k++){

      S = 0;

      for(j = 0; j < L; j++){

	S = S + A[i][j] * B[j][k];

      }

      P[i][k] = S;

    }

  }

  printf("La matrice prodotto tra A e B è: \n");

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      printf("%d ", P[i][k]);

    }

    printf("\n");

  }

  return 0;

}

      
