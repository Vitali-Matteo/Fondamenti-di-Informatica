#include<stdio.h>

#define M 10
#define N 10

#define P 10
#define Q 10

int main(){

  int A[M][N], B[P][Q], Prodotto[M * P][N * Q];

  int i, k, h, j;

  printf("Inerisci la prima matrice riga per riga di dimensioni %d X %d: \n", M, N);

  for(i = 0; i < M; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &A[i][k]);

    }

  }

  printf("Inserisci la seconda matrice riga per riga di dimensioni %d X %d: \n", P, Q);

  for(i = 0; i < M; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &B[i][k]);

    }

  }

  printf("La matrice prodoto di Kronecker ha dimensioni %d X %d. \n", M * P, N * Q);

  for(i = 0; i < M; i++){

    for(k = 0; k < N; k++){

      for(h = 0; h < P; h++){

	for(j = 0; j < Q; j++){

	  Prodotto[N * i + h][M * k + j] = A[i][k] * B[h][j];

	}

      }

    }

  }

  printf("La matrice prodotto è riga per riga: \n");

  for(i = 0; i < M * P; i++){

    for(k = 0; k < N * Q; k++){

      printf("%d  ", Prodotto[i][k]);

    }

    printf("\n");

  }

  return 0;

}
