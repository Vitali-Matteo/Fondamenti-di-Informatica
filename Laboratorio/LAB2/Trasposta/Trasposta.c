#include<stdio.h>

#define N 4
#define M 5

int main(){

  int A[N][M];

  int At[M][N];

  int i, k;

  printf("Inserisci la matrice A di dimensioni %d X %d, riga per riga: \n", N, M);

  for(i = 0; i < N; i++){

    for(k = 0; k < M; k++){

      scanf("%d", &A[i][k]);

    }

  }

  for(i = 0; i < N; i++){

    for(k = 0; k < M; k++){

      At[k][i] = A[i][k];

    }

  }

  printf("Stampo la trasposta di dimensioni %d X %d: \n", M, N);

  for(i = 0; i < M; i++){

    for(k = 0; k < N; k++){

      printf("%d ", At[i][k]);

    }

    printf("\n");

  }

  return 0;

}
    
