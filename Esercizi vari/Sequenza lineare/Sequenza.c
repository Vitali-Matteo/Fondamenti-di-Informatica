#include<stdio.h>

#define N 5

int Mat[N][N];

int Sequenza(int len);

int main(){

  int len;

  int i, k;

  printf("Inserisci la matrice di dimensioni %d X %d, riga per riga: \n", N, N);

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &Mat[i][k]);

    }

  }

  do{

    printf("Inserisci un numero positivo che rappresenta la lunghezza: ");
    scanf("%d", &len);

  }while(len <= 0);

  if(Sequenza(len) == 1){

    printf("OK. \n");

  }
  else{

    printf("Sequenza non preente. \n");

  }

  return 0;

}

int Sequenza(int len){

  int i, k, j, h, d;

  int S;

  int Max;

  Max = 0;

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      S = 0;

      for(j = 0; (j < N - k - 1) && (Mat[i][k] - Mat[i][k + j] == Mat[i][k + j] -Mat[i][k + j + 1]); j++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

      S = 0;

      for(h = 0; (h < N - i - 1) && (Mat[i][k] - Mat[i + j][k] == Mat[i + j][k] - Mat[i + j + 1][k]); h++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

      S = 0;

      for(d = 0; (d < N - i - 1) && (d < N - k - 1) && (Mat[i][k] - Mat[i + d][k + d] == Mat[i + d][k + d] - Mat[i + d + 1][k + d + 1]); d++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

      S = 0;

      for(d = 0; (d > N - i -1) && (k - d - 1 > 0) && (Mat[i][k] - Mat[i][k - d] == Mat[i][k - d] - Mat[i][k - d - 1]); d++){

	S = S + 1;

      }

      if(S > Max){

	Max = S;

      }

    }

  }

  if(Max > len){

    return 1;

  }
  else{

    return 0;

  }

}
	    
