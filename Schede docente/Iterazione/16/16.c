#include<stdio.h>

int main(){

  int n, i, M;

  do{

    printf("Inserisci un numero positivo: ");
    scanf("%d", &n);

  }while(n < 0);

  M = n;

  i = 1;

  while(n > 0){

    n = n - i;

    i = i + 1;

  }

  if(n == 0){

    printf("Il numero %d è triangolare. \n", M);

  }
  else{

    printf("Il numero %d non è triangolare. \n", M);

  }

  return 0;

}
