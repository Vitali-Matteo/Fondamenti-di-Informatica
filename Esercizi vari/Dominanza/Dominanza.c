#include<stdio.h>

#define NR 5
#define NC 5

int Domina(int A[][NC], int B[][NC], int Nr, int Nc);

int main(){

  int i, k;

  int A[NR][NC];

  int B[NR][NC];

  int Dom;

  printf("Inserisci la prima matrice del tipo %d X %d: \n", NR, NC);

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      scanf("%d", &A[i][k]);

    }

  }

  printf("Inserisci la seconda matrice del tipo %d X %d: \n", NR, NC);

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      scanf("%d", &B[i][k]);

    }

  }

  Dom = Domina(A, B, NR, NC);

  printf("Il risultato è: %d. \n", Dom);

  return 0;

}

int Domina(int A[][NC], int B[][NC], int Nr, int Nc){

  int i, k;

  int Dom;

  int NeA, NeB;

  NeA = 0;

  NeB = 0;

  Dom = 0;

  for(i = 0; i < Nr && !Dom; i++){

    for(k = 0; k < Nc && !Dom; k++){

      if(A[i][k] > B[i][k]){

	NeA++;

      }
      else{

	if(A[i][k] < B[i][k]){

	  NeB++;

	}
	else{

	  Dom = 1;

	}

      }

    }

  }

  if(Dom != 0){

    if(NeA > NeB){

      return 1;

    }
    else{

      return -1;

    }

  }
  else{

    return 0;

  }

}
