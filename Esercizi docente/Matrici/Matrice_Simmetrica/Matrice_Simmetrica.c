#include<stdio.h>

#define L 4

int main(){

  int mat[L][L];

  int i, k, flag;

  flag = 1;

  printf("Inserisci la matrice %d X %d: \n", L, L);

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      scanf("%d", &mat[i][k]);

    }

  }

  for(i = 0; i < L && flag; i++){

    for(k = 0; k < L && flag; k++){

      if(mat[i][k] != mat[k][i]){

	flag = 0;

      }

    }

  }

  printf("Il flag associato a questa matrice è: %d. \n", flag);

  return 0;

}

  
