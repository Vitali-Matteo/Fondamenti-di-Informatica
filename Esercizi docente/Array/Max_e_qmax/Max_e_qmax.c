#include<stdio.h>

#define L 10

int main(){

  int v[L], Max, QMax, i;

  for(i = 0; i < L; i++){

    printf("Inserisci l'elemneto di poszione %d nel vettore: ", i + 1);
    scanf("%d", &v[i]);

  }

  Max = v[0];
  QMax = v[1];
  

  for(i = 0; i < L; i++){

    if(v[i] > Max){

      Max = v[i];

    }

    if((v[i] < Max) && (v[i] > QMax)){

      QMax = v[i];

    }

  }

  if(QMax == Max){

    printf("Errore, hai inserito una sequenza di valori tutti uguali. \n");

  }
  else{

    printf("Il massimo della sequenza è %d. Il quasi - massimo è: %d. \n", Max, QMax);

  }

   return 0;

}
