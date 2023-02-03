#include<stdio.h>

#define L 5

int main(){

  int Mat[L][L];

  int i, j;

  int temp;

  printf("Inserisci la matrice riga per riga: \n");

  for(i = 0; i < L; i++){

    for(j = 0; j < L; j++){

      scanf("%d", &Mat[i][j]);

    }

  }

  for(i = 0; i < L / 2; i++){

    for(j = i; j < L - i - 1; j++){

      temp = Mat[i][j];
      Mat[i][j] = Mat[L - 1 - j][i];
      Mat[L - 1 - j][i] = Mat[L - 1 - i][L - 1 - j];
      Mat[L - 1 - i][L - 1 - j] = Mat[j][L - 1 - i];
      Mat[j][L - 1 - i] = temp;;

    }

  }

  printf("\n");

  for(i = 0; i < L; i++){

    for(j = 0; j < L; j++){

      printf("%d ", Mat[i][j]);

    }

    printf("\n");

  }

  return 0;

}
