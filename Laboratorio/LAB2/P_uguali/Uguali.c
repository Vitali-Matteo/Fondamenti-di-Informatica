#include<stdio.h>

#define N 4

int main(){

  int A[N][N], B[N][N];

  int i, k;

  printf("Inserisci la matrice A di dimensioni %d X %d, riga per riga: \n", N, N);

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &A[i][k]);

    }

  }

  printf("Inserisci la matrice B di dimensioni %d X %d, riga per riga: \n", N, N);

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &B[i][k]);

    }

  }

  printf("Le coordinate dei punti in cui i valori nelle due matrici sono uguali sono: \n");

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      if(A[i][k] == B[i][k]){

	printf("(%d , %d) \n", i, k);

      }

    }

  }

  return 0;

}

  
