#include<stdio.h>

int main(){

  int a, b, P, flag;

  printf("Inserisci i due numeri interi divisi da un carattere $: ");
  scanf("%d $ %d", &a, &b);

  if(a < 0){

    a = - a;
    
    flag = 1; /* flag = 1 indica che il numero a è negativo */

  }
  else{

    flag = 0;

  }

  P = 0;

  while(a > 0){

    P = P + b;

    a--;

  }

  if(flag == 1){

    P = - P;

  }

  printf("Il prodotto tra %d e %d, svolto senza usare l'operatore * è: %d. \n", a, b, P);

  return 0;

}

  
