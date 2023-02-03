#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 4
#define MAX_INCR 10

void Genera(int Mat[][N], int Nr);

void Stampa(int Mat[][N], int Nr);

void Trasforma(int Mat[][N], int Nr);

int main(){

  int Mat[N][N];

  printf("Genero la matrice... \n");

  srand(time(NULL));

  Genera(Mat, N);

  printf("Stampo la matrice... \n");

  Stampa(Mat, N);

  printf("Trasformo la matrice... \n");

  Trasforma(Mat, N);

  printf("Stampo la matrice... \n");

  Stampa(Mat, N);

  return 0;

}

void Genera(int Mat[][N], int Nr){

  int i, k;

  int Inc;

  int Prec;

  Prec = 0;

  for(i = 0; i < Nr; i++){

    for(k = 0; k < Nr; k++){

      Inc = rand() % MAX_INCR + 1; /*Vanno da 1 a RAND_MAX che è il masiimo numero generabile*/

      Mat[i][k] = Prec + Inc;

      Prec = Mat[i][k];

    }

  }

}

void Stampa(int Mat[][N], int Nr){

  int i, k;

  for(i = 0; i < Nr; i++){

    for(k = 0; k < Nr; k++){

      printf("\t%d", Mat[i][k]);

    }

    printf("\n");

  }

}

void Trasforma(int Mat[][N], int Nr){

  int i, k;

  for(i = 0; i < Nr; i++){

    for(k = 0; k < i; k++){

      Mat[k][i] = Mat[k][i] + Mat[i][k];

      Mat[i][k] = 0;

    }

  }

}

  
				      

      
