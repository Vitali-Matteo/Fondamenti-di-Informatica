#include<stdio.h>

int main(){

  int n, quoziente, resto, flag;

  printf("Inserisci il numero che devo controllare: ");
  scanf("%d", &n);

  quoziente = n;

  flag = 1;

  while((quoziente > 0) && (flag == 1)){

    resto = quoziente % 10;

    quoziente = quoziente / 10;

    if(resto % 2 == 1){

      flag = 0;

    }

  }

  if(flag == 1){

    printf("Il numero è formato da sole cifre pari. \n");

  }
  else{

    printf("Il numero è formato da una o più cifre dispari. \n");

  }

  return 0;

}

    
