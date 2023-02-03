#include<stdio.h>

#define N 5
#define M 4

int main(){

  int Mat[M][N];

  int i, k;

  int S;

  printf("Inserisci la matrice riga per riga %d X %d: \n", M, N);

  for(i = 0; i < M; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &Mat[i][k]);

    }

  }

  for(i = 0; i < M; i++){

    for(k = 0; k < N; k++){

      printf("%d  ", Mat[i][k]);

    }

    printf("\n");

  }

  S = 0;

  for(i = 0; i < M - 1; i++){

    for(k = 0; k < N - 1; k++){

      if(Mat[i][k] + Mat[i + 1][k + 1] == Mat[i + 1][k] + Mat[i][k+ 1]){

	S++;

      }

    }

  }

  printf("Il numero di clauque della matrice è: %d.\n", S);

  return 0;

}
