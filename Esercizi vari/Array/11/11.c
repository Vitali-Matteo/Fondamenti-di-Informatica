#include<stdio.h>

#define L 100

#define MAX 50

int main(){

  float vet[L];

  int i, k;

  int nins, Somma;

  nins = 0;

  Somma = 0;

  for(i = 0; i < L; i++){

    vet[i] = 0;

  }

  while(Somma < MAX && nins < L){

    do{

      printf("Inserisci elemento %d del vettore: ", nins + 1);
      scanf("%f", &vet[nins]);

    }while(vet[nins] == 0);

    Somma = Somma + vet[nins];

    nins++;

  }

  if(nins >= 3){

    for(i = 1; i < L && vet[i] != 0; i++){

      for(k = 1; k < L && vet[k] != 0; k++){

	if((i != k) && (vet[i] / vet[k] == vet[0])){

	  printf("Il rapporto o il suo inverso tra %f e %f è: %f. \n", vet[i], vet[k], vet[0]);

	}

      }

    }

  }

  printf("\n");

  return 0;

}

    
