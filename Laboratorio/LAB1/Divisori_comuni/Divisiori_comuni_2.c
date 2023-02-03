#include<stdio.h>

int main(){

  int a, b, i, flag;

  do{

    printf("Inserisci il numero a: ");
    scanf("%d", &a);

  }while(a <= 0);

  do{

    printf("Inserisci il numero b: ");
    scanf("%d", &b);

  }while(b <= 0);

  flag = 1;

  for(i = 2; i <= a && i <= b; i++){

    if((a % i == 0) && (b % i == 0)){

      printf("%d ", i);

      flag = 0;

    }

  }

  if(flag == 1){

    printf("I due numeri %d e %d sono coprimi. \n", a, b);

  }

  return 0;

}
