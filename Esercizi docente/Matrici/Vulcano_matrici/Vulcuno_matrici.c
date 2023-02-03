#include<stdio.h>

#define NR 10
#define NC 10

int main(){

  int mappa[NR][NC];

  int i, k;

  int PX, PY;

  /*for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      do{

	printf("Inserisci la quota della cella (%d, %d) della mappa: ", i + 1, k + 1);
	scanf("%d", &mappa[i][k]);

      }while(mappa[i][k] < 0);

    }

    }*/

  printf("Puoi prodere all'inserimento dellam amtrice %d x %d: \n", NR, NC);

  for(i = 0; i < NR; i++){

    for(k = 0; k < NC; k++){

      scanf("%d", &mappa[i][k]);

    }

  }

  do{

    printf("Inseerisci la posizione x del vulcano: ");
    scanf("%d", &PX);

  }while(PX < 0);

  do{

    printf("Inserisci la posizione y del vulcano: ");
    scanf("%d", &PY);

  }while(PY < 0);

  if(((PX > 0) && (PX < NR - 1)) && ((PY > 0) && (PY < NC - 1))){

    for(i = PY - 1; i <= PY + 1; i++){

      for(k = PX - 1; k <= PX + 1; k++){

	if((i != PY) || (k != PX)){

	  if(mappa[i][k] < mappa[PY][PX]){

	    mappa[i][k] = mappa[i][k] + 1;

	  }

	}

      }

    }

    mappa[PX][PY] = mappa[PX][PY] + 2;

    printf("Stampo la matrice delle quote... \n");

    for(i = 0; i < NR; i++){

      for(k = 0; k < NC; k++){

	printf("%d ", mappa[i][k]);

      }

      printf("\n");

    }

  }
  else{

    printf("La posizione (%d, %d) non è accettabile. \n", PX, PY);

  }

  return 0;

}
	    

	    

  
