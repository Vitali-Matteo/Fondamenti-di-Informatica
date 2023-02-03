#include<stdio.h>

int main(){

  int n, cpari, r;

  printf("Inserisci un numero positivo: ");
  scanf("%d", &n);

  while(n <= 0){

    printf("Errore. Reinserici il numero: ");
    scanf("%d", &n);

  }

  cpari = 1;

  while((n > 0) && (cpari == 1)){

    r = n % 10;

    n = n / 10;

    if(r % 2 == 1){

      cpari = 0;

    }

  }

  if(cpari == 1){

    printf("Il numero inserito è formato da sole cifre pari. \n");

  }
  else{

    printf("Nel numero inserito ci sono una o più cifre dispari. \n");

  }

  return 0;

}
