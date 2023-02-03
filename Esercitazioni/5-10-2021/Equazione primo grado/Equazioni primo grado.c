/* Scrivere un programma che dati i coefficenti a e b di un'equazione di primo grado, ne calcoli le soluzioni o stabilisca se tale euazione è IMPOSSIBILE o INDETERMINATA*/

#include<stdio.h>

int main(){

  float a, b;
  float S;

  printf("Inserisci il coefficente a dell'equazione: ");
  scanf("%f", &a);

  printf("Inserisci il coefficente b dell'equazione: ");
  scanf("%f", &b);

  if(a == 0){

    if(b == 0){

      printf("L'equazione %f * x + %f è indeterminata. \n", a, b);

    }
    else{

      printf("L'equazione %f * x + %f è impossibile. \n", a ,b);

    }

  }
  else{

    S = -b / a;

    printf("L'equazione %f * x + %f ha soluzione: %f.\n", a, b, S);

  }

  return ;

}

    
