#include<stdio.h>

#define N 5

int main(){

  int Mat[N][N];

  int i, k, j, h, d;

  int Max;

  int S;

  printf("Inserisci la matrice di dimensioni %d X %d, riga per riga: \n", N, N);

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &Mat[i][k]);

    }

  }

  Max = 0;

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      S = 0;

      for(j = 0; (j < N - k) && (Mat[i][k] == Mat[i][k + j]); j++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

      S = 0;

      for(h = 0; (h < N - i) && (Mat[i][k] == Mat[i + h][k]); h++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

      S = 0;

      for(d = 0; (d < N - i) && (d < N - k) && (Mat[i][k] == Mat[i + d][k + d]); d++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

      for(d = 0; (i - d > 0) && (d < N - k) && (Mat[i][k] == Mat[i - d][k + d]); d++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

    }

  }

  printf("La sequenza di lunghezza maggiore è lung: %d. \n", Max);

  return 0;

}
      
