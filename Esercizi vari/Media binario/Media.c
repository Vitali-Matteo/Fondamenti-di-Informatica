#include<stdio.h>
#include<string.h>


#define N 2
#define M 5


int Mat[N][N];

char Binario[M + 1];


int Uguali(int nd);

int Converti();


int main(){

  int i, k;

  printf("Inserisci il numero binario in forma di stringa: ");
  scanf(" %[^\n]", Binario);

  printf("Inserisci la matrice di dimensione %d X %d, riga per riga: \n", N, N);

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      scanf("%d", &Mat[i][k]);

    }

  }

  if(Uguali(Converti()) == 1){

    printf("Va bene!\n");

  }
  else{

    printf("Non va bene!\n");

    }

  return 0;

}

int Uguali(int nd){

  int S;

  float Media;

  int i, k;

  S = 0;

  for(i = 0; i < N; i++){

    for(k = 0; k < N; k++){

      S = S + Mat[i][k];

    }

  }

  Media = (float) S / (N * N);

  if(Media == (float) nd){

    return 1;

  }
  else{

    return 0;

  }

}

int Converti(){

  int S;

  int i;

  int len;

  S = 0;

  len = strlen(Binario);

  for(i = 0; i <= len; i++){

    S = 2 * S + Binario[len - i];

  }

  return S;

}
