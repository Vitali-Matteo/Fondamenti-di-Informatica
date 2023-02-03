#include<stdio.h>

int main(){

  int v1, v2;

  printf("Inserisci il primo voto: ");
  scanf("%d", &v1);

  if((v1 < 0) || (v1 > 30)){

    printf("Errore nell'inserimento.\n");

  }

  printf("Inserisci il secondo voto: ");
  scanf("%d", &v2);

  if((v2 < 0) || (v2 > 30)){

    printf("Errore nell'inserimento. \n");

  }

  if((v1 > 15) && (v2 > 15)){

    printf("Passato. La media è: %f. \n", (v1 + v2) / 2.0f);

  }
  else{

    printf("Lo stduente non è passato. \n");

  }

  return 0;

}

