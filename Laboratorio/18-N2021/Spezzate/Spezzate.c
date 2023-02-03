#include<stdio.h>
#include<math.h>

typedef struct{

  float x;

  float y;

}Punto;

#define N 5

float D(Punto A, Punto B);

int Regolare(Punto G[][N], int Nr, int Nc);

void Load(Punto* G, int Nr, int Nc);

int main(){

  Punto G[N][N];

  int Reg;

  printf("Inserisci la griglia di punti di dimensione %d X %d: \n", N, N);

  Load(&G[0][0], N, N);

  Reg = Regolare(G, N, N);

  printf("Il risultato della funzione è: %d. \n", Reg);

  return 0;

}

float D(Punto A, Punto B){

  return sqrt(pow(A.x - B.x, 2.0f) + pow(A.y - B.y, 2.0f));

}

void Load(Punto* G, int Nr, int Nc){

  int i, j;

  for(i = 0; i < Nr; i++){

    for(j = 0; j < Nc; j++){

      printf("Ascissa del punto (%d , %d): ", i + 1, j + 1);
      scanf("%f", &(G + i + j) -> x);

      printf("Ordinata del punto (%d , %d): ", i + 1, j + 1);
      scanf("%f", &(G + i + j) -> y);

    }

  }

}

int Regolare(Punto G[][N], int Nr, int Nc){

  int i, k;

  float Ddp;

  float Dr, Dc;

  int Regolare;

  Ddp = 0.0f;

  for(i = 0; i < Nr - 1; i++){

    Ddp = Ddp + D(G[i][i], G[i + 1][i + 1]);

  }

  Regolare = 1;

  Dr = 0;

  for(i = 0; i < Nr - 1; i++){

    Dc = 0;

    for(j = 0; j < Nc - 1; j++){

      Dc = Dc + D(G[i][j], G[i][j + 1]);

    }

    Dr = Dr + D(G[i]

      
