#include<stdio.h>

int main(){

  float f;

  printf("Inserisci un numero: ");
  scanf("%f", &f);

  if(f < 0){

    f = (- 1) * f;

  }


  printf("Il valore assoluto è: %f. \n", f);

  return 0;

}
