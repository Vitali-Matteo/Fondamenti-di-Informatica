#include<stdio.h>
#include<math.h>

#define N 100

typedef struct{

  float x;

  float y;

}Punto_t;

float Distanza(Punto_t A, Punto_t B){

  return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));

}

float Perimetro(Punto_t Punti[], int N){

  int i;

  float D;

  D = 0;

  for(i = 0; i < N; i++){

    D = D + Distanza(Punti[i], Punti[(i + 1) % N]);

  }

  return D;

}

int main(){

  Punto_t Punti[N];

  int i;

  float Perim;

  int Np;

  do{

    printf("Inserisci il numero totale di punti: ");
    scanf("%d", &Np);

  }while((Np < 0) || (Np > N));

  for(i = 0; i < Np; i++){

    printf("Inserisci la coordinata x del punto numero %d: ", i + 1);
    scanf("%f", &Punti[i].x);

    printf("Inserisci la coordinata y del punto numero %d: ", i + 1);
    scanf("%f", &Punti[i].y);

  }

  Perim = Perimetro(Punti, Np);

  printf("Il perimetro del poligono è: %f. \n", Perimetro);

  return 0;

}
