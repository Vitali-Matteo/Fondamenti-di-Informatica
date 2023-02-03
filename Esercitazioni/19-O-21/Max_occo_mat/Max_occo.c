#include<stdio.h>

#define L 5

int main(){

  char Matc[L][L];

  int i, k, j, h;

  char MaxC;

  int S, Max;

  printf("Inserisci la matrice riga per riga: \n");

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      scanf(" %c", &Matc[i][k]);

      /*Oppure scanf("%*c");*/

    }

    printf("\n");

  }

  Max = 0;

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      S = 0;

      for(j = 0; j < L; j++){

	for(h = 0; h < L; h++){

	  if(Matc[i][k] == Matc[j][h]){

	    S = S + 1;

	  }

	}

      }

      if(Max < S){

	MaxC = Matc[i][k];

	Max = S;

      }

    }

  }

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      if(Matc[i][k] == MaxC){

	Matc[i][k] = '*';

      }

    }

  }

  printf("Il carattere più comune è: %c.\n", MaxC);

  printf("Stampo la matrice: \n");

  for(i = 0; i < L; i++){

    for(k = 0; k < L; k++){

      printf(" %c ", Matc[i][k]);

    }

    printf("\n");

  }

  return 0;

}


    

  
