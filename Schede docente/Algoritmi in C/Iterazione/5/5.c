#include<stdio.h>

#define N 15

int main(){

  int S, voto, i;
  float Media;

  S = 0;

  for(i = 0; i < 15; i++){

    do{

      printf("Inserisci un voto tra 0 e 10: ");
      scanf("%d", &voto);

    }while((voto < 0) || (voto > 10));

    S = S + voto;

  }

  Media = (float)S / N;

  printf("La media dei %d voti inseriti è: %f. \n", N, Media);

  return 0;

}

  
