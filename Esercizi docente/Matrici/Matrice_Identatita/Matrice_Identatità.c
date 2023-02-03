#include<stdio.h>

#define L 4

int main(){

  int mat[L][L];

  int i, k, flag;

  printf("Inserisci la matrice %d X %d che devo controllare: \n", L, L);

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      scanf("%d", &mat[i][k]);

    }

  }

  flag = 1;

  for(i = 0; i < L && flag; i++){

    for(k = 0; k < L && flag; k++){

      if((i == k) && (mat[i][k] != 1)){

	flag = 0;

      }

      if((i != k) && (mat[i][k] != 0)){

	flag = 0;

      }

    }

  }

  printf("Il flag associato a questa matrice è: %d. \n", flag);

  return 0;

}
