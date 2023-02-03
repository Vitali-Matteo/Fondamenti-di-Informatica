#include<stdio.h>

int main(){

  int n;

  printf("Inserisci un numero: ");
  scanf("%d", &n);

  if(n > 0){

    printf("numero positivo.\n");

  }
  else{

    if(n == 0){

      printf("Numero nullo.\n");

    }
    else{

      printf("Numero negativo.\n");

    }

  }

  return 0;

}
