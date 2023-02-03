#include<stdio.h>

#define Nr 3
#define Nc 3

void Riempi(int Mat[][Nc], int NR, int NC);

void Stampa(int Mat[][Nc], int NR, int NC);

void Dispari_cubi(int Mat[][Nc], int NR, int NC);

float Media_Mat(int Media[][Nc], int NR, int NC);

int main(){

  int Mat[Nr][Nc];

  float Media;

  printf("Inserisci la matrice di dimensioni %d X %d, riga per riga: \n", Nr, Nc);

  Riempi(Mat, Nr, Nc);

  printf("Stampo la matrice: \n");

  Stampa(Mat, Nr, Nc);

  printf("Sostituisco i dispari e stampo: \n");

  Dispari_cubi(Mat, Nr, Nc);

  printf("Stampo: \n");

  Stampa(Mat, Nr, Nc);

  Media = Media_Mat(Mat, Nr, Nc);

  printf("La media è: %f.\n", Media);

  return 0;

}

void Riempi(int Mat[][Nc], int NR, int NC){

  int i, k;

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      scanf("%d", &Mat[i][k]);

    }

  }

}

void Stampa(int Mat[][Nc], int NR, int NC){

  int i, k;

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      printf("\t%d", Mat[i][k]);

    }

    printf("\n");

  }

}

void Dispari_cubi(int Mat[][Nc], int NR, int NC){

  int i, k;

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      if(Mat[i][k] % 2 == 1){

	Mat[i][k] = Mat[i][k] * Mat[i][k] * Mat[i][k];

      }

    }

  }

}

float Media_Mat(int Mat[][Nc], int NR, int NC){

  int i, k;

  int S;

  float Media;

  S = 0;

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      S = S + Mat[i][k];

    }

  }

  Media = (float) S / (NR * NC);

  return Media;

}

  

  


