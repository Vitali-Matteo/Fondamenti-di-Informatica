#include<stdio.h>

#define N 5

typedef struct{

  int NR;

  int NC;

  int Mat[N][N];

}Matrice_t;

int main(){

  Matrice_t MAT1, MAT2, Prodotto;

  int i, k, j;

  int S;

  int nr, nc;

  printf("Inserisci il numero righe della matrice 1: ");
  scanf("%d", &nr);

  while((nr < 0) || (nr > N)){

    printf("Errore. Reinserire numero righe: ");
    scanf("%d", &nr);

  }

  do{

    printf("Inserisci numero colonne della prima matrice: ");
    scanf("%d", &nc);

  }while((nc < 0) || (nc > N));

  MAT1.NR = nr;

  MAT1.NC = nc;

  for(i = 0; i < nr; i++){

    for(k = 0; k < nc; k++){

      scanf("%d", &MAT1.Mat[i][k]);

    }

  }

  do{

    printf("Inserisci numero righe della prima matrice: ");
    scanf("%d", &nr);

  }while((nr < 0) || (nr > N));

  do{

    printf("Inserisci numero colonne della prima matrice: ");
    scanf("%d", &nc);

  }while((nc < 0) || (nc > N));

  MAT2.NR = nr;

  MAT2.NC = nc;

  for(i = 0; i < nr; i++){

    for(k = 0; k < nc; k++){

      scanf("%d", &MAT2.Mat[i][k]);

    }

  }

  if(MAT1.NC == MAT2.NR){

    Prodotto.NR = MAT1.NC;

    Prodotto.NC = MAT2.NR;

    printf("La matrice prodotto sarà una %d X %d. \n", Prodotto.NR, Prodotto.NC);

    for(i = 0; i < MAT1.NR; i++){

      for(k = 0; k < MAT2.NC; k++){

	S = 0;

	for(j = 0; j < MAT1.NC; j++){

	  S = S + MAT1.Mat[i][j] * MAT2.Mat[j][i];

	}

	Prodotto.Mat[i][k] = S;

      }

    }

    printf("La matrice prodotto è: \n");

    for(i = 0; i < Prodotto.NR; i++){

      for(k = 0; k < Prodotto.NC; k++){

	printf("%d ", Prodotto.Mat[i][k]);

      }

      printf("\n");

    }

  }
  else{

    printf("La matrice prodoto non è costruibile. \n");

  }

  return 0;

}

	

  
