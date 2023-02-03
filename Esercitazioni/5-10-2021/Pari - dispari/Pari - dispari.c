#include<stdio.h>

int main(){

  int d;

  printf("Inserisci il numero positivo considerato: ");
  scanf("%d", &d);

  if(d % 2 == 0){

    printf("Il numero %d è pari. \n", d);

  }
  else{

    printf("Il numero %d è dispari. \n", d);

  }

  return 0;

}
