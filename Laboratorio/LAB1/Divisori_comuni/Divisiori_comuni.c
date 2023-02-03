#include<stdio.h>

int main(){

  int a, b, r, i;

  do{

    printf("Inserisci il numero a: ");
    scanf("%d", &a);

  }while(a <= 0);

  do{

    printf("Inserisci il numero b: ");
    scanf("%d", &b);

  }while(b <= 0);

  r = a % b;

  while(r > 0){

    a = b;

    b = r;

    r = a % b;

  }

  if(b == 1){

    printf("I numeri sono coprimi. \n");

  }
  else{

    i = 1;

    while(i <= b){

      if(b % i == 0){

	printf("%d ", i);

      }

      i++;

    }

    printf("\n");

  }

  return 0;

}
  
