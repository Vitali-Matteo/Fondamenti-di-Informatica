#include<stdio.h>

#define NR 5
#define NC 5

int main(){

  int mat[NR + 2][NC + 2];

  int i, k;

  int PR, PC;

  int S;

  float Media;

  printf("Inserisci la matrice %d X %d riga per riga: \n", NR, NC);

  for(i = 0; i < NR + 2; i++){

    for(k = 0; k < NC + 2; k++){

      mat[i][k] = 0;

    }

  }

  for(i = 1; i < NR + 1; i++){

    for(k = 1; k < NC + 1; k++){

	scanf("%d", &mat[i][k]);

    }

  }

  do{

    printf("Inserisci il valore della riga della cella: ");
    scanf("%d", &PR);

  }while((PR < 0) || (PR > NR - 1));

  do{

    printf("Inserisci il valore della colonna della cella: ");
    scanf("%d", &PC);

  }while((PC < 0) || (PC > NC - 1));

  S = 0;

  for(i = PR; i < PR + 3; i++){

    for(k = PC; k < PC + 3; k++){

      S = S + mat[i][k];

    }

  }

  S = S - mat[PR + 1][PC + 1];

  if(((PR == 0) && (PC == 0)) || ((PR == NR) && (PC == NC)) || ((PR == NR) && (PC == 0)) || ((PR == 0) && (PC == NC))){

    Media = (float) S / 3.0;

  }
  else{

    if((PR == 0) || (PR == NR) || (PC == NC) || (PC == 0)){

      Media = (float) S / 5.0;

    }
    else{

      Media = (float) S / 6.0;
      
    }

  }

  printf("La media degli elementi adiacenti all' elemento di posizione (%d, %d) è: %f. \n", PR, PC, Media);

  return 0;

}
      
