#include<stdio.h>

#define N 5
#define M 5

int main(){

  int Mat[M + 2][N + 2];

  int i,k;

  float Max;

  int IMX, IMY;

  int S;

  printf("Inserisci la matrice di dimensione %d X %d, riga per riga: \n", M, N);

  for(i = 1; i < M + 1; i++){

    for(k = 1; k < N + 1; k++){

      scanf("%d", &Mat[i][k]);

      if(i == 1){

	Mat[M + 1][k] = Mat[i][k];

      }
      else{

	if(i == M){

	  Mat[0][k] = Mat[i][k];

	}

      }

      if(k == 1){

	Mat[i][N + 1] = Mat[i][k];

      }
      else{

	if(k == N){

	  Mat[i][0] = Mat[i][k];

	}

      }
      
    }

  }

  for(i = 0; i < M + 2; i++){

    for(k = 0; k < N + 2; k++){

      printf("%d ", Mat[i][k]);

    }

    printf("\n");

  }

  Max = 0;

  for(i = 1; i < M + 1; i++){

    for(k = 1; k < N + 1; k++){

      S = Mat[i + 1][k] + Mat[i][k + 1] + Mat[i - 1][k] + Mat[i][k - 1];

      if(S / 4.0f > Max){

	Max = S / 4.0f;

	IMX = i - 1;

	IMY = k - 1;

      }

    }

  }

  printf("La cella con la media più alta attorno a lei è: %d X %d.\n", IMX, IMY);

  return 0;

}
      

       

	  

  

  
