#include<stdio.h>

#define N 10

float Media_Arr(int v[], int Pi, int Pf);

int main(){

  int v[N];

  int i;

  float Mpm, Msm;

  printf("Inserisci l'array di lunghezza %d: ", N);

  for(i = 0; i < N; i++){

    scanf("%d", &v[i]);

  }

  Mpm = Media_Arr(v, 0, N / 2);

  Msm = Media_Arr(v, N / 2 + 1, N);

  if(Mpm > Msm){

    printf("Prima metà migliore... \n");

  }
  else{

    printf("Seconda metà migliore... \n");

  }

  return 0;

}

float Media_Arr(int v[], int Pi, int Pf){

  int S;

  int i;

  S = 0;

  for(i = Pi; i < Pf; i++){

    S = S + v[i];

  }

  return (float) S / (Pf - Pi);

}
